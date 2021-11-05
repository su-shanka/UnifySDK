
/******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 ******************************************************************************
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 *****************************************************************************/

// Includes from this component
#include "attribute_store_helper.h"
#include "sl_log.h"
// Generic includes
#include <stdbool.h>
#include <string.h>  // for memcpy, strncpy, strlen

// Receive buffer for attribute store values (reported / desired)
static uint8_t received_value[ATTRIBUTE_STORE_MAXIMUM_VALUE_LENGTH];
static uint8_t received_value_size = 0;

bool attribute_store_is_value_defined(
  attribute_store_node_t node, attribute_store_node_value_state_t value_state)
{
  received_value_size = 0;
  attribute_store_get_node_attribute_value(node,
                                           value_state,
                                           received_value,
                                           &received_value_size);
  if (received_value_size == 0) {
    return false;
  } else {
    return true;
  }
}

bool attribute_store_is_value_matched(attribute_store_node_t node)
{
  uint8_t desired_value[ATTRIBUTE_STORE_MAXIMUM_VALUE_LENGTH] = {0};
  uint8_t desired_value_size                                  = 0;
  received_value_size                                         = 0;
  attribute_store_get_node_attribute_value(node,
                                           REPORTED_ATTRIBUTE,
                                           received_value,
                                           &received_value_size);
  attribute_store_get_node_attribute_value(node,
                                           DESIRED_ATTRIBUTE,
                                           desired_value,
                                           &desired_value_size);
  if ((received_value_size == desired_value_size)
      && (memcmp(received_value, desired_value, received_value_size) == 0)) {
    return true;
  } else {
    return false;
  }
}

sl_status_t attribute_store_set_desired_as_reported(attribute_store_node_t node)
{
  sl_status_t read_status
    = attribute_store_get_node_attribute_value(node,
                                               REPORTED_ATTRIBUTE,
                                               received_value,
                                               &received_value_size);
  if (read_status == SL_STATUS_OK) {
    return attribute_store_set_node_attribute_value(node,
                                                    DESIRED_ATTRIBUTE,
                                                    received_value,
                                                    received_value_size);
  } else {
    return read_status;
  }
}

sl_status_t attribute_store_set_reported_as_desired(attribute_store_node_t node)
{
  sl_status_t read_status
    = attribute_store_get_node_attribute_value(node,
                                               DESIRED_ATTRIBUTE,
                                               received_value,
                                               &received_value_size);
  if (read_status == SL_STATUS_OK) {
    return attribute_store_set_node_attribute_value(node,
                                                    REPORTED_ATTRIBUTE,
                                                    received_value,
                                                    received_value_size);
  } else {
    return read_status;
  }
}

void attribute_store_undefine_reported(attribute_store_node_t node)
{
  attribute_store_set_node_attribute_value(node, REPORTED_ATTRIBUTE, NULL, 0);
}

sl_status_t attribute_store_set_reported(attribute_store_node_t node,
                                         const void *value,
                                         uint8_t value_size)
{
  return attribute_store_set_node_attribute_value(node,
                                                  REPORTED_ATTRIBUTE,
                                                  value,
                                                  value_size);
}

sl_status_t attribute_store_get_reported(attribute_store_node_t node,
                                         void *value,
                                         size_t expected_size)
{
  return attribute_store_read_value(node,
                                    REPORTED_ATTRIBUTE,
                                    value,
                                    expected_size);
}

sl_status_t attribute_store_set_reported_string(attribute_store_node_t node,
                                                const char *string)
{
  // Sanitize the length of the string, using our local buffer
  strncpy((char *)received_value, string, sizeof(received_value));
  // Ensure NULL termination
  received_value[ATTRIBUTE_STORE_MAXIMUM_VALUE_LENGTH - 1] = '\0';
  uint8_t string_length
    = (uint8_t)(strlen((char *)received_value) + sizeof(char));
  return attribute_store_set_node_attribute_value(
    node,
    REPORTED_ATTRIBUTE,
    (const uint8_t *)received_value,
    string_length);
}

void attribute_store_undefine_desired(attribute_store_node_t node)
{
  attribute_store_set_node_attribute_value(node, DESIRED_ATTRIBUTE, NULL, 0);
}

sl_status_t attribute_store_set_desired(attribute_store_node_t node,
                                        const void *value,
                                        uint8_t value_size)
{
  return attribute_store_set_node_attribute_value(node,
                                                  DESIRED_ATTRIBUTE,
                                                  value,
                                                  value_size);
}

sl_status_t attribute_store_get_desired(attribute_store_node_t node,
                                        void *value,
                                        size_t expected_size)
{
  return attribute_store_read_value(node,
                                    DESIRED_ATTRIBUTE,
                                    value,
                                    expected_size);
}

sl_status_t
  attribute_store_copy_value(attribute_store_node_t source_node,
                             attribute_store_node_t destination_node,
                             attribute_store_node_value_state_t value_state)
{
  // Read the data from the source node
  sl_status_t read_status
    = attribute_store_get_node_attribute_value(source_node,
                                               value_state,
                                               received_value,
                                               &received_value_size);

  if (read_status != SL_STATUS_OK) {
    return read_status;
  }

  // Attempt to copy the value to the destination node.
  return attribute_store_set_node_attribute_value(destination_node,
                                                  value_state,
                                                  received_value,
                                                  received_value_size);
}

sl_status_t
  attribute_store_read_value(attribute_store_node_t node,
                             attribute_store_node_value_state_t value_state,
                             void *read_value,
                             size_t expected_size)
{
  received_value_size = 0;
  attribute_store_get_node_attribute_value(node,
                                           value_state,
                                           received_value,
                                           &received_value_size);

  // If the value is undefined, we return false.
  if (received_value_size == 0) {
    return SL_STATUS_FAIL;
  }

  if (expected_size != received_value_size) {
    return SL_STATUS_FAIL;
  }

  // Copy the received data to the target pointer.
  memcpy(read_value, received_value, expected_size);

  return SL_STATUS_OK;
}

sl_status_t attribute_store_set_child_reported(attribute_store_node_t parent,
                                               attribute_store_type_t type,
                                               const void *value,
                                               uint8_t value_size)
{
  attribute_store_node_t child_node
    = attribute_store_get_node_child_by_type(parent, type, 0);
  if (child_node == ATTRIBUTE_STORE_INVALID_NODE) {
    child_node = attribute_store_add_node(type, parent);
  }
  return attribute_store_set_reported(child_node, value, value_size);
}

sl_status_t attribute_store_set_child_desired(attribute_store_node_t parent,
                                               attribute_store_type_t type,
                                               const void *value,
                                               uint8_t value_size)
{
  attribute_store_node_t child_node
    = attribute_store_get_node_child_by_type(parent, type, 0);
  if (child_node == ATTRIBUTE_STORE_INVALID_NODE) {
    child_node = attribute_store_add_node(type, parent);
  }
  return attribute_store_set_desired(child_node, value, value_size);
}

sl_status_t attribute_store_set_uint32_child_by_type(
  attribute_store_node_t parent,
  attribute_store_type_t type,
  attribute_store_node_value_state_t state,
  uint32_t value)
{
  attribute_store_node_t child
    = attribute_store_get_node_child_by_type(parent, type, 0);
  return attribute_store_set_node_attribute_value(child,
                                                  state,
                                                  (uint8_t *)&value,
                                                  sizeof(uint32_t));
}

sl_status_t attribute_store_set_uint8_child_by_type(
  attribute_store_node_t parent,
  attribute_store_type_t type,
  attribute_store_node_value_state_t state,
  uint8_t value)
{
  attribute_store_node_t child
    = attribute_store_get_node_child_by_type(parent, type, 0);
  return attribute_store_set_node_attribute_value(child,
                                                  state,
                                                  &value,
                                                  sizeof(uint8_t));
}

sl_status_t
  attribute_store_walk_tree(attribute_store_node_t top,
                            sl_status_t (*func)(attribute_store_node_t, int),
                            int depth)
{
  sl_status_t status = func(top, depth);
  if (SL_STATUS_OK == status) {
    for (size_t i = 0; i < attribute_store_get_node_child_count(top); i++) {
      status = attribute_store_walk_tree(attribute_store_get_node_child(top, i),
                                         func,
                                         depth + 1);
      if (status == SL_STATUS_ABORT) {
        return status;
      }
    }
  }
  return status;
}

void attribute_store_add_if_missing(attribute_store_node_t parent_node,
                                    const attribute_store_type_t attributes[],
                                    uint32_t count)
{
  for (uint32_t i = 0; i < count; i++) {
    // Verify if there is already one value attribute for this endpoint
    attribute_store_node_t value_node
      = attribute_store_get_node_child_by_type(parent_node, attributes[i], 0);

    // If not, create it. We only need this attribute.
    if (value_node == ATTRIBUTE_STORE_INVALID_NODE) {
      attribute_store_add_node(attributes[i], parent_node);
    }
  }
}