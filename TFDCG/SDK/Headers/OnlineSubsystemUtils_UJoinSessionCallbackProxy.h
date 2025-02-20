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
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "Engine_UOnlineBlueprintCallProxyBase.h"
#include "OnlineSubsystemUtils_FBlueprintSessionResult.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class APlayerController; };
namespace CG::OnlineSubsystemUtils { class UJoinSessionCallbackProxy; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OnlineSubsystemUtils
{
    /**
     * Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
     * Size -> 0x0168 (FullSize[0x0198] - InheritedSize[0x0030])
     */
    class UJoinSessionCallbackProxy : public Engine::UOnlineBlueprintCallProxyBase
    {
    public:
        BasicTypes::UMulticastInlineDelegate                         OnSuccess;                                               //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnFailure;                                               //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        uint8_t                                                      UnknownData_0002[0x148];                                 //  MISSED OFFSET (PADDING)

    public:
        OnlineSubsystemUtils::UJoinSessionCallbackProxy* STATIC_JoinSession(CoreUObject::UObject* WorldContextObject, Engine::APlayerController* PlayerController, const OnlineSubsystemUtils::FBlueprintSessionResult& SearchResult);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
