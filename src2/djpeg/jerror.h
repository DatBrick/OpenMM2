/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/*
    djpeg:jerror

    0x498640 | struct jpeg_error_mgr * __cdecl jpeg_std_error(struct jpeg_error_mgr *) | ?jpeg_std_error@@YAPAUjpeg_error_mgr@@PAU1@@Z
*/

// 0x498640 | ?jpeg_std_error@@YAPAUjpeg_error_mgr@@PAU1@@Z
inline struct jpeg_error_mgr* jpeg_std_error(struct jpeg_error_mgr* arg1)
{
    return stub<cdecl_t<struct jpeg_error_mgr*, struct jpeg_error_mgr*>>(0x498640, arg1);
}
