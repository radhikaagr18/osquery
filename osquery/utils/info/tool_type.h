/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

#pragma once

namespace osquery {

/**
 * @brief A helpful tool type to report when logging, print help, or debugging.
 *
 * The Initializer class attempts to detect the ToolType using the tool name
 * and some compile time options.
 */
enum class ToolType {
  UNKNOWN = 0,
  SHELL,
  DAEMON,
  TEST,
  EXTENSION,
  SHELL_DAEMON,
};

/// Set the osquery tool type for runtime behavior decisions.
void setToolType(ToolType tool);

/// Get the osquery tool type for runtime behavior decisions.
ToolType getToolType();

/// Check the program is the osquery daemon.
bool isDaemon();

/// Check the program is the osquery shell.
bool isShell();
}
