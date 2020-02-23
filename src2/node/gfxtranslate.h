/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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
    node:gfxtranslate

    0x4A3710 | class gfxBitmap * __cdecl nodeGetBitmap(char const *,bool,bool) | ?nodeGetBitmap@@YAPAVgfxBitmap@@PBD_N1@Z
*/

// 0x4A3710 | ?nodeGetBitmap@@YAPAVgfxBitmap@@PBD_N1@Z
inline class gfxBitmap* nodeGetBitmap(char const* arg1, bool arg2, bool arg3)
{
    return stub<cdecl_t<class gfxBitmap*, char const*, bool, bool>>(0x4A3710, arg1, arg2, arg3);
}
