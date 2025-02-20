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
#include "M1_ENUMS.h"
#include "M1_UM1WeaponComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1WeaponAttackComponent; };
namespace CG::M1 { class UM1WeaponAimComponent; };
namespace CG::M1 { class UM1WeaponVfxComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1WeaponChargeComponent
     * Size -> 0x0050 (FullSize[0x0128] - InheritedSize[0x00D8])
     */
    class UM1WeaponChargeComponent : public M1::UM1WeaponComponent
    {
    public:
        M1::UM1WeaponAttackComponent*                                Attack_Component;                                        //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1WeaponAimComponent*                                   Aim_Component;                                           //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1WeaponVfxComponent*                                   VFX_Component;                                           //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x30];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      CurrentLevel;                                            //  Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::EM1WeaponChargeState                                     SimulatedState;                                          //  Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (PADDING)

    public:
        void OnRep_SimulatedState(M1::EM1WeaponChargeState PrevState);
        void OnRep_CurrentLevel(int32_t PrevLevel);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1WeaponChargeComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
