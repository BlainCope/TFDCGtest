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
#include "BasicTypes_FString.h"
#include "BasicTypes_FName.h"
#include "Engine_FRPCAnalyticsThreshold.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.RPCDoSDetectionConfig
     * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
     */
    class URPCDoSDetectionConfig : public CoreUObject::UObject
    {
    public:
        bool                                                         bRPCDoSDetection;                                        //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRPCDoSAnalytics;                                        //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      HitchTimeQuotaMS;                                        //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      HitchSuspendDetectionTimeMS;                             //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FString>                      DetectionSeverity;                                       //  ZeroConstructor, Config, NativeAccessSpecifierPublic
        int32_t                                                      InitialConnectToleranceMS;                               //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FName>                        RPCBlockWhitelist;                                       //  ZeroConstructor, Config, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FName>                        RPCBlockAllowlist;                                       //  ZeroConstructor, Config, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FRPCAnalyticsThreshold>           RPCAnalyticsThresholds;                                  //  ZeroConstructor, Config, NativeAccessSpecifierPublic
        double                                                       RPCAnalyticsOverrideChance;                              //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.RPCDoSDetectionConfig");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
