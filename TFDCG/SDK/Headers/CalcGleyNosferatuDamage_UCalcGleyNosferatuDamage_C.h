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

namespace CG::CalcGleyNosferatuDamage
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Damage/CalcGleyNosferatuDamage.CalcGleyNosferatuDamage_C
     * Size -> 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
     */
    class UCalcGleyNosferatuDamage_C : public CalcDamageBase::UCalcDamageBase_C
    {
    public:
        double                                                       ATKMultiplierByCharge;                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void SumATK(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo);
        void DoCalculation(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo);
        void SetAdditionalDamageInfo(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Damage/CalcGleyNosferatuDamage.CalcGleyNosferatuDamage_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
