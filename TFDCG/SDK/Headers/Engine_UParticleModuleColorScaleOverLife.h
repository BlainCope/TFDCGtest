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
#include "Engine_FRawDistributionVector.h"
#include "Engine_FRawDistributionFloat.h"
#include "Engine_UParticleModuleColorBase.h"

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
     * Class /Script/Engine.ParticleModuleColorScaleOverLife
     * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
     */
    class UParticleModuleColorScaleOverLife : public Engine::UParticleModuleColorBase
    {
    public:
        Engine::FRawDistributionVector                               ColorScaleOverLife;                                      //  Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
        Engine::FRawDistributionFloat                                AlphaScaleOverLife;                                      //  Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
        bool                                                         bEmitterTime : 1;                                        //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.ParticleModuleColorScaleOverLife");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
