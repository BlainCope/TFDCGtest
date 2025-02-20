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
#include "LiveLink_FLiveLinkRoleProjectSetting.h"
#include "BasicTypes_TSoftObjectPtr.h"
#include "LiveLink_ULiveLinkPreset.h"
#include "LiveLinkInterface_ENUMS.h"
#include "CoreUObject_FLinearColor.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::LiveLinkInterface { class ULiveLinkFrameInterpolationProcessor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LiveLink
{
    /**
     * Class /Script/LiveLink.LiveLinkSettings
     * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
     */
    class ULiveLinkSettings : public CoreUObject::UObject
    {
    public:
        BasicTypes::TArray<LiveLink::FLiveLinkRoleProjectSetting>    DefaultRoleSettings;                                     //  Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
        LiveLinkInterface::ULiveLinkFrameInterpolationProcessor*     FrameInterpolationProcessor;                             //  ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TSoftObjectPtr<LiveLink::ULiveLinkPreset>        DefaultLiveLinkPreset;                                   //  ELEMENT_SIZE_MISMATCH Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        float                                                        ClockOffsetCorrectionStep;                               //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        LiveLinkInterface::ELiveLinkSourceMode                       DefaultMessageBusSourceMode;                             //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        double                                                       MessageBusPingRequestFrequency;                          //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        double                                                       MessageBusHeartbeatFrequency;                            //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        double                                                       MessageBusHeartbeatTimeout;                              //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        double                                                       MessageBusTimeBeforeRemovingInactiveSource;              //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        double                                                       TimeWithoutFrameToBeConsiderAsInvalid;                   //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FLinearColor                                    ValidColor;                                              //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FLinearColor                                    InvalidColor;                                            //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      TextSizeSource;                                          //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      TextSizeSubject;                                         //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x6];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/LiveLink.LiveLinkSettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
