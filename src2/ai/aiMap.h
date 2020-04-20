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
    ai:aiMap

    0x534850 | public: class aiPath * __thiscall aiMap::Path(int) | ?Path@aiMap@@QAEPAVaiPath@@H@Z
    0x534880 | public: class aiIntersection * __thiscall aiMap::Intersection(int) | ?Intersection@aiMap@@QAEPAVaiIntersection@@H@Z
    0x5348B0 | public: class aiVehicleAmbient * __thiscall aiMap::Vehicle(int) | ?Vehicle@aiMap@@QAEPAVaiVehicleAmbient@@H@Z
    0x5348F0 | public: class aiPoliceOfficer * __thiscall aiMap::Police(int) | ?Police@aiMap@@QAEPAVaiPoliceOfficer@@H@Z
    0x534940 | public: class aiRouteRacer * __thiscall aiMap::Opponent(int) | ?Opponent@aiMap@@QAEPAVaiRouteRacer@@H@Z
    0x534990 | public: class aiCTFRacer * __thiscall aiMap::CTFOpponent(int) | ?CTFOpponent@aiMap@@QAEPAVaiCTFRacer@@H@Z
    0x5349E0 | public: class mcHookman * __thiscall aiMap::Hookman(int) | ?Hookman@aiMap@@QAEPAVmcHookman@@H@Z
    0x534A30 | public: class aiCableCar * __thiscall aiMap::CableCar(int) | ?CableCar@aiMap@@QAEPAVaiCableCar@@H@Z
    0x534A70 | public: class aiSubway * __thiscall aiMap::Subway(int) | ?Subway@aiMap@@QAEPAVaiSubway@@H@Z
    0x534AB0 | public: class aiPedestrian * __thiscall aiMap::Pedestrian(int) | ?Pedestrian@aiMap@@QAEPAVaiPedestrian@@H@Z
    0x534AF0 | public: class aiVehiclePlayer * __thiscall aiMap::Player(int) | ?Player@aiMap@@QAEPAVaiVehiclePlayer@@H@Z
    0x534B30 | public: __thiscall aiMap::aiMap(void) | ??0aiMap@@QAE@XZ
    0x534BB0 | public: virtual __thiscall aiMap::~aiMap(void) | ??1aiMap@@UAE@XZ
    0x534C10 | public: void __thiscall aiMap::Clean(void) | ?Clean@aiMap@@QAEXXZ
    0x534F60 | public: void __thiscall aiMap::InitRouting(void) | ?InitRouting@aiMap@@QAEXXZ
    0x534FC0 | public: void __thiscall aiMap::Init(char *,char *,char *,struct dgStatePack const &,int,class vehCar * *,bool) | ?Init@aiMap@@QAEXPAD00ABUdgStatePack@@HPAPAVvehCar@@_N@Z
    0x535DF0 | public: void __thiscall aiMap::SaveBinary(char *,char *) | ?SaveBinary@aiMap@@QAEXPAD0@Z
    0x535EE0 | public: void __thiscall aiMap::ReadBinary(char *,char *) | ?ReadBinary@aiMap@@QAEXPAD0@Z
    0x5364A0 | private: void __thiscall aiMap::MapRoadToRooms(class aiPath *,enum aiMapCompTypes) | ?MapRoadToRooms@aiMap@@AAEXPAVaiPath@@W4aiMapCompTypes@@@Z
    0x536A30 | public: virtual void __thiscall aiMap::Reset(void) | ?Reset@aiMap@@UAEXXZ
    0x536E50 | public: virtual void __thiscall aiMap::Update(void) | ?Update@aiMap@@UAEXXZ
    0x537410 | private: void __thiscall aiMap::StopRoadTraffic(bool) | ?StopRoadTraffic@aiMap@@AAEX_N@Z
    0x5374E0 | public: virtual void __thiscall aiMap::UpdatePaused(void) | ?UpdatePaused@aiMap@@UAEXXZ
    0x5374F0 | public: virtual void __thiscall aiMap::Cull(void) | ?Cull@aiMap@@UAEXXZ
    0x537500 | public: void __thiscall aiMap::DrawNextVisibleAmbient(void) | ?DrawNextVisibleAmbient@aiMap@@QAEXXZ
    0x537510 | public: void __thiscall aiMap::DrawX(class Vector3 &) | ?DrawX@aiMap@@QAEXAAVVector3@@@Z
    0x537520 | public: void __thiscall aiMap::AllwaysGreen(void) | ?AllwaysGreen@aiMap@@QAEXXZ
    0x537560 | public: void __thiscall aiMap::AllwaysRed(void) | ?AllwaysRed@aiMap@@QAEXXZ
    0x5375A0 | public: void __thiscall aiMap::DrawAppRoads(void) | ?DrawAppRoads@aiMap@@QAEXXZ
    0x5375C0 | public: void __thiscall aiMap::DrawMap(void) | ?DrawMap@aiMap@@QAEXXZ
    0x5375E0 | public: void __thiscall aiMap::DrawPathIds(void) | ?DrawPathIds@aiMap@@QAEXXZ
    0x537600 | public: int __thiscall aiMap::MapComponentType(int,int *) | ?MapComponentType@aiMap@@QAEHHPAH@Z
    0x537680 | public: int __thiscall aiMap::MapComponent(class Vector3 const &,short *,short *,short) | ?MapComponent@aiMap@@QAEHABVVector3@@PAF1F@Z
    0x5377B0 | public: int __thiscall aiMap::PositionToAIMapComp(class Vector3 const &,short *,short *,short *,short) | ?PositionToAIMapComp@aiMap@@QAEHABVVector3@@PAF11F@Z
    0x537AA0 | public: int __thiscall aiMap::MapComponent(class Vector3 const &,short *,short *,short,short) | ?MapComponent@aiMap@@QAEHABVVector3@@PAF1FF@Z
    0x537C70 | public: int __thiscall aiMap::CoreMapComponent(class Vector3 const &,short *,short *,short,short) | ?CoreMapComponent@aiMap@@QAEHABVVector3@@PAF1FF@Z
    0x537E00 | public: int __thiscall aiMap::DetermineRoadPosInfo(class Matrix34 const &,class aiRailSet *,short *,float *,short *,float *,int,int) | ?DetermineRoadPosInfo@aiMap@@QAEHABVMatrix34@@PAVaiRailSet@@PAFPAM23HH@Z
    0x537F30 | public: int __thiscall aiMap::FindAmbAppRoad(int) | ?FindAmbAppRoad@aiMap@@QAEHH@Z
    0x537F60 | public: int __thiscall aiMap::FindPedAppRoad(int) | ?FindPedAppRoad@aiMap@@QAEHH@Z
    0x537F90 | public: class aiPath * __thiscall aiMap::PredictIntersectionPath(int,class Matrix34 const &,int,bool *) | ?PredictIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@HPA_N@Z
    0x538280 | public: class aiPath * __thiscall aiMap::GetPathFromID(int) | ?GetPathFromID@aiMap@@QAEPAVaiPath@@H@Z
    0x5382C0 | public: class aiPath * __thiscall aiMap::PredictAmbIntersectionPath(int,class Matrix34 const &) | ?PredictAmbIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@@Z
    0x538530 | public: class aiPath * __thiscall aiMap::PredictAmbFreewayIntersectionPath(int,class Matrix34 const &) | ?PredictAmbFreewayIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@@Z
    0x538840 | public: void __thiscall aiMap::Dump(void) | ?Dump@aiMap@@QAEXXZ
    0x538960 | private: int __thiscall aiMap::NumCars(int,float,float) | ?NumCars@aiMap@@AAEHHMM@Z
    0x538990 | private: int __thiscall aiMap::FindRoad(class CArrayList *,int) | ?FindRoad@aiMap@@AAEHPAVCArrayList@@H@Z
    0x5389D0 | private: int __thiscall aiMap::FindInt(short *,int,int) | ?FindInt@aiMap@@AAEHPAFHH@Z
    0x538A10 | public: int __thiscall aiMap::ChooseNextRandomLink(class aiRailSet *) | ?ChooseNextRandomLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x538BD0 | public: int __thiscall aiMap::ChooseNextLeftStraightLink(class aiRailSet *) | ?ChooseNextLeftStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x538EC0 | public: int __thiscall aiMap::ChooseNextRightLink(class aiRailSet *) | ?ChooseNextRightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x538FA0 | public: int __thiscall aiMap::ChooseNextRightStraightLink(class aiRailSet *) | ?ChooseNextRightStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x5392B0 | public: int __thiscall aiMap::ChooseNextStraightLink(class aiRailSet *) | ?ChooseNextStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x5396A0 | public: int __thiscall aiMap::ChooseStraightLinkAt4Way(class aiRailSet *) | ?ChooseStraightLinkAt4Way@aiMap@@QAEHPAVaiRailSet@@@Z
    0x539750 | public: int __thiscall aiMap::ChooseNextLaneLink(class aiRailSet *) | ?ChooseNextLaneLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x539870 | public: int __thiscall aiMap::ChooseNextFreewayLink(class aiRailSet *) | ?ChooseNextFreewayLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x5399A0 | public: int __thiscall aiMap::ChooseNextRightStraightFreewayLink(class aiRailSet *) | ?ChooseNextRightStraightFreewayLink@aiMap@@QAEHPAVaiRailSet@@@Z
    0x539A20 | private: void __thiscall aiMap::AdjustPedestrians(int,int,int) | ?AdjustPedestrians@aiMap@@AAEXHHH@Z
    0x539CF0 | public: void __thiscall aiMap::ClearPeds(class aiPath *) | ?ClearPeds@aiMap@@QAEXPAVaiPath@@@Z
    0x539D30 | public: void __thiscall aiMap::AddPedestrian(class aiPedestrian *) | ?AddPedestrian@aiMap@@QAEXPAVaiPedestrian@@@Z
    0x539D70 | public: void __thiscall aiMap::RemovePedestrian(class aiPedestrian *) | ?RemovePedestrian@aiMap@@QAEXPAVaiPedestrian@@@Z
    0x539DD0 | private: void __thiscall aiMap::AdjustAmbients(int,int,int) | ?AdjustAmbients@aiMap@@AAEXHHH@Z
    0x53A5B0 | public: void __thiscall aiMap::AddAmbient(class aiVehicleSpline *) | ?AddAmbient@aiMap@@QAEXPAVaiVehicleSpline@@@Z
    0x53A600 | public: void __thiscall aiMap::RemoveAmbient(class aiVehicleSpline *) | ?RemoveAmbient@aiMap@@QAEXPAVaiVehicleSpline@@@Z
    0x53A680 | public: class aiPath * __thiscall aiMap::DetRdSegBetweenInts(class aiIntersection *,class aiIntersection *,bool *) | ?DetRdSegBetweenInts@aiMap@@QAEPAVaiPath@@PAVaiIntersection@@0PA_N@Z
    0x53A730 | public: class aiPath * __thiscall aiMap::DetRdSegBetweenInts(int,int) | ?DetRdSegBetweenInts@aiMap@@QAEPAVaiPath@@HH@Z
    0x53A760 | public: int __thiscall aiMap::GoodRoadForCopStartPos(int) | ?GoodRoadForCopStartPos@aiMap@@QAEHH@Z
    0x53A7A0 | public: void __thiscall aiMap::CalcRoute(class Matrix34 const &,class Vector3 const &,class Vector3 const &,short *,short *,short,short,bool) | ?CalcRoute@aiMap@@QAEXABVMatrix34@@ABVVector3@@1PAF2FF_N@Z
    0x53B560 | public: void __thiscall aiMap::AddRoutingNode(int) | ?AddRoutingNode@aiMap@@QAEXH@Z
    0x53B5D0 | public: void __thiscall aiMap::RemoveRoutingNode(int) | ?RemoveRoutingNode@aiMap@@QAEXH@Z
    0x53B640 | public: int __thiscall aiMap::AddPlayer(class vehCar *) | ?AddPlayer@aiMap@@QAEHPAVvehCar@@@Z
    0x53B700 | public: int __thiscall aiMap::RemovePlayer(class vehCar *) | ?RemovePlayer@aiMap@@QAEHPAVvehCar@@@Z
    0x53B7B0 | public: void __thiscall aiMap::SetWaypoints(class Vector4 *,int,int) | ?SetWaypoints@aiMap@@QAEXPAVVector4@@HH@Z
    0x53B860 | public: void __thiscall aiMap::DrawFinalCheckPoint(void) | ?DrawFinalCheckPoint@aiMap@@QAEXXZ
    0x53B870 | public: void __thiscall aiMap::TestProbes(int) | ?TestProbes@aiMap@@QAEXH@Z
    public: virtual void __thiscall aiMap::Stats(void) | ?Stats@aiMap@@UAEXXZ
    public: virtual void __thiscall aiMap::AddWidgets(class bkBank &) | ?AddWidgets@aiMap@@UAEXAAVbkBank@@@Z
    0x53BC70 | public: virtual void * __thiscall aiMap::`scalar deleting destructor'(unsigned int) | ??_GaiMap@@UAEPAXI@Z
    public: virtual void * __thiscall aiMap::`vector deleting destructor'(unsigned int) | ??_EaiMap@@UAEPAXI@Z
    0x53BCA0 | public: void * __thiscall aiVehicleAmbient::`vector deleting destructor'(unsigned int) | ??_EaiVehicleAmbient@@QAEPAXI@Z
    0x53BD00 | public: void * __thiscall aiPoliceOfficer::`vector deleting destructor'(unsigned int) | ??_EaiPoliceOfficer@@QAEPAXI@Z
    0x53BD60 | public: void * __thiscall aiRouteRacer::`vector deleting destructor'(unsigned int) | ??_EaiRouteRacer@@QAEPAXI@Z
    0x53BDC0 | public: void * __thiscall aiPedestrian::`vector deleting destructor'(unsigned int) | ??_EaiPedestrian@@QAEPAXI@Z
    0x53BE20 | public: void * __thiscall mcHookman::`vector deleting destructor'(unsigned int) | ??_EmcHookman@@QAEPAXI@Z
    0x53BE80 | public: void * __thiscall CArrayList::`vector deleting destructor'(unsigned int) | ??_ECArrayList@@QAEPAXI@Z
    0x53BEE0 | public: void * __thiscall aiSubway::`vector deleting destructor'(unsigned int) | ??_EaiSubway@@QAEPAXI@Z
    0x53BF40 | public: void * __thiscall aiCableCar::`vector deleting destructor'(unsigned int) | ??_EaiCableCar@@QAEPAXI@Z
    0x53BFA0 | public: virtual void * __thiscall aiCTFRacer::`vector deleting destructor'(unsigned int) | ??_EaiCTFRacer@@UAEPAXI@Z
    public: class Vector3 __thiscall Vector3::operator-(void) const | ??GVector3@@QBE?AV0@XZ
    public: class Vector3 * __thiscall aiPath::CenterVertice(int) | ?CenterVertice@aiPath@@QAEPAVVector3@@H@Z
    0x53C000 | public: class aiPath * __thiscall aiIntersection::Road(int) | ?Road@aiIntersection@@QAEPAVaiPath@@H@Z
    0x53C030 | public: __thiscall CArrayList::CArrayList(void) | ??0CArrayList@@QAE@XZ
    0x5B5460 | const aiMap::`vftable' | ??_7aiMap@@6B@
    float _fSubwayUpdate | ?_fSubwayUpdate@@3MA
    0x6B4BEC | float _fCableCarUpdate | ?_fCableCarUpdate@@3MA
    float _fCTFOppUpdate | ?_fCTFOppUpdate@@3MA
    float _fPedUpdate | ?_fPedUpdate@@3MA
    float _fAmbientUpdate | ?_fAmbientUpdate@@3MA
    0x6AFFE0 | float _fCopUpdate | ?_fCopUpdate@@3MA
    int _nPedQty | ?_nPedQty@@3HA
    0x6B2E10 | class aiMap AIMAP | ?AIMAP@@3VaiMap@@A
    float _fOppUpdate | ?_fOppUpdate@@3MA
    int _nAmbientQty | ?_nAmbientQty@@3HA
    float _fTotUpdate | ?_fTotUpdate@@3MA
*/

// 0x6B4BEC | ?_fCableCarUpdate@@3MA
inline extern_var(0x6B4BEC, float, _fCableCarUpdate);

// 0x6AFFE0 | ?_fCopUpdate@@3MA
inline extern_var(0x6AFFE0, float, _fCopUpdate);

// 0x6B2E10 | ?AIMAP@@3VaiMap@@A
inline extern_var(0x6B2E10, class aiMap, AIMAP);

class aiMap : asNode
{
public:
    // aiMap::`vftable' @ 0x5B5460

    // 0x534850 | ?Path@aiMap@@QAEPAVaiPath@@H@Z
    inline class aiPath* Path(int32_t arg1)
    {
        return stub<member_func_t<class aiPath*, aiMap, int32_t>>(0x534850, this, arg1);
    }

    // 0x534880 | ?Intersection@aiMap@@QAEPAVaiIntersection@@H@Z
    inline class aiIntersection* Intersection(int32_t arg1)
    {
        return stub<member_func_t<class aiIntersection*, aiMap, int32_t>>(0x534880, this, arg1);
    }

    // 0x5348B0 | ?Vehicle@aiMap@@QAEPAVaiVehicleAmbient@@H@Z
    inline class aiVehicleAmbient* Vehicle(int32_t arg1)
    {
        return stub<member_func_t<class aiVehicleAmbient*, aiMap, int32_t>>(0x5348B0, this, arg1);
    }

    // 0x5348F0 | ?Police@aiMap@@QAEPAVaiPoliceOfficer@@H@Z
    inline class aiPoliceOfficer* Police(int32_t arg1)
    {
        return stub<member_func_t<class aiPoliceOfficer*, aiMap, int32_t>>(0x5348F0, this, arg1);
    }

    // 0x534940 | ?Opponent@aiMap@@QAEPAVaiRouteRacer@@H@Z
    inline class aiRouteRacer* Opponent(int32_t arg1)
    {
        return stub<member_func_t<class aiRouteRacer*, aiMap, int32_t>>(0x534940, this, arg1);
    }

    // 0x534990 | ?CTFOpponent@aiMap@@QAEPAVaiCTFRacer@@H@Z
    inline class aiCTFRacer* CTFOpponent(int32_t arg1)
    {
        return stub<member_func_t<class aiCTFRacer*, aiMap, int32_t>>(0x534990, this, arg1);
    }

    // 0x5349E0 | ?Hookman@aiMap@@QAEPAVmcHookman@@H@Z
    inline class mcHookman* Hookman(int32_t arg1)
    {
        return stub<member_func_t<class mcHookman*, aiMap, int32_t>>(0x5349E0, this, arg1);
    }

    // 0x534A30 | ?CableCar@aiMap@@QAEPAVaiCableCar@@H@Z
    inline class aiCableCar* CableCar(int32_t arg1)
    {
        return stub<member_func_t<class aiCableCar*, aiMap, int32_t>>(0x534A30, this, arg1);
    }

    // 0x534A70 | ?Subway@aiMap@@QAEPAVaiSubway@@H@Z
    inline class aiSubway* Subway(int32_t arg1)
    {
        return stub<member_func_t<class aiSubway*, aiMap, int32_t>>(0x534A70, this, arg1);
    }

    // 0x534AB0 | ?Pedestrian@aiMap@@QAEPAVaiPedestrian@@H@Z
    inline class aiPedestrian* Pedestrian(int32_t arg1)
    {
        return stub<member_func_t<class aiPedestrian*, aiMap, int32_t>>(0x534AB0, this, arg1);
    }

    // 0x534AF0 | ?Player@aiMap@@QAEPAVaiVehiclePlayer@@H@Z
    inline class aiVehiclePlayer* Player(int32_t arg1)
    {
        return stub<member_func_t<class aiVehiclePlayer*, aiMap, int32_t>>(0x534AF0, this, arg1);
    }

    // 0x534B30 | ??0aiMap@@QAE@XZ
    inline aiMap()
    {
        stub<member_func_t<void, aiMap>>(0x534B30, this);
    }

    // 0x534C10 | ?Clean@aiMap@@QAEXXZ
    inline void Clean()
    {
        return stub<member_func_t<void, aiMap>>(0x534C10, this);
    }

    // 0x534F60 | ?InitRouting@aiMap@@QAEXXZ
    inline void InitRouting()
    {
        return stub<member_func_t<void, aiMap>>(0x534F60, this);
    }

    // 0x534FC0 | ?Init@aiMap@@QAEXPAD00ABUdgStatePack@@HPAPAVvehCar@@_N@Z
    inline void Init(char* arg1, char* arg2, char* arg3, struct dgStatePack const& arg4, int32_t arg5,
        class vehCar** arg6, bool arg7)
    {
        return stub<
            member_func_t<void, aiMap, char*, char*, char*, struct dgStatePack const&, int32_t, class vehCar**, bool>>(
            0x534FC0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x535DF0 | ?SaveBinary@aiMap@@QAEXPAD0@Z
    inline void SaveBinary(char* arg1, char* arg2)
    {
        return stub<member_func_t<void, aiMap, char*, char*>>(0x535DF0, this, arg1, arg2);
    }

    // 0x535EE0 | ?ReadBinary@aiMap@@QAEXPAD0@Z
    inline void ReadBinary(char* arg1, char* arg2)
    {
        return stub<member_func_t<void, aiMap, char*, char*>>(0x535EE0, this, arg1, arg2);
    }

    // 0x5364A0 | ?MapRoadToRooms@aiMap@@AAEXPAVaiPath@@W4aiMapCompTypes@@@Z
    inline void MapRoadToRooms(class aiPath* arg1, enum aiMapCompTypes arg2)
    {
        return stub<member_func_t<void, aiMap, class aiPath*, enum aiMapCompTypes>>(0x5364A0, this, arg1, arg2);
    }

    // 0x537410 | ?StopRoadTraffic@aiMap@@AAEX_N@Z
    inline void StopRoadTraffic(bool arg1)
    {
        return stub<member_func_t<void, aiMap, bool>>(0x537410, this, arg1);
    }

    // 0x537500 | ?DrawNextVisibleAmbient@aiMap@@QAEXXZ
    inline void DrawNextVisibleAmbient()
    {
        return stub<member_func_t<void, aiMap>>(0x537500, this);
    }

    // 0x537510 | ?DrawX@aiMap@@QAEXAAVVector3@@@Z
    inline void DrawX(class Vector3& arg1)
    {
        return stub<member_func_t<void, aiMap, class Vector3&>>(0x537510, this, arg1);
    }

    // 0x537520 | ?AllwaysGreen@aiMap@@QAEXXZ
    inline void AllwaysGreen()
    {
        return stub<member_func_t<void, aiMap>>(0x537520, this);
    }

    // 0x537560 | ?AllwaysRed@aiMap@@QAEXXZ
    inline void AllwaysRed()
    {
        return stub<member_func_t<void, aiMap>>(0x537560, this);
    }

    // 0x5375A0 | ?DrawAppRoads@aiMap@@QAEXXZ
    inline void DrawAppRoads()
    {
        return stub<member_func_t<void, aiMap>>(0x5375A0, this);
    }

    // 0x5375C0 | ?DrawMap@aiMap@@QAEXXZ
    inline void DrawMap()
    {
        return stub<member_func_t<void, aiMap>>(0x5375C0, this);
    }

    // 0x5375E0 | ?DrawPathIds@aiMap@@QAEXXZ
    inline void DrawPathIds()
    {
        return stub<member_func_t<void, aiMap>>(0x5375E0, this);
    }

    // 0x537600 | ?MapComponentType@aiMap@@QAEHHPAH@Z
    inline int32_t MapComponentType(int32_t arg1, int32_t* arg2)
    {
        return stub<member_func_t<int32_t, aiMap, int32_t, int32_t*>>(0x537600, this, arg1, arg2);
    }

    // 0x537680 | ?MapComponent@aiMap@@QAEHABVVector3@@PAF1F@Z
    inline int32_t MapComponent(class Vector3 const& arg1, int16_t* arg2, int16_t* arg3, int16_t arg4)
    {
        return stub<member_func_t<int32_t, aiMap, class Vector3 const&, int16_t*, int16_t*, int16_t>>(
            0x537680, this, arg1, arg2, arg3, arg4);
    }

    // 0x5377B0 | ?PositionToAIMapComp@aiMap@@QAEHABVVector3@@PAF11F@Z
    inline int32_t PositionToAIMapComp(
        class Vector3 const& arg1, int16_t* arg2, int16_t* arg3, int16_t* arg4, int16_t arg5)
    {
        return stub<member_func_t<int32_t, aiMap, class Vector3 const&, int16_t*, int16_t*, int16_t*, int16_t>>(
            0x5377B0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x537AA0 | ?MapComponent@aiMap@@QAEHABVVector3@@PAF1FF@Z
    inline int32_t MapComponent(class Vector3 const& arg1, int16_t* arg2, int16_t* arg3, int16_t arg4, int16_t arg5)
    {
        return stub<member_func_t<int32_t, aiMap, class Vector3 const&, int16_t*, int16_t*, int16_t, int16_t>>(
            0x537AA0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x537C70 | ?CoreMapComponent@aiMap@@QAEHABVVector3@@PAF1FF@Z
    inline int32_t CoreMapComponent(class Vector3 const& arg1, int16_t* arg2, int16_t* arg3, int16_t arg4, int16_t arg5)
    {
        return stub<member_func_t<int32_t, aiMap, class Vector3 const&, int16_t*, int16_t*, int16_t, int16_t>>(
            0x537C70, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x537E00 | ?DetermineRoadPosInfo@aiMap@@QAEHABVMatrix34@@PAVaiRailSet@@PAFPAM23HH@Z
    inline int32_t DetermineRoadPosInfo(class Matrix34 const& arg1, class aiRailSet* arg2, int16_t* arg3, float* arg4,
        int16_t* arg5, float* arg6, int32_t arg7, int32_t arg8)
    {
        return stub<member_func_t<int32_t, aiMap, class Matrix34 const&, class aiRailSet*, int16_t*, float*, int16_t*,
            float*, int32_t, int32_t>>(0x537E00, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x537F30 | ?FindAmbAppRoad@aiMap@@QAEHH@Z
    inline int32_t FindAmbAppRoad(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiMap, int32_t>>(0x537F30, this, arg1);
    }

    // 0x537F60 | ?FindPedAppRoad@aiMap@@QAEHH@Z
    inline int32_t FindPedAppRoad(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiMap, int32_t>>(0x537F60, this, arg1);
    }

    // 0x537F90 | ?PredictIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@HPA_N@Z
    inline class aiPath* PredictIntersectionPath(int32_t arg1, class Matrix34 const& arg2, int32_t arg3, bool* arg4)
    {
        return stub<member_func_t<class aiPath*, aiMap, int32_t, class Matrix34 const&, int32_t, bool*>>(
            0x537F90, this, arg1, arg2, arg3, arg4);
    }

    // 0x538280 | ?GetPathFromID@aiMap@@QAEPAVaiPath@@H@Z
    inline class aiPath* GetPathFromID(int32_t arg1)
    {
        return stub<member_func_t<class aiPath*, aiMap, int32_t>>(0x538280, this, arg1);
    }

    // 0x5382C0 | ?PredictAmbIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@@Z
    inline class aiPath* PredictAmbIntersectionPath(int32_t arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<class aiPath*, aiMap, int32_t, class Matrix34 const&>>(0x5382C0, this, arg1, arg2);
    }

    // 0x538530 | ?PredictAmbFreewayIntersectionPath@aiMap@@QAEPAVaiPath@@HABVMatrix34@@@Z
    inline class aiPath* PredictAmbFreewayIntersectionPath(int32_t arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<class aiPath*, aiMap, int32_t, class Matrix34 const&>>(0x538530, this, arg1, arg2);
    }

    // 0x538840 | ?Dump@aiMap@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiMap>>(0x538840, this);
    }

    // 0x538960 | ?NumCars@aiMap@@AAEHHMM@Z
    inline int32_t NumCars(int32_t arg1, float arg2, float arg3)
    {
        return stub<member_func_t<int32_t, aiMap, int32_t, float, float>>(0x538960, this, arg1, arg2, arg3);
    }

    // 0x538990 | ?FindRoad@aiMap@@AAEHPAVCArrayList@@H@Z
    inline int32_t FindRoad(class CArrayList* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, aiMap, class CArrayList*, int32_t>>(0x538990, this, arg1, arg2);
    }

    // 0x5389D0 | ?FindInt@aiMap@@AAEHPAFHH@Z
    inline int32_t FindInt(int16_t* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, aiMap, int16_t*, int32_t, int32_t>>(0x5389D0, this, arg1, arg2, arg3);
    }

    // 0x538A10 | ?ChooseNextRandomLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextRandomLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x538A10, this, arg1);
    }

    // 0x538BD0 | ?ChooseNextLeftStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextLeftStraightLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x538BD0, this, arg1);
    }

    // 0x538EC0 | ?ChooseNextRightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextRightLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x538EC0, this, arg1);
    }

    // 0x538FA0 | ?ChooseNextRightStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextRightStraightLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x538FA0, this, arg1);
    }

    // 0x5392B0 | ?ChooseNextStraightLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextStraightLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x5392B0, this, arg1);
    }

    // 0x5396A0 | ?ChooseStraightLinkAt4Way@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseStraightLinkAt4Way(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x5396A0, this, arg1);
    }

    // 0x539750 | ?ChooseNextLaneLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextLaneLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x539750, this, arg1);
    }

    // 0x539870 | ?ChooseNextFreewayLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextFreewayLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x539870, this, arg1);
    }

    // 0x5399A0 | ?ChooseNextRightStraightFreewayLink@aiMap@@QAEHPAVaiRailSet@@@Z
    inline int32_t ChooseNextRightStraightFreewayLink(class aiRailSet* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class aiRailSet*>>(0x5399A0, this, arg1);
    }

    // 0x539A20 | ?AdjustPedestrians@aiMap@@AAEXHHH@Z
    inline void AdjustPedestrians(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiMap, int32_t, int32_t, int32_t>>(0x539A20, this, arg1, arg2, arg3);
    }

    // 0x539CF0 | ?ClearPeds@aiMap@@QAEXPAVaiPath@@@Z
    inline void ClearPeds(class aiPath* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiPath*>>(0x539CF0, this, arg1);
    }

    // 0x539D30 | ?AddPedestrian@aiMap@@QAEXPAVaiPedestrian@@@Z
    inline void AddPedestrian(class aiPedestrian* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiPedestrian*>>(0x539D30, this, arg1);
    }

    // 0x539D70 | ?RemovePedestrian@aiMap@@QAEXPAVaiPedestrian@@@Z
    inline void RemovePedestrian(class aiPedestrian* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiPedestrian*>>(0x539D70, this, arg1);
    }

    // 0x539DD0 | ?AdjustAmbients@aiMap@@AAEXHHH@Z
    inline void AdjustAmbients(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiMap, int32_t, int32_t, int32_t>>(0x539DD0, this, arg1, arg2, arg3);
    }

    // 0x53A5B0 | ?AddAmbient@aiMap@@QAEXPAVaiVehicleSpline@@@Z
    inline void AddAmbient(class aiVehicleSpline* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiVehicleSpline*>>(0x53A5B0, this, arg1);
    }

    // 0x53A600 | ?RemoveAmbient@aiMap@@QAEXPAVaiVehicleSpline@@@Z
    inline void RemoveAmbient(class aiVehicleSpline* arg1)
    {
        return stub<member_func_t<void, aiMap, class aiVehicleSpline*>>(0x53A600, this, arg1);
    }

    // 0x53A680 | ?DetRdSegBetweenInts@aiMap@@QAEPAVaiPath@@PAVaiIntersection@@0PA_N@Z
    inline class aiPath* DetRdSegBetweenInts(class aiIntersection* arg1, class aiIntersection* arg2, bool* arg3)
    {
        return stub<member_func_t<class aiPath*, aiMap, class aiIntersection*, class aiIntersection*, bool*>>(
            0x53A680, this, arg1, arg2, arg3);
    }

    // 0x53A730 | ?DetRdSegBetweenInts@aiMap@@QAEPAVaiPath@@HH@Z
    inline class aiPath* DetRdSegBetweenInts(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<class aiPath*, aiMap, int32_t, int32_t>>(0x53A730, this, arg1, arg2);
    }

    // 0x53A760 | ?GoodRoadForCopStartPos@aiMap@@QAEHH@Z
    inline int32_t GoodRoadForCopStartPos(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiMap, int32_t>>(0x53A760, this, arg1);
    }

    // 0x53A7A0 | ?CalcRoute@aiMap@@QAEXABVMatrix34@@ABVVector3@@1PAF2FF_N@Z
    inline void CalcRoute(class Matrix34 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
        int16_t* arg4, int16_t* arg5, int16_t arg6, int16_t arg7, bool arg8)
    {
        return stub<member_func_t<void, aiMap, class Matrix34 const&, class Vector3 const&, class Vector3 const&,
            int16_t*, int16_t*, int16_t, int16_t, bool>>(
            0x53A7A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x53B560 | ?AddRoutingNode@aiMap@@QAEXH@Z
    inline void AddRoutingNode(int32_t arg1)
    {
        return stub<member_func_t<void, aiMap, int32_t>>(0x53B560, this, arg1);
    }

    // 0x53B5D0 | ?RemoveRoutingNode@aiMap@@QAEXH@Z
    inline void RemoveRoutingNode(int32_t arg1)
    {
        return stub<member_func_t<void, aiMap, int32_t>>(0x53B5D0, this, arg1);
    }

    // 0x53B640 | ?AddPlayer@aiMap@@QAEHPAVvehCar@@@Z
    inline int32_t AddPlayer(class vehCar* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class vehCar*>>(0x53B640, this, arg1);
    }

    // 0x53B700 | ?RemovePlayer@aiMap@@QAEHPAVvehCar@@@Z
    inline int32_t RemovePlayer(class vehCar* arg1)
    {
        return stub<member_func_t<int32_t, aiMap, class vehCar*>>(0x53B700, this, arg1);
    }

    // 0x53B7B0 | ?SetWaypoints@aiMap@@QAEXPAVVector4@@HH@Z
    inline void SetWaypoints(class Vector4* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiMap, class Vector4*, int32_t, int32_t>>(0x53B7B0, this, arg1, arg2, arg3);
    }

    // 0x53B860 | ?DrawFinalCheckPoint@aiMap@@QAEXXZ
    inline void DrawFinalCheckPoint()
    {
        return stub<member_func_t<void, aiMap>>(0x53B860, this);
    }

    // 0x53B870 | ?TestProbes@aiMap@@QAEXH@Z
    inline void TestProbes(int32_t arg1)
    {
        return stub<member_func_t<void, aiMap, int32_t>>(0x53B870, this, arg1);
    }

    // 0x534BB0 | ??1aiMap@@UAE@XZ
    inline ~aiMap() override
    {
        stub<member_func_t<void, aiMap>>(0x534BB0, this);
    }

    // 0x5374F0 | ?Cull@aiMap@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, aiMap>>(0x5374F0, this);
    }

    // 0x536E50 | ?Update@aiMap@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiMap>>(0x536E50, this);
    }

    // 0x536A30 | ?Reset@aiMap@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiMap>>(0x536A30, this);
    }

    // 0x5374E0 | ?UpdatePaused@aiMap@@UAEXXZ
    inline void UpdatePaused() override
    {
        return stub<member_func_t<void, aiMap>>(0x5374E0, this);
    }
};
