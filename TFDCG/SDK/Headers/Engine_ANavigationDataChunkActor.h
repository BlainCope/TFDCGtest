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
#include "CoreUObject_FBox.h"
#include "Engine_APartitionActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UNavigationDataChunk; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.NavigationDataChunkActor
     * Size -> 0x0030 (FullSize[0x0278] - InheritedSize[0x0248])
     */
    class ANavigationDataChunkActor : public Engine::APartitionActor
    {
    public:
        BasicTypes::TArray<Engine::UNavigationDataChunk*>            NavDataChunks;                                           //  ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
        CoreUObject::FBox                                            DataChunkActorBounds;                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.NavigationDataChunkActor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
