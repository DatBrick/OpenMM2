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
    effects:texeldamage

    0x591CA0 | public: __thiscall fxTexelDamage::fxTexelDamage(void) | ??0fxTexelDamage@@QAE@XZ
    0x591CC0 | public: __thiscall fxTexelDamage::~fxTexelDamage(void) | ??1fxTexelDamage@@QAE@XZ
    0x591CD0 | private: void __thiscall fxTexelDamage::Kill(void) | ?Kill@fxTexelDamage@@AAEXXZ
    0x591D10 | public: bool __thiscall fxTexelDamage::Init(class modStatic *,class modShader *,int) | ?Init@fxTexelDamage@@QAE_NPAVmodStatic@@PAVmodShader@@H@Z
    0x592190 | public: void __thiscall fxTexelDamage::Reset(void) | ?Reset@fxTexelDamage@@QAEXXZ
    public: void __thiscall fxTexelDamage::DrawDebug(void) | ?DrawDebug@fxTexelDamage@@QAEXXZ
    0x5921E0 | public: void __thiscall fxTexelDamage::ApplyDamage(class Vector3 const &,float) | ?ApplyDamage@fxTexelDamage@@QAEXABVVector3@@M@Z
*/

struct fxTexelDamage
{
public:
    // 0x591CA0 | ??0fxTexelDamage@@QAE@XZ
    inline fxTexelDamage()
    {
        stub<member_func_t<void, fxTexelDamage>>(0x591CA0, this);
    }

    // 0x591CC0 | ??1fxTexelDamage@@QAE@XZ
    inline ~fxTexelDamage()
    {
        stub<member_func_t<void, fxTexelDamage>>(0x591CC0, this);
    }

    // 0x591CD0 | ?Kill@fxTexelDamage@@AAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, fxTexelDamage>>(0x591CD0, this);
    }

    // 0x591D10 | ?Init@fxTexelDamage@@QAE_NPAVmodStatic@@PAVmodShader@@H@Z
    inline bool Init(class modStatic* arg1, class modShader* arg2, i32 arg3)
    {
        return stub<member_func_t<bool, fxTexelDamage, class modStatic*, class modShader*, i32>>(
            0x591D10, this, arg1, arg2, arg3);
    }

    // 0x592190 | ?Reset@fxTexelDamage@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, fxTexelDamage>>(0x592190, this);
    }

    // 0x5921E0 | ?ApplyDamage@fxTexelDamage@@QAEXABVVector3@@M@Z
    inline void ApplyDamage(class Vector3 const& arg1, f32 arg2)
    {
        return stub<member_func_t<void, fxTexelDamage, class Vector3 const&, f32>>(0x5921E0, this, arg1, arg2);
    }
};
