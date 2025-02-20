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
#include "M1_FM1AbilityOpExecCalcOutput.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OverrideDBNORescueTime
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Special/OverrideDBNORescueTime.OverrideDBNORescueTime_C
     * Size -> 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
     */
    class UOverrideDBNORescueTime_C : public M1::UM1AbilityOpExecCalc
    {
    public:
        double                                                       RescueTime;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void Execute(const M1::FM1AbilityOpCalcParam& Param, M1::FM1AbilityOpExecCalcOutput* Output);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Gameplay/Common/Calculation/Special/OverrideDBNORescueTime.OverrideDBNORescueTime_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
