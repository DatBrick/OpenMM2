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
    phcollide:colliderjointed

    0x46D3E0 | public: __thiscall phColliderJointed::phColliderJointed(void) | ??0phColliderJointed@@QAE@XZ
    0x46D410 | public: static void __cdecl phColliderJointed::InitArray(class phColliderJointed * const,int) | ?InitArray@phColliderJointed@@SAXQAV1@H@Z
    0x46D4D0 | public: void __thiscall phColliderJointed::Attach(class phJoint const *) | ?Attach@phColliderJointed@@QAEXPBVphJoint@@@Z
    0x46D4E0 | public: virtual void __thiscall phColliderJointed::Impact(class phImpactBase const *,class Vector3 const &,class Vector3 const &) | ?Impact@phColliderJointed@@UAEXPBVphImpactBase@@ABVVector3@@1@Z
    0x46D500 | public: virtual void __thiscall phColliderJointed::Impact(class phImpactBase const *,class Vector3 const &) | ?Impact@phColliderJointed@@UAEXPBVphImpactBase@@ABVVector3@@@Z
    0x46D520 | public: virtual void __thiscall phColliderJointed::Contact(class phImpactBase const *,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Matrix34 const &) | ?Contact@phColliderJointed@@UAEXPBVphImpactBase@@ABVVector3@@11ABVMatrix34@@@Z
    0x46D540 | public: virtual void __thiscall phColliderJointed::Contact(class Vector3 const &,class phContact const *,class Matrix34 const &) | ?Contact@phColliderJointed@@UAEXABVVector3@@PBVphContact@@ABVMatrix34@@@Z
    0x46D560 | public: virtual void __thiscall phColliderJointed::Contact(class Vector3 const &,class phContact const *) | ?Contact@phColliderJointed@@UAEXABVVector3@@PBVphContact@@@Z
    0x46D580 | public: virtual void __thiscall phColliderJointed::GetInvMassMatrix(class Vector3 const &,class Matrix34 &,int) const | ?GetInvMassMatrix@phColliderJointed@@UBEXABVVector3@@AAVMatrix34@@H@Z
    0x46D5F0 | public: virtual void __thiscall phColliderJointed::GetInvMassMatrix(class Vector3 const &,class Vector3 const &,class Matrix34 &,int) const | ?GetInvMassMatrix@phColliderJointed@@UBEXABVVector3@@0AAVMatrix34@@H@Z
    0x5B1E8C | const phColliderJointed::`vftable' | ??_7phColliderJointed@@6B@
*/

// #include "hooking.h"
