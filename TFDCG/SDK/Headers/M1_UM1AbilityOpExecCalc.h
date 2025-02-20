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
#include "M1_FM1TraitTagContainer.h"
#include "M1_UM1AbilityOpCalc.h"
#include "GameplayTags_FGameplayTagContainer.h"
#include "M1_FM1AbilityOpCalcParam.h"
#include "M1_FM1AbilityOpExecCalcOutput.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1AbilityOpExecCalc
     * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
     */
    class UM1AbilityOpExecCalc : public M1::UM1AbilityOpCalc
    {
    public:
        M1::FM1TraitTagContainer                                     TraitTags;                                               //  Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected

    public:
        GameplayTags::FGameplayTagContainer GetTraitTags();
        void Execute(const M1::FM1AbilityOpCalcParam& Param, M1::FM1AbilityOpExecCalcOutput* Output);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1AbilityOpExecCalc");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
