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
#include "BasicTypes_TArray.h"
#include "BasicTypes_TWeakObjectPtr.h"
#include "M1_UM1TaskEvent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1RuleBasedActorSpawner; };
namespace CG::M1 { class UM1ActorSpawnRule; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1TaskEvent_PlaceSpawner
     * Size -> 0x0038 (FullSize[0x01E8] - InheritedSize[0x01B0])
     */
    class UM1TaskEvent_PlaceSpawner : public M1::UM1TaskEvent
    {
    public:
        M1::AM1RuleBasedActorSpawner*                                SpawnerClass;                                            //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1ActorSpawnRule*                                       SpawnRule;                                               //  Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::AActor*>                          LocationTargets;                                         //  Edit, ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TWeakObjectPtr<M1::AM1RuleBasedActorSpawner>     SpawnedActor;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        float                                                        SpawningLifeTime;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0xC];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1TaskEvent_PlaceSpawner");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
