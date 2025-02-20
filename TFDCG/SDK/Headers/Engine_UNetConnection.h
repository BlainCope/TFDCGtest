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
#include "Engine_FUniqueNetIdRepl.h"
#include "Engine_UPlayer.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UChildConnection; };
namespace CG::Engine { class UNetDriver; };
namespace CG::CoreUObject { class UPackageMap; };
namespace CG::Engine { class UChannel; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.NetConnection
     * Size -> 0x1D70 (FullSize[0x1DB8] - InheritedSize[0x0048])
     */
    class UNetConnection : public Engine::UPlayer
    {
    public:
        BasicTypes::TArray<Engine::UChildConnection*>                Children;                                                //  ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
        Engine::UNetDriver*                                          Driver;                                                  //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::UPackageMap*                                    PackageMapClass;                                         //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::UPackageMap*                                    PackageMap;                                              //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UChannel*>                        OpenChannels;                                            //  ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::AActor*>                          SentTemporaries;                                         //  ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        Engine::AActor*                                              ViewTarget;                                              //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::AActor*                                              OwningActor;                                             //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      MaxPacket;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         InternalAck : 1;                                         //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0xBB];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FUniqueNetIdRepl                                     PlayerId;                                                //  HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x48];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        double                                                       LastReceiveTime;                                         //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x11E0];                                //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      DefaultMaxChannelSize;                                   //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x2E4];                                 //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::UChannel*>                        ChannelsToTick;                                          //  ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0004[0x700];                                 //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.NetConnection");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
