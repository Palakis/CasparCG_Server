/*
 * Copyright (c) 2011 Sveriges Television AB <info@casparcg.com>
 *
 * This file is part of CasparCG (www.casparcg.com).
 *
 * CasparCG is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * CasparCG is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with CasparCG. If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Helge Norberg, helge.norberg@svt.se
 */

#include "../../stdafx.h"

#include "../filesystem.h"

#include <boost/filesystem.hpp>

namespace caspar {

boost::optional<std::wstring> find_case_insensitive(const std::wstring& case_insensitive)
{
    if (boost::filesystem::exists(case_insensitive))
        return case_insensitive;
    else
        return boost::none;
}

std::wstring clean_path(std::wstring path)
{
    return path;
}

} // namespace caspar
