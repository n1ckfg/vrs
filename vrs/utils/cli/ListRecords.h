// Copyright (c) Meta Platforms, Inc. and affiliates.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <vrs/utils/FilteredFileReader.h>

namespace vrs::utils {

/// Print a list of records' top-level metadata without actually reading the records.
/// Includes timestamp, stream id, record type and record size, but nothing else.
/// @param filteredReader: the file to read, with filters.
void listRecords(FilteredFileReader& filteredReader);

} // namespace vrs::utils
