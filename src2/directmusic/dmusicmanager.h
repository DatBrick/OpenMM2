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
    directmusic:dmusicmanager

    0x5173F0 | public: __thiscall DMusicManager::DMusicManager(void) | ??0DMusicManager@@QAE@XZ
    0x517400 | public: __thiscall DMusicManager::~DMusicManager(void) | ??1DMusicManager@@QAE@XZ
    0x517420 | public: int __thiscall DMusicManager::Init(struct IDirectSound *,int,unsigned long,int,unsigned long,unsigned long) | ?Init@DMusicManager@@QAEHPAUIDirectSound@@HKHKK@Z
    0x5174B0 | public: void __thiscall DMusicManager::Activate(int) | ?Activate@DMusicManager@@QAEXH@Z
    0x5174D0 | public: class DMusicObject * __thiscall DMusicManager::GetDMusicObjectPtr(void) | ?GetDMusicObjectPtr@DMusicManager@@QAEPAVDMusicObject@@XZ
    0x5174E0 | public: void __thiscall DMusicManager::Update(void) | ?Update@DMusicManager@@QAEXXZ
    0x5174F0 | public: void __thiscall DMusicManager::SetVolume(float) | ?SetVolume@DMusicManager@@QAEXM@Z
    0x517520 | public: float __thiscall DMusicManager::GetVolume(void) | ?GetVolume@DMusicManager@@QAEMXZ
    0x517540 | public: void __thiscall DMusicManager::SetPan(float) | ?SetPan@DMusicManager@@QAEXM@Z
*/

struct DMusicManager
{
public:
    // 0x5173F0 | ??0DMusicManager@@QAE@XZ
    inline DMusicManager()
    {
        stub<member_func_t<void, DMusicManager>>(0x5173F0, this);
    }

    // 0x517400 | ??1DMusicManager@@QAE@XZ
    inline ~DMusicManager()
    {
        stub<member_func_t<void, DMusicManager>>(0x517400, this);
    }

    // 0x517420 | ?Init@DMusicManager@@QAEHPAUIDirectSound@@HKHKK@Z
    inline int32_t Init(
        struct IDirectSound* arg1, int32_t arg2, uint32_t arg3, int32_t arg4, uint32_t arg5, uint32_t arg6)
    {
        return stub<member_func_t<int32_t, DMusicManager, struct IDirectSound*, int32_t, uint32_t, int32_t, uint32_t,
            uint32_t>>(0x517420, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x5174B0 | ?Activate@DMusicManager@@QAEXH@Z
    inline void Activate(int32_t arg1)
    {
        return stub<member_func_t<void, DMusicManager, int32_t>>(0x5174B0, this, arg1);
    }

    // 0x5174D0 | ?GetDMusicObjectPtr@DMusicManager@@QAEPAVDMusicObject@@XZ
    inline class DMusicObject* GetDMusicObjectPtr()
    {
        return stub<member_func_t<class DMusicObject*, DMusicManager>>(0x5174D0, this);
    }

    // 0x5174E0 | ?Update@DMusicManager@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, DMusicManager>>(0x5174E0, this);
    }

    // 0x5174F0 | ?SetVolume@DMusicManager@@QAEXM@Z
    inline void SetVolume(float arg1)
    {
        return stub<member_func_t<void, DMusicManager, float>>(0x5174F0, this, arg1);
    }

    // 0x517520 | ?GetVolume@DMusicManager@@QAEMXZ
    inline float GetVolume()
    {
        return stub<member_func_t<float, DMusicManager>>(0x517520, this);
    }

    // 0x517540 | ?SetPan@DMusicManager@@QAEXM@Z
    inline void SetPan(float arg1)
    {
        return stub<member_func_t<void, DMusicManager, float>>(0x517540, this, arg1);
    }
};
