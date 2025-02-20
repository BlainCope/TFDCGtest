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
#include "Engine_UDistributionVectorParameterBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.DistributionVectorParticleParameter
     * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
     */
    class UDistributionVectorParticleParameter : public Engine::UDistributionVectorParameterBase
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.DistributionVectorParticleParameter");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
