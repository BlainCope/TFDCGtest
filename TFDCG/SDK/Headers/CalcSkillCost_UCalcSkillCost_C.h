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
#include "M1Data_ENUMS.h"
#include "CalcEtcBase_UCalcEtcBase_C.h"
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

namespace CG::CalcSkillCost
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Special/CalcSkillCost.CalcSkillCost_C
     * Size -> 0x0012 (FullSize[0x010A] - InheritedSize[0x00F8])
     */
    class UCalcSkillCost_C : public CalcEtcBase::UCalcEtcBase_C
    {
    public:
        M1Data::EM1StatType                                          CurrentStat;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        M1Data::EM1StatType                                          MaxStat;                                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        double                                                       Value;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         IsRatio;                                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         IgnoreCoefficient;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void DoCalculation(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo, M1::FM1AbilityOpExecCalcOutput* Output);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Special/CalcSkillCost.CalcSkillCost_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
