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
#include "Engine_UParticleModuleLocationPrimitiveSphere.h"

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
     * Class /Script/Engine.ParticleModuleLocationPrimitiveSphere_Seeded
     * Size -> 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
     */
    class UParticleModuleLocationPrimitiveSphere_Seeded : public Engine::UParticleModuleLocationPrimitiveSphere
    {
    public:
        Engine::FParticleRandomSeedInfo                              RandomSeedInfo;                                          //  Edit, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.ParticleModuleLocationPrimitiveSphere_Seeded");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
