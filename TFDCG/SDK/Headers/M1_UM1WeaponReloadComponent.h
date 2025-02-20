#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    TFDCG                       |
 * | Version: 1                           |
 * | Date:    08/22/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "M1_FM1WeaponReloadRepData.h"
#include "M1_FM1WeaponReloadingState.h"
#include "M1_UM1WeaponComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1WeaponRoundsComponent; };
namespace CG::M1 { class UM1WeaponMiscComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1WeaponReloadComponent
     * Size -> 0x0048 (FullSize[0x0120] - InheritedSize[0x00D8])
     */
    class UM1WeaponReloadComponent : public M1::UM1WeaponComponent
    {
    public:
        M1::FM1WeaponReloadRepData                                   WeaponReloadRepData;                                     //  Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
        M1::FM1WeaponReloadingState                                  WeaponReloadingState;                                    //  Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
        M1::UM1WeaponRoundsComponent*                                Rounds_Component;                                        //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1WeaponMiscComponent*                                  Misc_Component;                                          //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x28];                                  //  MISSED OFFSET (PADDING)

    public:
        void ServerStopReload();
        void ServerStartReload(float InPlayRate);
        void ServerEndReload(bool ByInterrupt);
        void OnRepWeaponReloadRepData();
        void ClientNotifyServerStartReloadFailed();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1WeaponReloadComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
