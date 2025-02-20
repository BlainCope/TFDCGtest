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
#include "M1_UM1UIMissionRewardCurrency.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Reward_Currency
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Mission/UI_Mission_Reward_Currency.UI_Mission_Reward_Currency_C
     * Size -> 0x0000 (FullSize[0x0750] - InheritedSize[0x0750])
     */
    class UUI_Mission_Reward_Currency_C : public M1::UM1UIMissionRewardCurrency
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Mission/UI_Mission_Reward_Currency.UI_Mission_Reward_Currency_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
