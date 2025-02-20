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
#include "Engine_FRawDistributionFloat.h"
#include "Engine_UParticleModuleSpawnBase.h"

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
     * Class /Script/Engine.ParticleModuleSpawnPerUnit
     * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
     */
    class UParticleModuleSpawnPerUnit : public Engine::UParticleModuleSpawnBase
    {
    public:
        float                                                        UnitScalar;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MovementTolerance;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FRawDistributionFloat                                SpawnPerUnit;                                            //  Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
        float                                                        MaxFrameDistance;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIgnoreSpawnRateWhenMoving : 1;                          //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIgnoreMovementAlongX : 1;                               //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIgnoreMovementAlongY : 1;                               //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIgnoreMovementAlongZ : 1;                               //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.ParticleModuleSpawnPerUnit");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
