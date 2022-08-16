/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#pragma once

#include <optional>
#include "RectCoord.h"

class BoundingBox
{
  public:
    BoundingBox(const std::string &systemIdentifier);

    void addPoint(const double x, const double y, const double z);
    void addPoint(const Coord& p);
    void addBox(const std::optional<BoundingBox>& box);

    RectCoord asRectCoord();

    Coord center() const;

    Coord min;
    Coord max;
    std::string systemIdentifier;
};