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
#include "M1_AM1MissionTaskActorCompetitiveOccupation.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_MissionTaskCompetitiveOccupation
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Mission/BP_MissionTaskCompetitiveOccupation.BP_MissionTaskCompetitiveOccupation_C
     * Size -> 0x0000 (FullSize[0x0700] - InheritedSize[0x0700])
     */
    class ABP_MissionTaskCompetitiveOccupation_C : public M1::AM1MissionTaskActorCompetitiveOccupation
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Mission/BP_MissionTaskCompetitiveOccupation.BP_MissionTaskCompetitiveOccupation_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
