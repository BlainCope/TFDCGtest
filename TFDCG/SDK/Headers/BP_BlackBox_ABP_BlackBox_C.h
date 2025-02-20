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
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_BlackBox
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/CharacterPreview/BP_BlackBox.BP_BlackBox_C
     * Size -> 0x0040 (FullSize[0x0288] - InheritedSize[0x0248])
     */
    class ABP_BlackBox_C : public Engine::AActor
    {
    public:
        Engine::UStaticMeshComponent*                                Plane1;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                Plane;                                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                Plane6;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                Plane5;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                Plane4;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                Plane3;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                Plane2;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     DefaultSceneRoot;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/CharacterPreview/BP_BlackBox.BP_BlackBox_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
