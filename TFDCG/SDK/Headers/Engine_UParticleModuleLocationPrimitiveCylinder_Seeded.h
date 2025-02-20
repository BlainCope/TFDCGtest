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
#include "Engine_FParticleRandomSeedInfo.h"
#include "Engine_UParticleModuleLocationPrimitiveCylinder.h"

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
     * Class /Script/Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
     * Size -> 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
     */
    class UParticleModuleLocationPrimitiveCylinder_Seeded : public Engine::UParticleModuleLocationPrimitiveCylinder
    {
    public:
        Engine::FParticleRandomSeedInfo                              RandomSeedInfo;                                          //  Edit, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.ParticleModuleLocationPrimitiveCylinder_Seeded");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
