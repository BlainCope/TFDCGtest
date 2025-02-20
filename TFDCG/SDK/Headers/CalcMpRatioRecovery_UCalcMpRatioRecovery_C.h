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
#include "CalcRecoveryBase_UCalcRecoveryBase_C.h"
#include "M1_FM1AbilityOpCalcParam.h"
#include "M1_FM1CalcDamageInfo.h"
#include "M1_FM1AbilityOpExecCalcOutput.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CalcMpRatioRecovery
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Recovery/CalcMpRatioRecovery.CalcMpRatioRecovery_C
     * Size -> 0x0016 (FullSize[0x0110] - InheritedSize[0x00FA])
     */
    class UCalcMpRatioRecovery_C : public CalcRecoveryBase::UCalcRecoveryBase_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        double                                                       HealRatioMin;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       HealRatioMax;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void SetRecoveryOutModifier(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo, M1::FM1AbilityOpExecCalcOutput* Output);
        void DoCalculation(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Recovery/CalcMpRatioRecovery.CalcMpRatioRecovery_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
