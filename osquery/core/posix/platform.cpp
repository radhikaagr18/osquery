/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed in accordance with the terms specified in
 *  the LICENSE file found in the root directory of this source tree.
 */

#include <osquery/system.h>

namespace osquery {

void platformSetup() {
  /* No platform-specific logic is needed on POSIX. */
}

void platformTeardown() {
  /* No platform-specific logic is needed on POSIX. */
}
} // namespace osquery
