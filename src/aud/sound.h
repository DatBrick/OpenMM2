/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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
    aud:sound

    0x5A3970 | public: void __thiscall audSound::Init(void) | ?Init@audSound@@QAEXXZ
    0x5A3990 | public: void __thiscall audSound::Destroy(void) | ?Destroy@audSound@@QAEXXZ
    0x5A39E0 | public: class audSoundBuffer * __thiscall audSound::CreateDuplicateSoundBuffer(class audSound *) | ?CreateDuplicateSoundBuffer@audSound@@QAEPAVaudSoundBuffer@@PAV1@@Z
    0x5A3AC0 | public: int __thiscall audSound::OpenSoundFile(int) | ?OpenSoundFile@audSound@@QAEHH@Z
    0x5A3B20 | public: class audSoundBuffer * __thiscall audSound::CreateSoundBufferFromFile(char *,char *,enum audSoundBuffer::SOUNDBUFFERTYPE,int,unsigned long) | ?CreateSoundBufferFromFile@audSound@@QAEPAVaudSoundBuffer@@PAD0W4SOUNDBUFFERTYPE@2@HK@Z
    0x5A3F10 | public: int __thiscall audSound::WriteWaveDataToBuffer(int,int *) | ?WriteWaveDataToBuffer@audSound@@QAEHHPAH@Z
    0x5A4210 | public: class audSoundBuffer * __thiscall audSound::CreateSoundBufferFromMemory(void *,enum audSoundBuffer::SOUNDBUFFERTYPE,void * *) | ?CreateSoundBufferFromMemory@audSound@@QAEPAVaudSoundBuffer@@PAXW4SOUNDBUFFERTYPE@2@PAPAX@Z
    0x5A4220 | public: bool __thiscall audSound::Update(int) | ?Update@audSound@@QAE_NH@Z
    0x5A4310 | public: bool __thiscall audSound::Play(void) | ?Play@audSound@@QAE_NXZ
    0x5A4440 | public: enum audObject::AUD_OBJECTSTATUS __thiscall audSound::GetStatus(void) | ?GetStatus@audSound@@QAE?AW4AUD_OBJECTSTATUS@audObject@@XZ
    0x5A4490 | public: bool __thiscall audSound::Stop(void) | ?Stop@audSound@@QAE_NXZ
    0x5A44E0 | public: bool __thiscall audSound::SetVolume(float) | ?SetVolume@audSound@@QAE_NM@Z
    0x5A4530 | public: bool __thiscall audSound::SetPitch(float) | ?SetPitch@audSound@@QAE_NM@Z
    0x5A45A0 | public: bool __thiscall audSound::SetPan(float) | ?SetPan@audSound@@QAE_NM@Z
    0x5A45F0 | public: bool __thiscall audSound::PauseResume(bool) | ?PauseResume@audSound@@QAE_N_N@Z
    0x5A4680 | public: bool __thiscall audSound::CloseSoundFile(void) | ?CloseSoundFile@audSound@@QAE_NXZ
*/

// #include "hooking.h"
