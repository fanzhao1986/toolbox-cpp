// The Reactive C++ Toolbox.
// Copyright (C) 2013-2019 Swirly Cloud Limited
// Copyright (C) 2020 Reactive Markets Limited
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

#ifndef TOOLBOX_NET_ERROR_HPP
#define TOOLBOX_NET_ERROR_HPP

#include <toolbox/Config.h>

#include <system_error>

namespace toolbox {
inline namespace net {

TOOLBOX_API const std::error_category& gai_error_category() noexcept;
TOOLBOX_API std::error_code make_gai_error_code(int err) noexcept;

} // namespace net
} // namespace toolbox

#endif // TOOLBOX_NET_ERROR_HPP
