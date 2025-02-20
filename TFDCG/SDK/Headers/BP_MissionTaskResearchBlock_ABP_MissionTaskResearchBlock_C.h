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
#include "M1_AM1MissionTaskActorResearchBlock.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_MissionTaskResearchBlock
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Mission/BP_MissionTaskResearchBlock.BP_MissionTaskResearchBlock_C
     * Size -> 0x0000 (FullSize[0x06E0] - InheritedSize[0x06E0])
     */
    class ABP_MissionTaskResearchBlock_C : public M1::AM1MissionTaskActorResearchBlock
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Mission/BP_MissionTaskResearchBlock.BP_MissionTaskResearchBlock_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
