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
#include "M1_UM1AbilityOpExecCalc.h"
#include "M1_FM1AbilityOpCalcParam.h"
#include "M1_FM1CalcDamageInfo.h"
#include "M1Data_ENUMS.h"
#include "M1Data_FM1ScaledInteger.h"
#include "M1_FM1AbilityOpExecCalcOutput.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CalcEtcBase
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Special/CalcEtcBase.CalcEtcBase_C
     * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
     */
    class UCalcEtcBase_C : public M1::UM1AbilityOpExecCalc
    {
    public:
        void ApplySkillATK(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo, M1Data::EM1ElementalDamageChannel ElementalChannel, M1Data::EM1SkillArcheType ArcheType, const M1Data::FM1ScaledInteger& AddPower, const M1Data::FM1ScaledInteger& AddAttack, bool IsHittingPC);
        void ApplySkillCost(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo, bool IsRatio, double Value, M1Data::EM1StatType MaxStat, bool bIgnoreCoefficient);
        void DoCalculation(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo, M1::FM1AbilityOpExecCalcOutput* Output);
        void Execute(const M1::FM1AbilityOpCalcParam& Param, M1::FM1AbilityOpExecCalcOutput* Output);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Special/CalcEtcBase.CalcEtcBase_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
