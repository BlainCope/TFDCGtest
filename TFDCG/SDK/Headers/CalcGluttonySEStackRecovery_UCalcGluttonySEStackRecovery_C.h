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
#include "CalcRecoveryBase_UCalcRecoveryBase_C.h"
#include "M1_FM1AbilityOpCalcParam.h"
#include "M1_FM1CalcDamageInfo.h"
#include "M1Data_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CalcGluttonySEStackRecovery
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Recovery/CalcGluttonySEStackRecovery.CalcGluttonySEStackRecovery_C
     * Size -> 0x000F (FullSize[0x0109] - InheritedSize[0x00FA])
     */
    class UCalcGluttonySEStackRecovery_C : public CalcRecoveryBase::UCalcRecoveryBase_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      StackCount;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       RecoveryAmount;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        M1::EM1RecoveryType                                          RecoveryType;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void ApplyGluttonySEStackRecovery(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo, double RecoveryAmount, M1::EM1RecoveryType RecoveryType, M1Data::EM1StatType RecoveryStat);
        void DoCalculation(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Recovery/CalcGluttonySEStackRecovery.CalcGluttonySEStackRecovery_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
