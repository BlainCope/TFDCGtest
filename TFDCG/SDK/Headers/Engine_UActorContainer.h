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
#include "BasicTypes_TMap.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.ActorContainer
     * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
     */
    class UActorContainer : public CoreUObject::UObject
    {
    public:
        BasicTypes::TMap<BasicTypes::FName, Engine::AActor*>         Actors;                                                  //  UObjectWrapper, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.ActorContainer");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
