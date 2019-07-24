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
    aud:mixer

    0x5A6E00 | public: bool __thiscall audMixer::Update(int) | ?Update@audMixer@@QAE_NH@Z
    0x5A6E10 | public: enum audObject::AUD_OBJECTSTATUS __thiscall audMixer::GetStatus(void) | ?GetStatus@audMixer@@QAE?AW4AUD_OBJECTSTATUS@audObject@@XZ
    0x5A6E20 | public: bool __thiscall audMixer::Play(void) | ?Play@audMixer@@QAE_NXZ
    0x5A6E30 | public: bool __thiscall audMixer::Stop(void) | ?Stop@audMixer@@QAE_NXZ
    0x5A6E40 | public: bool __thiscall audMixer::SetVolume(float) | ?SetVolume@audMixer@@QAE_NM@Z
    0x5A6E50 | public: class audSoundBuffer * __thiscall audMixer::CreateDuplicateMixerBuffer(class audMixer *) | ?CreateDuplicateMixerBuffer@audMixer@@QAEPAVaudSoundBuffer@@PAV1@@Z
    0x5A6E60 | public: class audSoundBuffer * __thiscall audMixer::CreateMixerBufferFromFile(char *,char *,enum audSoundBuffer::SOUNDBUFFERTYPE,int) | ?CreateMixerBufferFromFile@audMixer@@QAEPAVaudSoundBuffer@@PAD0W4SOUNDBUFFERTYPE@2@H@Z
    0x5A6E70 | public: bool __thiscall audMixer::SetPitch(float) | ?SetPitch@audMixer@@QAE_NM@Z
    0x5A6E80 | public: bool __thiscall audMixer::SetPan(float) | ?SetPan@audMixer@@QAE_NM@Z
    0x5A6E90 | public: bool __thiscall audMixer::Set3D(struct _audvector3_ *) | ?Set3D@audMixer@@QAE_NPAU_audvector3_@@@Z
*/

class audMixer
{
public:
    // 0x5A6E00 | ?Update@audMixer@@QAE_NH@Z
    inline bool Update(int32_t arg1)
    {
        return stub<member_func_t<bool, audMixer, int32_t>>(0x5A6E00, this, arg1);
    }

    // 0x5A6E10 | ?GetStatus@audMixer@@QAE?AW4AUD_OBJECTSTATUS@audObject@@XZ
    inline enum audObject::AUD_OBJECTSTATUS GetStatus()
    {
        return stub<member_func_t<enum audObject::AUD_OBJECTSTATUS, audMixer>>(0x5A6E10, this);
    }

    // 0x5A6E20 | ?Play@audMixer@@QAE_NXZ
    inline bool Play()
    {
        return stub<member_func_t<bool, audMixer>>(0x5A6E20, this);
    }

    // 0x5A6E30 | ?Stop@audMixer@@QAE_NXZ
    inline bool Stop()
    {
        return stub<member_func_t<bool, audMixer>>(0x5A6E30, this);
    }

    // 0x5A6E40 | ?SetVolume@audMixer@@QAE_NM@Z
    inline bool SetVolume(float arg1)
    {
        return stub<member_func_t<bool, audMixer, float>>(0x5A6E40, this, arg1);
    }

    // 0x5A6E50 | ?CreateDuplicateMixerBuffer@audMixer@@QAEPAVaudSoundBuffer@@PAV1@@Z
    inline class audSoundBuffer* CreateDuplicateMixerBuffer(class audMixer* arg1)
    {
        return stub<member_func_t<class audSoundBuffer*, audMixer, class audMixer*>>(0x5A6E50, this, arg1);
    }

    // 0x5A6E60 | ?CreateMixerBufferFromFile@audMixer@@QAEPAVaudSoundBuffer@@PAD0W4SOUNDBUFFERTYPE@2@H@Z
    inline class audSoundBuffer* CreateMixerBufferFromFile(
        char* arg1, char* arg2, enum audSoundBuffer::SOUNDBUFFERTYPE arg3, int32_t arg4)
    {
        return stub<member_func_t<class audSoundBuffer*, audMixer, char*, char*, enum audSoundBuffer::SOUNDBUFFERTYPE,
            int32_t>>(0x5A6E60, this, arg1, arg2, arg3, arg4);
    }

    // 0x5A6E70 | ?SetPitch@audMixer@@QAE_NM@Z
    inline bool SetPitch(float arg1)
    {
        return stub<member_func_t<bool, audMixer, float>>(0x5A6E70, this, arg1);
    }

    // 0x5A6E80 | ?SetPan@audMixer@@QAE_NM@Z
    inline bool SetPan(float arg1)
    {
        return stub<member_func_t<bool, audMixer, float>>(0x5A6E80, this, arg1);
    }

    // 0x5A6E90 | ?Set3D@audMixer@@QAE_NPAU_audvector3_@@@Z
    inline bool Set3D(struct _audvector3_* arg1)
    {
        return stub<member_func_t<bool, audMixer, struct _audvector3_*>>(0x5A6E90, this, arg1);
    }
};
