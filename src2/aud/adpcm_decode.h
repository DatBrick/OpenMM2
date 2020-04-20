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
    aud:adpcm_decode

    0x5A7600 | void __cdecl adpcm_decoder(char const * const,short * const,int,struct adpcm_state *) | ?adpcm_decoder@@YAXQBDQAFHPAUadpcm_state@@@Z
*/

// 0x5A7600 | ?adpcm_decoder@@YAXQBDQAFHPAUadpcm_state@@@Z
inline void adpcm_decoder(char const* const arg1, int16_t* const arg2, int32_t arg3, struct adpcm_state* arg4)
{
    return stub<cdecl_t<void, char const* const, int16_t* const, int32_t, struct adpcm_state*>>(
        0x5A7600, arg1, arg2, arg3, arg4);
}
