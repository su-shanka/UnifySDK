/******************************************************************************
 * # License
 * <b>Copyright 2022 Silicon Laboratories Inc. www.silabs.com</b>
 ******************************************************************************
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 *****************************************************************************/

// clang-format off
// This file is generated by ZCL Advanced Platform generator. Please don't edit manually.

/**
 * @defgroup dotdot_cluster_command_id_definitions DotDot Cluster Commands ID definitions
 * @ingroup unify_components
 * @brief Header with Cluster Command ID definitions
 *
 * Cluster command identifier defines (e.g. OnOff On Command ID is 0x01)
 *
 * @{
 */

#ifndef DOTDOT_CLUSTER_COMMAND_ID_DEFINITIONS_H
#define DOTDOT_CLUSTER_COMMAND_ID_DEFINITIONS_H


// Commands for cluster: Basic
#define DOTDOT_BASIC_RESET_TO_FACTORY_DEFAULTS_COMMAND_ID (0x0)

// Commands for cluster: PowerConfiguration

// Commands for cluster: DeviceTemperatureConfiguration

// Commands for cluster: Identify
#define DOTDOT_IDENTIFY_IDENTIFY_COMMAND_ID (0x0)
#define DOTDOT_IDENTIFY_IDENTIFY_QUERY_RESPONSE_COMMAND_ID (0x0)
#define DOTDOT_IDENTIFY_IDENTIFY_QUERY_COMMAND_ID (0x1)
#define DOTDOT_IDENTIFY_TRIGGER_EFFECT_COMMAND_ID (0x40)

// Commands for cluster: Groups
#define DOTDOT_GROUPS_ADD_GROUP_COMMAND_ID (0x0)
#define DOTDOT_GROUPS_ADD_GROUP_RESPONSE_COMMAND_ID (0x0)
#define DOTDOT_GROUPS_VIEW_GROUP_COMMAND_ID (0x1)
#define DOTDOT_GROUPS_VIEW_GROUP_RESPONSE_COMMAND_ID (0x1)
#define DOTDOT_GROUPS_GET_GROUP_MEMBERSHIP_COMMAND_ID (0x2)
#define DOTDOT_GROUPS_GET_GROUP_MEMBERSHIP_RESPONSE_COMMAND_ID (0x2)
#define DOTDOT_GROUPS_REMOVE_GROUP_COMMAND_ID (0x3)
#define DOTDOT_GROUPS_REMOVE_GROUP_RESPONSE_COMMAND_ID (0x3)
#define DOTDOT_GROUPS_REMOVE_ALL_GROUPS_COMMAND_ID (0x4)
#define DOTDOT_GROUPS_ADD_GROUP_IF_IDENTIFYING_COMMAND_ID (0x5)

// Commands for cluster: Scenes
#define DOTDOT_SCENES_ADD_SCENE_COMMAND_ID (0x0)
#define DOTDOT_SCENES_ADD_SCENE_RESPONSE_COMMAND_ID (0x0)
#define DOTDOT_SCENES_VIEW_SCENE_COMMAND_ID (0x1)
#define DOTDOT_SCENES_VIEW_SCENE_RESPONSE_COMMAND_ID (0x1)
#define DOTDOT_SCENES_REMOVE_SCENE_COMMAND_ID (0x2)
#define DOTDOT_SCENES_REMOVE_SCENE_RESPONSE_COMMAND_ID (0x2)
#define DOTDOT_SCENES_REMOVE_ALL_SCENES_COMMAND_ID (0x3)
#define DOTDOT_SCENES_REMOVE_ALL_SCENES_RESPONSE_COMMAND_ID (0x3)
#define DOTDOT_SCENES_STORE_SCENE_COMMAND_ID (0x4)
#define DOTDOT_SCENES_STORE_SCENE_RESPONSE_COMMAND_ID (0x4)
#define DOTDOT_SCENES_RECALL_SCENE_COMMAND_ID (0x5)
#define DOTDOT_SCENES_GET_SCENE_MEMBERSHIP_COMMAND_ID (0x6)
#define DOTDOT_SCENES_GET_SCENE_MEMBERSHIP_RESPONSE_COMMAND_ID (0x6)
#define DOTDOT_SCENES_ENHANCED_ADD_SCENE_COMMAND_ID (0x40)
#define DOTDOT_SCENES_ENHANCED_ADD_SCENE_RESPONSE_COMMAND_ID (0x40)
#define DOTDOT_SCENES_ENHANCED_VIEW_SCENE_COMMAND_ID (0x41)
#define DOTDOT_SCENES_ENHANCED_VIEW_SCENE_RESPONSE_COMMAND_ID (0x41)
#define DOTDOT_SCENES_COPY_SCENE_COMMAND_ID (0x42)
#define DOTDOT_SCENES_COPY_SCENE_RESPONSE_COMMAND_ID (0x42)

// Commands for cluster: OnOff
#define DOTDOT_ON_OFF_OFF_COMMAND_ID (0x0)
#define DOTDOT_ON_OFF_ON_COMMAND_ID (0x1)
#define DOTDOT_ON_OFF_TOGGLE_COMMAND_ID (0x2)
#define DOTDOT_ON_OFF_OFF_WITH_EFFECT_COMMAND_ID (0x40)
#define DOTDOT_ON_OFF_ON_WITH_RECALL_GLOBAL_SCENE_COMMAND_ID (0x41)
#define DOTDOT_ON_OFF_ON_WITH_TIMED_OFF_COMMAND_ID (0x42)

// Commands for cluster: Level
#define DOTDOT_LEVEL_MOVE_TO_LEVEL_COMMAND_ID (0x0)
#define DOTDOT_LEVEL_MOVE_COMMAND_ID (0x1)
#define DOTDOT_LEVEL_STEP_COMMAND_ID (0x2)
#define DOTDOT_LEVEL_STOP_COMMAND_ID (0x3)
#define DOTDOT_LEVEL_MOVE_TO_LEVEL_WITH_ON_OFF_COMMAND_ID (0x4)
#define DOTDOT_LEVEL_MOVE_WITH_ON_OFF_COMMAND_ID (0x5)
#define DOTDOT_LEVEL_STEP_WITH_ON_OFF_COMMAND_ID (0x6)
#define DOTDOT_LEVEL_STOP_WITH_ON_OFF_COMMAND_ID (0x7)
#define DOTDOT_LEVEL_MOVE_TO_CLOSEST_FREQUENCY_COMMAND_ID (0x8)

// Commands for cluster: Alarms
#define DOTDOT_ALARMS_RESET_ALARM_COMMAND_ID (0x0)
#define DOTDOT_ALARMS_ALARM_COMMAND_ID (0x0)
#define DOTDOT_ALARMS_RESET_ALL_ALARMS_COMMAND_ID (0x1)
#define DOTDOT_ALARMS_GET_ALARM_RESPONSE_COMMAND_ID (0x1)
#define DOTDOT_ALARMS_GET_ALARM_COMMAND_ID (0x2)
#define DOTDOT_ALARMS_RESET_ALARM_LOG_COMMAND_ID (0x3)

// Commands for cluster: Time

// Commands for cluster: Commissioning
#define DOTDOT_COMMISSIONING_RESTART_DEVICE_COMMAND_ID (0x0)
#define DOTDOT_COMMISSIONING_RESTART_DEVICE_RESPONSE_COMMAND_ID (0x0)
#define DOTDOT_COMMISSIONING_SAVE_STARTUP_PARAMETERS_COMMAND_ID (0x1)
#define DOTDOT_COMMISSIONING_SAVE_STARTUP_PARAMETERS_RESPONSE_COMMAND_ID (0x1)
#define DOTDOT_COMMISSIONING_RESTORE_STARTUP_PARAMETERS_COMMAND_ID (0x2)
#define DOTDOT_COMMISSIONING_RESTORE_STARTUP_PARAMETERS_RESPONSE_COMMAND_ID (0x2)
#define DOTDOT_COMMISSIONING_RESET_STARTUP_PARAMETERS_COMMAND_ID (0x3)
#define DOTDOT_COMMISSIONING_RESET_STARTUP_PARAMETERS_RESPONSE_COMMAND_ID (0x3)

// Commands for cluster: OTAUpgrade
#define DOTDOT_OTA_UPGRADE_IMAGE_NOTIFY_COMMAND_ID (0x0)
#define DOTDOT_OTA_UPGRADE_QUERY_NEXT_IMAGE_REQUEST_COMMAND_ID (0x1)
#define DOTDOT_OTA_UPGRADE_QUERY_NEXT_IMAGE_RESPONSE_COMMAND_ID (0x2)
#define DOTDOT_OTA_UPGRADE_IMAGE_BLOCK_REQUEST_COMMAND_ID (0x3)
#define DOTDOT_OTA_UPGRADE_IMAGE_PAGE_REQUEST_COMMAND_ID (0x4)
#define DOTDOT_OTA_UPGRADE_IMAGE_BLOCK_RESPONSE_COMMAND_ID (0x5)
#define DOTDOT_OTA_UPGRADE_UPGRADE_END_REQUEST_COMMAND_ID (0x6)
#define DOTDOT_OTA_UPGRADE_UPGRADE_END_RESPONSE_COMMAND_ID (0x7)
#define DOTDOT_OTA_UPGRADE_QUERY_DEVICE_SPECIFIC_FILE_REQUEST_COMMAND_ID (0x8)
#define DOTDOT_OTA_UPGRADE_QUERY_DEVICE_SPECIFIC_FILE_RESPONSE_COMMAND_ID (0x9)

// Commands for cluster: PollControl
#define DOTDOT_POLL_CONTROL_CHECK_IN_COMMAND_ID (0x0)
#define DOTDOT_POLL_CONTROL_CHECK_IN_RESPONSE_COMMAND_ID (0x0)
#define DOTDOT_POLL_CONTROL_FAST_POLL_STOP_COMMAND_ID (0x1)
#define DOTDOT_POLL_CONTROL_SET_LONG_POLL_INTERVAL_COMMAND_ID (0x2)
#define DOTDOT_POLL_CONTROL_SET_SHORT_POLL_INTERVAL_COMMAND_ID (0x3)

// Commands for cluster: ShadeConfiguration

// Commands for cluster: DoorLock
#define DOTDOT_DOOR_LOCK_LOCK_DOOR_COMMAND_ID (0x0)
#define DOTDOT_DOOR_LOCK_LOCK_DOOR_RESPONSE_COMMAND_ID (0x0)
#define DOTDOT_DOOR_LOCK_UNLOCK_DOOR_COMMAND_ID (0x1)
#define DOTDOT_DOOR_LOCK_UNLOCK_DOOR_RESPONSE_COMMAND_ID (0x1)
#define DOTDOT_DOOR_LOCK_TOGGLE_COMMAND_ID (0x2)
#define DOTDOT_DOOR_LOCK_TOGGLE_RESPONSE_COMMAND_ID (0x2)
#define DOTDOT_DOOR_LOCK_UNLOCK_WITH_TIMEOUT_COMMAND_ID (0x3)
#define DOTDOT_DOOR_LOCK_UNLOCK_WITH_TIMEOUT_RESPONSE_COMMAND_ID (0x3)
#define DOTDOT_DOOR_LOCK_GET_LOG_RECORD_COMMAND_ID (0x4)
#define DOTDOT_DOOR_LOCK_GET_LOG_RECORD_RESPONSE_COMMAND_ID (0x4)
#define DOTDOT_DOOR_LOCK_SETPIN_CODE_COMMAND_ID (0x5)
#define DOTDOT_DOOR_LOCK_SETPIN_CODE_RESPONSE_COMMAND_ID (0x5)
#define DOTDOT_DOOR_LOCK_GETPIN_CODE_COMMAND_ID (0x6)
#define DOTDOT_DOOR_LOCK_GETPIN_CODE_RESPONSE_COMMAND_ID (0x6)
#define DOTDOT_DOOR_LOCK_CLEARPIN_CODE_COMMAND_ID (0x7)
#define DOTDOT_DOOR_LOCK_CLEARPIN_CODE_RESPONSE_COMMAND_ID (0x7)
#define DOTDOT_DOOR_LOCK_CLEAR_ALLPIN_CODES_COMMAND_ID (0x8)
#define DOTDOT_DOOR_LOCK_CLEAR_ALLPIN_CODES_RESPONSE_COMMAND_ID (0x8)
#define DOTDOT_DOOR_LOCK_SET_USER_STATUS_COMMAND_ID (0x9)
#define DOTDOT_DOOR_LOCK_SET_USER_STATUS_RESPONSE_COMMAND_ID (0x9)
#define DOTDOT_DOOR_LOCK_GET_USER_STATUS_COMMAND_ID (0xA)
#define DOTDOT_DOOR_LOCK_GET_USER_STATUS_RESPONSE_COMMAND_ID (0xA)
#define DOTDOT_DOOR_LOCK_SET_WEEKDAY_SCHEDULE_COMMAND_ID (0xB)
#define DOTDOT_DOOR_LOCK_SET_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID (0xB)
#define DOTDOT_DOOR_LOCK_GET_WEEKDAY_SCHEDULE_COMMAND_ID (0xC)
#define DOTDOT_DOOR_LOCK_GET_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID (0xC)
#define DOTDOT_DOOR_LOCK_CLEAR_WEEKDAY_SCHEDULE_COMMAND_ID (0xD)
#define DOTDOT_DOOR_LOCK_CLEAR_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID (0xD)
#define DOTDOT_DOOR_LOCK_SET_YEAR_DAY_SCHEDULE_COMMAND_ID (0xE)
#define DOTDOT_DOOR_LOCK_SET_YEAR_DAY_SCHEDULE_RESPONSE_COMMAND_ID (0xE)
#define DOTDOT_DOOR_LOCK_GET_YEAR_DAY_SCHEDULE_COMMAND_ID (0xF)
#define DOTDOT_DOOR_LOCK_GET_YEAR_DAY_SCHEDULE_RESPONSE_COMMAND_ID (0xF)
#define DOTDOT_DOOR_LOCK_CLEAR_YEAR_DAY_SCHEDULE_COMMAND_ID (0x10)
#define DOTDOT_DOOR_LOCK_CLEAR_YEAR_DAY_SCHEDULE_RESPONSE_COMMAND_ID (0x10)
#define DOTDOT_DOOR_LOCK_SET_HOLIDAY_SCHEDULE_COMMAND_ID (0x11)
#define DOTDOT_DOOR_LOCK_SET_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x11)
#define DOTDOT_DOOR_LOCK_GET_HOLIDAY_SCHEDULE_COMMAND_ID (0x12)
#define DOTDOT_DOOR_LOCK_GET_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x12)
#define DOTDOT_DOOR_LOCK_CLEAR_HOLIDAY_SCHEDULE_COMMAND_ID (0x13)
#define DOTDOT_DOOR_LOCK_CLEAR_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID (0x13)
#define DOTDOT_DOOR_LOCK_SET_USER_TYPE_COMMAND_ID (0x14)
#define DOTDOT_DOOR_LOCK_SET_USER_TYPE_RESPONSE_COMMAND_ID (0x14)
#define DOTDOT_DOOR_LOCK_GET_USER_TYPE_COMMAND_ID (0x15)
#define DOTDOT_DOOR_LOCK_GET_USER_TYPE_RESPONSE_COMMAND_ID (0x15)
#define DOTDOT_DOOR_LOCK_SETRFID_CODE_COMMAND_ID (0x16)
#define DOTDOT_DOOR_LOCK_SETRFID_CODE_RESPONSE_COMMAND_ID (0x16)
#define DOTDOT_DOOR_LOCK_GETRFID_CODE_COMMAND_ID (0x17)
#define DOTDOT_DOOR_LOCK_GETRFID_CODE_RESPONSE_COMMAND_ID (0x17)
#define DOTDOT_DOOR_LOCK_CLEARRFID_CODE_COMMAND_ID (0x18)
#define DOTDOT_DOOR_LOCK_CLEARRFID_CODE_RESPONSE_COMMAND_ID (0x18)
#define DOTDOT_DOOR_LOCK_CLEAR_ALLRFID_CODES_COMMAND_ID (0x19)
#define DOTDOT_DOOR_LOCK_CLEAR_ALLRFID_CODES_RESPONSE_COMMAND_ID (0x19)
#define DOTDOT_DOOR_LOCK_OPERATING_EVENT_NOTIFICATION_COMMAND_ID (0x20)
#define DOTDOT_DOOR_LOCK_PROGRAMMING_EVENT_NOTIFICATION_COMMAND_ID (0x21)

// Commands for cluster: WindowCovering
#define DOTDOT_WINDOW_COVERING_UP_OR_OPEN_COMMAND_ID (0x0)
#define DOTDOT_WINDOW_COVERING_DOWN_OR_CLOSE_COMMAND_ID (0x1)
#define DOTDOT_WINDOW_COVERING_STOP_COMMAND_ID (0x2)
#define DOTDOT_WINDOW_COVERING_GO_TO_LIFT_VALUE_COMMAND_ID (0x4)
#define DOTDOT_WINDOW_COVERING_GO_TO_LIFT_PERCENTAGE_COMMAND_ID (0x5)
#define DOTDOT_WINDOW_COVERING_GO_TO_TILT_VALUE_COMMAND_ID (0x7)
#define DOTDOT_WINDOW_COVERING_GO_TO_TILT_PERCENTAGE_COMMAND_ID (0x8)

// Commands for cluster: BarrierControl
#define DOTDOT_BARRIER_CONTROL_GO_TO_PERCENT_COMMAND_ID (0x0)
#define DOTDOT_BARRIER_CONTROL_STOP_COMMAND_ID (0x1)

// Commands for cluster: PumpConfigurationAndControl

// Commands for cluster: Thermostat
#define DOTDOT_THERMOSTAT_SETPOINT_RAISE_OR_LOWER_COMMAND_ID (0x0)
#define DOTDOT_THERMOSTAT_GET_WEEKLY_SCHEDULE_RESPONSE_COMMAND_ID (0x0)
#define DOTDOT_THERMOSTAT_SET_WEEKLY_SCHEDULE_COMMAND_ID (0x1)
#define DOTDOT_THERMOSTAT_GET_RELAY_STATUS_LOG_RESPONSE_COMMAND_ID (0x1)
#define DOTDOT_THERMOSTAT_GET_WEEKLY_SCHEDULE_COMMAND_ID (0x2)
#define DOTDOT_THERMOSTAT_CLEAR_WEEKLY_SCHEDULE_COMMAND_ID (0x3)
#define DOTDOT_THERMOSTAT_GET_RELAY_STATUS_LOG_COMMAND_ID (0x4)

// Commands for cluster: FanControl

// Commands for cluster: DehumidificationControl

// Commands for cluster: ThermostatUserInterfaceConfiguration

// Commands for cluster: ColorControl
#define DOTDOT_COLOR_CONTROL_MOVE_TO_HUE_COMMAND_ID (0x0)
#define DOTDOT_COLOR_CONTROL_MOVE_HUE_COMMAND_ID (0x1)
#define DOTDOT_COLOR_CONTROL_STEP_HUE_COMMAND_ID (0x2)
#define DOTDOT_COLOR_CONTROL_MOVE_TO_SATURATION_COMMAND_ID (0x3)
#define DOTDOT_COLOR_CONTROL_MOVE_SATURATION_COMMAND_ID (0x4)
#define DOTDOT_COLOR_CONTROL_STEP_SATURATION_COMMAND_ID (0x5)
#define DOTDOT_COLOR_CONTROL_MOVE_TO_HUE_AND_SATURATION_COMMAND_ID (0x6)
#define DOTDOT_COLOR_CONTROL_MOVE_TO_COLOR_COMMAND_ID (0x7)
#define DOTDOT_COLOR_CONTROL_MOVE_COLOR_COMMAND_ID (0x8)
#define DOTDOT_COLOR_CONTROL_STEP_COLOR_COMMAND_ID (0x9)
#define DOTDOT_COLOR_CONTROL_MOVE_TO_COLOR_TEMPERATURE_COMMAND_ID (0xA)
#define DOTDOT_COLOR_CONTROL_ENHANCED_MOVE_TO_HUE_COMMAND_ID (0x40)
#define DOTDOT_COLOR_CONTROL_ENHANCED_MOVE_HUE_COMMAND_ID (0x41)
#define DOTDOT_COLOR_CONTROL_ENHANCED_STEP_HUE_COMMAND_ID (0x42)
#define DOTDOT_COLOR_CONTROL_ENHANCED_MOVE_TO_HUE_AND_SATURATION_COMMAND_ID (0x43)
#define DOTDOT_COLOR_CONTROL_COLOR_LOOP_SET_COMMAND_ID (0x44)
#define DOTDOT_COLOR_CONTROL_STOP_MOVE_STEP_COMMAND_ID (0x47)
#define DOTDOT_COLOR_CONTROL_MOVE_COLOR_TEMPERATURE_COMMAND_ID (0x4B)
#define DOTDOT_COLOR_CONTROL_STEP_COLOR_TEMPERATURE_COMMAND_ID (0x4C)

// Commands for cluster: BallastConfiguration

// Commands for cluster: IlluminanceMeasurement

// Commands for cluster: IlluminanceLevelSensing

// Commands for cluster: TemperatureMeasurement

// Commands for cluster: PressureMeasurement

// Commands for cluster: FlowMeasurement

// Commands for cluster: RelativityHumidity

// Commands for cluster: OccupancySensing

// Commands for cluster: SoilMoisture

// Commands for cluster: PhMeasurement

// Commands for cluster: ElectricalConductivityMeasurement

// Commands for cluster: WindSpeedMeasurement

// Commands for cluster: CarbonMonoxide

// Commands for cluster: CarbonDioxide

// Commands for cluster: PM25

// Commands for cluster: IASZone
#define DOTDOT_IAS_ZONE_ZONE_ENROLL_RESPONSE_COMMAND_ID (0x0)
#define DOTDOT_IAS_ZONE_ZONE_STATUS_CHANGE_NOTIFICATION_COMMAND_ID (0x0)
#define DOTDOT_IAS_ZONE_INITIATE_NORMAL_OPERATION_MODE_COMMAND_ID (0x1)
#define DOTDOT_IAS_ZONE_ZONE_ENROLL_REQUEST_COMMAND_ID (0x1)
#define DOTDOT_IAS_ZONE_INITIATE_TEST_MODE_COMMAND_ID (0x2)

// Commands for cluster: IASACE
#define DOTDOT_IASACE_ARM_COMMAND_ID (0x0)
#define DOTDOT_IASACE_ARM_RESPONSE_COMMAND_ID (0x0)
#define DOTDOT_IASACE_BYPASS_COMMAND_ID (0x1)
#define DOTDOT_IASACE_GET_ZONEID_MAP_RESPONSE_COMMAND_ID (0x1)
#define DOTDOT_IASACE_EMERGENCY_COMMAND_ID (0x2)
#define DOTDOT_IASACE_GET_ZONE_INFORMATION_RESPONSE_COMMAND_ID (0x2)
#define DOTDOT_IASACE_FIRE_COMMAND_ID (0x3)
#define DOTDOT_IASACE_ZONE_STATUS_CHANGED_COMMAND_ID (0x3)
#define DOTDOT_IASACE_PANIC_COMMAND_ID (0x4)
#define DOTDOT_IASACE_PANEL_STATUS_CHANGED_COMMAND_ID (0x4)
#define DOTDOT_IASACE_GET_ZONEID_MAP_COMMAND_ID (0x5)
#define DOTDOT_IASACE_GET_PANEL_STATUS_RESPONSE_COMMAND_ID (0x5)
#define DOTDOT_IASACE_GET_ZONE_INFORMATION_COMMAND_ID (0x6)
#define DOTDOT_IASACE_SET_BYPASSED_ZONE_LIST_COMMAND_ID (0x6)
#define DOTDOT_IASACE_GET_PANEL_STATUS_COMMAND_ID (0x7)
#define DOTDOT_IASACE_BYPASS_RESPONSE_COMMAND_ID (0x7)
#define DOTDOT_IASACE_GET_BYPASSED_ZONE_LIST_COMMAND_ID (0x8)
#define DOTDOT_IASACE_GET_ZONE_STATUS_RESPONSE_COMMAND_ID (0x8)
#define DOTDOT_IASACE_GET_ZONE_STATUS_COMMAND_ID (0x9)

// Commands for cluster: IASWD
#define DOTDOT_IASWD_START_WARNING_COMMAND_ID (0x0)
#define DOTDOT_IASWD_SQUAWK_COMMAND_ID (0x1)

// Commands for cluster: Metering

// Commands for cluster: ElectricalMeasurement
#define DOTDOT_ELECTRICAL_MEASUREMENT_GET_PROFILE_INFO_RESPONSE_COMMAND_ID (0x0)
#define DOTDOT_ELECTRICAL_MEASUREMENT_GET_PROFILE_INFO_COMMAND_ID (0x0)
#define DOTDOT_ELECTRICAL_MEASUREMENT_GET_MEASUREMENT_PROFILE_RESPONSE_COMMAND_ID (0x1)
#define DOTDOT_ELECTRICAL_MEASUREMENT_GET_MEASUREMENT_PROFILE_COMMAND_ID (0x1)

// Commands for cluster: Diagnostics

// Commands for cluster: ProtocolController-RFTelemetry
#define DOTDOT_PROTOCOL_CONTROLLER_RF_TELEMETRY_TX_REPORT_COMMAND_ID (0x1)

// Commands for cluster: State
#define DOTDOT_STATE_REMOVE_COMMAND_ID (0x1)
#define DOTDOT_STATE_REMOVE_OFFLINE_COMMAND_ID (0x2)
#define DOTDOT_STATE_DISCOVER_NEIGHBORS_COMMAND_ID (0x3)
#define DOTDOT_STATE_INTERVIEW_COMMAND_ID (0x4)

// Commands for cluster: Binding
#define DOTDOT_BINDING_BIND_COMMAND_ID (0x1)
#define DOTDOT_BINDING_UNBIND_COMMAND_ID (0x2)
#define DOTDOT_BINDING_BIND_TO_PROTOCOL_CONTROLLER_COMMAND_ID (0x3)
#define DOTDOT_BINDING_UNBIND_FROM_PROTOCOL_CONTROLLER_COMMAND_ID (0x4)

// Commands for cluster: SystemMetrics

// Commands for cluster: ApplicationMonitoring
#define DOTDOT_APPLICATION_MONITORING_LOG_ENTRY_COMMAND_ID (0x1)

// Commands for cluster: NameAndLocation

// Commands for cluster: ConfigurationParameters
#define DOTDOT_CONFIGURATION_PARAMETERS_DISCOVER_PARAMETER_COMMAND_ID (0x1)
#define DOTDOT_CONFIGURATION_PARAMETERS_DEFAULT_RESET_ALL_PARAMETERS_COMMAND_ID (0x2)
#define DOTDOT_CONFIGURATION_PARAMETERS_SET_PARAMETER_COMMAND_ID (0x3)
#define DOTDOT_CONFIGURATION_PARAMETERS_DISCOVER_PARAMETER_RANGE_COMMAND_ID (0x4)

// Commands for cluster: AoXLocator
#define DOTDOT_AOX_LOCATOR_IQ_REPORT_COMMAND_ID (0x1)
#define DOTDOT_AOX_LOCATOR_ANGLE_REPORT_COMMAND_ID (0x2)
#define DOTDOT_AOX_LOCATOR_ANGLE_CORRECTION_COMMAND_ID (0x3)

// Commands for cluster: AoXPositionEstimation

// Commands for cluster: ProtocolController-NetworkManagement
#define DOTDOT_PROTOCOL_CONTROLLER_NETWORK_MANAGEMENT_WRITE_COMMAND_ID (0x1)

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif  //DOTDOT_CLUSTER_COMMAND_ID_DEFINITIONS_H
/** @} end dotdot_cluster_command_id_definitions */