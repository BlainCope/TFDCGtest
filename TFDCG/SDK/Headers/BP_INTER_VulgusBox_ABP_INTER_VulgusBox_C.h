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
#include "BP_FieldInteractableBase_Hit_ABP_FieldInteractableBase_Hit_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_INTER_VulgusBox
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/InteractionObject/BP_INTER_VulgusBox.BP_INTER_VulgusBox_C
     * Size -> 0x0000 (FullSize[0x0448] - InheritedSize[0x0448])
     */
    class ABP_INTER_VulgusBox_C : public BP_FieldInteractableBase_Hit::ABP_FieldInteractableBase_Hit_C
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/InteractionObject/BP_INTER_VulgusBox.BP_INTER_VulgusBox_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
