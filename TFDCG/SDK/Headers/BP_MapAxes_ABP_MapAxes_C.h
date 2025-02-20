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
#include "M1_AM1MapAxes.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UArrowComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_MapAxes
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/WorldMap/BP_MapAxes.BP_MapAxes_C
     * Size -> 0x0038 (FullSize[0x0280] - InheritedSize[0x0248])
     */
    class ABP_MapAxes_C : public M1::AM1MapAxes
    {
    public:
        Engine::UArrowComponent*                                     Arrow3;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UArrowComponent*                                     Arrow2;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     MaxAxis;                                                 //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UArrowComponent*                                     Arrow1;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UArrowComponent*                                     Arrow;                                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     MinAxis;                                                 //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     DefaultSceneRoot;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

    public:
        CoreUObject::FVector BP_GetMinAxis();
        CoreUObject::FVector BP_GetMaxAxis();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/WorldMap/BP_MapAxes.BP_MapAxes_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
