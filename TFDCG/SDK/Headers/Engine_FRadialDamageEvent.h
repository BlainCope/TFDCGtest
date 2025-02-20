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
#include "Engine_FRadialDamageParams.h"
#include "CoreUObject_FVector.h"
#include "BasicTypes_TArray.h"
#include "Engine_FHitResult.h"
#include "Engine_FDamageEvent.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.RadialDamageEvent
     * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
     */
    struct FRadialDamageEvent : public Engine::FDamageEvent
    {
    public:
        Engine::FRadialDamageParams                                  Params;                                                  //  NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         Origin;                                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FHitResult>                       ComponentHits;                                           //  ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
