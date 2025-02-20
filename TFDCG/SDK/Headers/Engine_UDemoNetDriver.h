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
#include "BasicTypes_FString.h"
#include "Engine_FRollbackNetStartupActorInfo.h"
#include "BasicTypes_TArray.h"
#include "Engine_FMulticastRecordOptions.h"
#include "Engine_UNetDriver.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class APlayerController; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.DemoNetDriver
     * Size -> 0x0CB8 (FullSize[0x1470] - InheritedSize[0x07B8])
     */
    class UDemoNetDriver : public Engine::UNetDriver
    {
    public:
        uint8_t                                                      UnknownData_0000[0x38];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<BasicTypes::FString, Engine::FRollbackNetStartupActorInfo> RollbackNetStartupActors;                                //  Transient, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0xE4];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        CheckpointSaveMaxMSPerFrame;                             //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x18];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FMulticastRecordOptions>          MulticastRecordOptions;                                  //  ZeroConstructor, Config, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::APlayerController*>               SpectatorControllers;                                    //  ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0xB10];                                 //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.DemoNetDriver");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
