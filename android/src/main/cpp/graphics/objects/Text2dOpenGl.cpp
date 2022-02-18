/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#include "Text2dOpenGl.h"
#include "OpenGlHelper.h"
#include "TextureHolderInterface.h"

Text2dOpenGl::Text2dOpenGl(const std::shared_ptr<::ShaderProgramInterface> &shader)
    : shaderProgram(shader) {}

bool Text2dOpenGl::isReady() { return ready; }

std::shared_ptr<GraphicsObjectInterface> Text2dOpenGl::asGraphicsObject() { return shared_from_this(); }

void Text2dOpenGl::clear() {
    removeGlBuffers();
    removeTexture();
    ready = false;
}

void Text2dOpenGl::setTexts(const std::vector<TextDescription> &texts) {
    ready = false;
    dataReady = false;

    std::vector<GlyphDescription> newGlyphs;
    for (const auto & text : texts) {
        for (const auto & glyph : text.glyphs) {
            newGlyphs.push_back(glyph);
        }
    }
    glyphDescriptions = newGlyphs;

    vertices.clear();
    indices.clear();

    int numGlyphs = glyphDescriptions.size();
    for (int i = 0; i < numGlyphs; i++) {
        const auto &glyph = glyphDescriptions.at(i);

        vertices.push_back((float) glyph.frame.topLeft.x);
        vertices.push_back((float) glyph.frame.topLeft.y);

        vertices.push_back((float) glyph.frame.bottomLeft.x);
        vertices.push_back((float) glyph.frame.bottomLeft.y);

        vertices.push_back((float) glyph.frame.bottomRight.x);
        vertices.push_back((float) glyph.frame.bottomRight.y);

        vertices.push_back((float) glyph.frame.topRight.x);
        vertices.push_back((float) glyph.frame.topRight.y);

        indices.push_back(i * 4);
        indices.push_back(i * 4 + 1);
        indices.push_back(i * 4 + 2);
        indices.push_back(i * 4);
        indices.push_back(i * 4 + 2);
        indices.push_back(i * 4 + 3);
    }
    adjustTextureCoordinates();

    dataReady = true;
}

void Text2dOpenGl::setup(const std::shared_ptr<::RenderingContextInterface> &context) {
    if (ready || !dataReady) return;

    std::shared_ptr<OpenGlContext> openGlContext = std::static_pointer_cast<OpenGlContext>(context);
    if (openGlContext->getProgram(shaderProgram->getProgramName()) == 0) {
        shaderProgram->setupProgram(openGlContext);
    }

    int mProgram = openGlContext->getProgram(shaderProgram->getProgramName());
    glUseProgram(mProgram);

    positionHandle = glGetAttribLocation(mProgram, "vPosition");
    glGenBuffers(1, &vertexBuffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat) * vertices.size(), &vertices[0], GL_STATIC_DRAW);

    textureCoordinateHandle = glGetAttribLocation(mProgram, "texCoordinate");
    glGenBuffers(1, &textureCoordsBuffer);
    glBindBuffer(GL_ARRAY_BUFFER, textureCoordsBuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat) * textureCoords.size(), &textureCoords[0], GL_STATIC_DRAW);

    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glGenBuffers(1, &indexBuffer);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(GLubyte) * indices.size(), &indices[0], GL_STATIC_DRAW);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

    mvpMatrixHandle = glGetUniformLocation(mProgram, "uMVPMatrix");

    ready = true;
}

void Text2dOpenGl::removeGlBuffers() {
    glDeleteBuffers(1, &vertexBuffer);
    glDeleteBuffers(1, &textureCoordsBuffer);
    glDeleteBuffers(1, &indexBuffer);
}

void Text2dOpenGl::loadTexture(const std::shared_ptr<TextureHolderInterface> &textureHolder) {
    glGenTextures(1, (unsigned int *)&texturePointer[0]);

    if (textureHolder != nullptr) {
        glBindTexture(GL_TEXTURE_2D, (unsigned int)texturePointer[0]);

        textureHolder->attachToGraphics();

        // Set filtering
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

        factorHeight = textureHolder->getImageHeight() * 1.0f / textureHolder->getTextureHeight();
        factorWidth = textureHolder->getImageWidth() * 1.0f / textureHolder->getTextureWidth();

        adjustTextureCoordinates();

        glBindTexture(GL_TEXTURE_2D, 0);

        textureLoaded = true;
    }
}

void Text2dOpenGl::removeTexture() {
    glDeleteTextures(1, &texturePointer[0]);
    texturePointer = std::vector<GLuint>(1, 0);
    textureLoaded = false;
}

void Text2dOpenGl::adjustTextureCoordinates() {
    textureCoords.clear();

    int numGlyphs = glyphDescriptions.size();
    for (int i = 0; i < numGlyphs; i++) {
        const auto &glyph = glyphDescriptions.at(i);
        float tMinX = factorWidth * glyph.textureCoordinates.bottomLeft.x;
        float tMaxX = factorWidth * glyph.textureCoordinates.bottomRight.x;
        float tMinY = factorHeight * glyph.textureCoordinates.bottomLeft.y;
        float tMaxY = factorHeight * glyph.textureCoordinates.topLeft.y;
        textureCoords.insert(textureCoords.end(), {tMinX, tMinY, tMinX, tMaxY, tMaxX, tMaxY, tMaxX, tMinY});
    }
}

void Text2dOpenGl::renderAsMask(const std::shared_ptr<::RenderingContextInterface> &context, const RenderPassConfig &renderPass,
                                int64_t mvpMatrix, double screenPixelAsRealMeterFactor) {
    glColorMask(GL_FALSE, GL_FALSE, GL_FALSE, GL_FALSE);
    render(context, renderPass, mvpMatrix, false, screenPixelAsRealMeterFactor);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
}

void Text2dOpenGl::render(const std::shared_ptr<::RenderingContextInterface> &context, const RenderPassConfig &renderPass,
                          int64_t mvpMatrix, bool isMasked, double screenPixelAsRealMeterFactor) {
    if (!ready)
        return;

    if (isMasked) {
        glStencilFunc(GL_EQUAL, 128, 128);
        glStencilOp(GL_KEEP, GL_KEEP, GL_KEEP);
    }

    std::shared_ptr<OpenGlContext> openGlContext = std::static_pointer_cast<OpenGlContext>(context);
    int mProgram = openGlContext->getProgram(shaderProgram->getProgramName());
    glUseProgram(mProgram);

    if (textureLoaded) {
        prepareTextureDraw(openGlContext, mProgram);

        glEnableVertexAttribArray(textureCoordinateHandle);
        glBindBuffer(GL_ARRAY_BUFFER, textureCoordsBuffer);
        glVertexAttribPointer(textureCoordinateHandle, 2, GL_FLOAT, false, 0, nullptr);
    }

    shaderProgram->preRender(context);

    // enable vPosition attribs
    glEnableVertexAttribArray(positionHandle);
    glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
    glVertexAttribPointer(positionHandle, 2, GL_FLOAT, false, 0, nullptr);

    glBindBuffer(GL_ARRAY_BUFFER, 0);

    // Apply the projection and view transformation
    glUniformMatrix4fv(mvpMatrixHandle, 1, false, (GLfloat *)mvpMatrix);

    // Enable blending
    glEnable(GL_BLEND);
    glBlendFunc(GL_ONE, GL_ONE_MINUS_SRC_ALPHA);

    // Draw the triangles
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuffer);
    glDrawElements(GL_TRIANGLES, indices.size(), GL_UNSIGNED_BYTE, nullptr);


    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

    // Disable vertex array
    glDisableVertexAttribArray(positionHandle);

    if (textureLoaded) {
        glDisableVertexAttribArray(textureCoordinateHandle);
    }

    glDisable(GL_BLEND);
}

void Text2dOpenGl::prepareTextureDraw(std::shared_ptr<OpenGlContext> &openGLContext, int mProgram) {
    int mTextureUniformHandle = glGetUniformLocation(mProgram, "u_Texture");

    // Set the active texture unit to texture unit 0.
    glActiveTexture(GL_TEXTURE0);

    // Bind the texture to this unit.
    glBindTexture(GL_TEXTURE_2D, (unsigned int)texturePointer[0]);

    // Tell the texture uniform sampler to use this texture in the shader by binding to texture unit 0.
    glUniform1i(mTextureUniformHandle, 0);
}