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
#include "CalcWeaponInstantHitDamage_UCalcWeaponInstantHitDamage_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CalcWeaponInstantHitDamage_PickupWeapon
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Damage/CalcWeaponInstantHitDamage_PickupWeapon.CalcWeaponInstantHitDamage_PickupWeapon_C
     * Size -> 0x0000 (FullSize[0x0150] - InheritedSize[0x0150])
     */
    class UCalcWeaponInstantHitDamage_PickupWeapon_C : public CalcWeaponInstantHitDamage::UCalcWeaponInstantHitDamage_C
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Damage/CalcWeaponInstantHitDamage_PickupWeapon.CalcWeaponInstantHitDamage_PickupWeapon_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
