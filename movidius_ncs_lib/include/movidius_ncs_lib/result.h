/*
 * Copyright (c) 2017 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MOVIDIUS_NCS_LIB_RESULT_H
#define MOVIDIUS_NCS_LIB_RESULT_H

#include <string>
#include <memory>
#include <vector>

namespace movidius_ncs_lib
{
struct Item
{
  std::string category;
  float probability;
};

using Items = std::vector<Item>;
using ItemsPtr = std::shared_ptr<Items>;

struct Result
{
  Items items;
  float time_taken;
};

using ResultPtr = std::shared_ptr<Result>;
}  // namespace movidius_ncs_lib

#endif  // MOVIDIUS_NCS_LIB_RESULT_H
