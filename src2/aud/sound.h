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

class audSound
{
public:
    // 0x5A3970 | ?Init@audSound@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, audSound>>(0x5A3970, this);
    }

    // 0x5A3990 | ?Destroy@audSound@@QAEXXZ
    inline void Destroy()
    {
        return stub<member_func_t<void, audSound>>(0x5A3990, this);
    }

    // 0x5A39E0 | ?CreateDuplicateSoundBuffer@audSound@@QAEPAVaudSoundBuffer@@PAV1@@Z
    inline class audSoundBuffer* CreateDuplicateSoundBuffer(class audSound* arg1)
    {
        return stub<member_func_t<class audSoundBuffer*, audSound, class audSound*>>(0x5A39E0, this, arg1);
    }

    // 0x5A3AC0 | ?OpenSoundFile@audSound@@QAEHH@Z
    inline i32 OpenSoundFile(i32 arg1)
    {
        return stub<member_func_t<i32, audSound, i32>>(0x5A3AC0, this, arg1);
    }

    // 0x5A3B20 | ?CreateSoundBufferFromFile@audSound@@QAEPAVaudSoundBuffer@@PAD0W4SOUNDBUFFERTYPE@2@HK@Z
    inline class audSoundBuffer* CreateSoundBufferFromFile(
        char* arg1, char* arg2, enum audSoundBuffer::SOUNDBUFFERTYPE arg3, i32 arg4, u32 arg5)
    {
        return stub<member_func_t<class audSoundBuffer*, audSound, char*, char*, enum audSoundBuffer::SOUNDBUFFERTYPE,
            i32, u32>>(0x5A3B20, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5A3F10 | ?WriteWaveDataToBuffer@audSound@@QAEHHPAH@Z
    inline i32 WriteWaveDataToBuffer(i32 arg1, i32* arg2)
    {
        return stub<member_func_t<i32, audSound, i32, i32*>>(0x5A3F10, this, arg1, arg2);
    }

    // 0x5A4210 | ?CreateSoundBufferFromMemory@audSound@@QAEPAVaudSoundBuffer@@PAXW4SOUNDBUFFERTYPE@2@PAPAX@Z
    inline class audSoundBuffer* CreateSoundBufferFromMemory(
        void* arg1, enum audSoundBuffer::SOUNDBUFFERTYPE arg2, void** arg3)
    {
        return stub<
            member_func_t<class audSoundBuffer*, audSound, void*, enum audSoundBuffer::SOUNDBUFFERTYPE, void**>>(
            0x5A4210, this, arg1, arg2, arg3);
    }

    // 0x5A4220 | ?Update@audSound@@QAE_NH@Z
    inline bool Update(i32 arg1)
    {
        return stub<member_func_t<bool, audSound, i32>>(0x5A4220, this, arg1);
    }

    // 0x5A4310 | ?Play@audSound@@QAE_NXZ
    inline bool Play()
    {
        return stub<member_func_t<bool, audSound>>(0x5A4310, this);
    }

    // 0x5A4440 | ?GetStatus@audSound@@QAE?AW4AUD_OBJECTSTATUS@audObject@@XZ
    inline enum audObject::AUD_OBJECTSTATUS GetStatus()
    {
        return stub<member_func_t<enum audObject::AUD_OBJECTSTATUS, audSound>>(0x5A4440, this);
    }

    // 0x5A4490 | ?Stop@audSound@@QAE_NXZ
    inline bool Stop()
    {
        return stub<member_func_t<bool, audSound>>(0x5A4490, this);
    }

    // 0x5A44E0 | ?SetVolume@audSound@@QAE_NM@Z
    inline bool SetVolume(f32 arg1)
    {
        return stub<member_func_t<bool, audSound, f32>>(0x5A44E0, this, arg1);
    }

    // 0x5A4530 | ?SetPitch@audSound@@QAE_NM@Z
    inline bool SetPitch(f32 arg1)
    {
        return stub<member_func_t<bool, audSound, f32>>(0x5A4530, this, arg1);
    }

    // 0x5A45A0 | ?SetPan@audSound@@QAE_NM@Z
    inline bool SetPan(f32 arg1)
    {
        return stub<member_func_t<bool, audSound, f32>>(0x5A45A0, this, arg1);
    }

    // 0x5A45F0 | ?PauseResume@audSound@@QAE_N_N@Z
    inline bool PauseResume(bool arg1)
    {
        return stub<member_func_t<bool, audSound, bool>>(0x5A45F0, this, arg1);
    }

    // 0x5A4680 | ?CloseSoundFile@audSound@@QAE_NXZ
    inline bool CloseSoundFile()
    {
        return stub<member_func_t<bool, audSound>>(0x5A4680, this);
    }
};
