// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from task_scheduler.djinni

package io.openmobilemaps.mapscore.shared.map.scheduling

data class TaskConfig(
    var id: String,
    var delay: Long,
    var priority: TaskPriority,
    var executionEnvironment: ExecutionEnvironment,
)