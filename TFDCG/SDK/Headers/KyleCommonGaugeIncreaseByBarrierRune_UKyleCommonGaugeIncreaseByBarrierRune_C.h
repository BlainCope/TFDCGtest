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
#include "KyleCommonGaugeIncreaseByBarrier_UKyleCommonGaugeIncreaseByBarrier_C.h"
#include "M1_FM1AbilityOpCalcParam.h"
#include "M1_FM1AbilityOpExecCalcOutput.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::KyleCommonGaugeIncreaseByBarrierRune
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Value/KyleCommonGaugeIncreaseByBarrierRune.KyleCommonGaugeIncreaseByBarrierRune_C
     * Size -> 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
     */
    class UKyleCommonGaugeIncreaseByBarrierRune_C : public KyleCommonGaugeIncreaseByBarrier::UKyleCommonGaugeIncreaseByBarrier_C
    {
    public:
        double                                                       GetGaugeRatio;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void Execute(const M1::FM1AbilityOpCalcParam& Param, M1::FM1AbilityOpExecCalcOutput* Output);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Value/KyleCommonGaugeIncreaseByBarrierRune.KyleCommonGaugeIncreaseByBarrierRune_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
