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
#include "Engine_UBlueprintFunctionLibrary.h"
#include "AnimationBudgetAllocator_FAnimationBudgetAllocatorParameters.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimationBudgetAllocator
{
    /**
     * Class /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UAnimationBudgetBlueprintLibrary : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_SetAnimationBudgetParameters(CoreUObject::UObject* WorldContextObject, const AnimationBudgetAllocator::FAnimationBudgetAllocatorParameters& InParameters);
        void STATIC_EnableAnimationBudget(CoreUObject::UObject* WorldContextObject, bool bEnabled);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
