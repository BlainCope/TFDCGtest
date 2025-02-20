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
#include "BasicTypes_FText.h"
#include "AIModule_UEnvQueryGenerator.h"
#include "BasicTypes_TArray.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AIModule { class UEnvQueryContext; };
namespace CG::AIModule { class UEnvQueryItemType; };
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AIModule
{
    /**
     * Class /Script/AIModule.EnvQueryGenerator_BlueprintBase
     * Size -> 0x0038 (FullSize[0x0088] - InheritedSize[0x0050])
     */
    class UEnvQueryGenerator_BlueprintBase : public AIModule::UEnvQueryGenerator
    {
    public:
        BasicTypes::FText                                            GeneratorsActionDescription;                             //  Edit, NativeAccessSpecifierPublic
        AIModule::UEnvQueryContext*                                  Context;                                                 //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AIModule::UEnvQueryItemType*                                 GeneratedItemType;                                       //  Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        CoreUObject::UObject* GetQuerier();
        void DoItemGenerationFromActors(BasicTypes::TArray<Engine::AActor*> ContextActors);
        void DoItemGeneration(BasicTypes::TArray<CoreUObject::FVector> ContextLocations);
        void AddGeneratedVector(const CoreUObject::FVector& GeneratedVector);
        void AddGeneratedActor(Engine::AActor* GeneratedActor);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AIModule.EnvQueryGenerator_BlueprintBase");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
