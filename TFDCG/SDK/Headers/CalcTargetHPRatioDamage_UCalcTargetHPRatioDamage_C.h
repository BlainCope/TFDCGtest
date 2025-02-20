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
#include "CalcDamageBase_UCalcDamageBase_C.h"
#include "M1_FM1AbilityOpCalcParam.h"
#include "M1_FM1CalcDamageInfo.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CalcTargetHPRatioDamage
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Damage/CalcTargetHPRatioDamage.CalcTargetHPRatioDamage_C
     * Size -> 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
     */
    class UCalcTargetHPRatioDamage_C : public CalcDamageBase::UCalcDamageBase_C
    {
    public:
        double                                                       TargetHpBasedDamage;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       TargetNamedHpBasedDamage;                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       TargetBossHpBasedDamage;                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void DoCalculation(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Damage/CalcTargetHPRatioDamage.CalcTargetHPRatioDamage_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
