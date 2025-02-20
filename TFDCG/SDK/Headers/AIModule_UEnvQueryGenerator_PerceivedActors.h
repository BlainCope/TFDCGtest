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
#include "AIModule_FAIDataProviderFloatValue.h"
#include "AIModule_UEnvQueryGenerator.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::AIModule { class UEnvQueryContext; };
namespace CG::AIModule { class UAISense; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AIModule
{
    /**
     * Class /Script/AIModule.EnvQueryGenerator_PerceivedActors
     * Size -> 0x0058 (FullSize[0x00A8] - InheritedSize[0x0050])
     */
    class UEnvQueryGenerator_PerceivedActors : public AIModule::UEnvQueryGenerator
    {
    public:
        Engine::AActor*                                              AllowedActorClass;                                       //  Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AIModule::FAIDataProviderFloatValue                          SearchRadius;                                            //  Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
        AIModule::UEnvQueryContext*                                  ListenerContext;                                         //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AIModule::UAISense*                                          SenseToUse;                                              //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bIncludeKnownActors;                                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AIModule.EnvQueryGenerator_PerceivedActors");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
