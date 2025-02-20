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
#include "IrisCore_FObjectReplicationBridgePollConfig.h"
#include "IrisCore_FObjectReplicationBridgeFilterConfig.h"
#include "IrisCore_FObjectReplicationBridgePrioritizerConfig.h"
#include "IrisCore_FObjectReplicationBridgeDeltaCompressionConfig.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::IrisCore
{
    /**
     * Class /Script/IrisCore.ObjectReplicationBridgeConfig
     * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
     */
    class UObjectReplicationBridgeConfig : public CoreUObject::UObject
    {
    public:
        BasicTypes::TArray<IrisCore::FObjectReplicationBridgePollConfig> PollConfigs;                                             //  ZeroConstructor, Config, NativeAccessSpecifierPrivate
        BasicTypes::TArray<IrisCore::FObjectReplicationBridgeFilterConfig> FilterConfigs;                                           //  ZeroConstructor, Config, NativeAccessSpecifierPrivate
        BasicTypes::TArray<IrisCore::FObjectReplicationBridgePrioritizerConfig> PrioritizerConfigs;                                      //  ZeroConstructor, Config, NativeAccessSpecifierPrivate
        BasicTypes::TArray<IrisCore::FObjectReplicationBridgeDeltaCompressionConfig> DeltaCompressionConfigs;                                 //  ZeroConstructor, Config, NativeAccessSpecifierPrivate
        BasicTypes::FName                                            DefaultSpatialFilterName;                                //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::FName                                            RequiredNetDriverChannelClassName;                       //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/IrisCore.ObjectReplicationBridgeConfig");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
