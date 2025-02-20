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
#include "CoreUObject_UObject.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FString.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class APlayerController; };
namespace CG::OnlineSubsystemUtils { class UInAppPurchaseQueryCallbackProxy2; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OnlineSubsystemUtils
{
    /**
     * Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
     * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
     */
    class UInAppPurchaseQueryCallbackProxy2 : public CoreUObject::UObject
    {
    public:
        BasicTypes::UMulticastInlineDelegate                         OnSuccess;                                               //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnFailure;                                               //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        uint8_t                                                      UnknownData_0002[0x20];                                  //  MISSED OFFSET (PADDING)

    public:
        OnlineSubsystemUtils::UInAppPurchaseQueryCallbackProxy2* STATIC_CreateProxyObjectForInAppPurchaseQuery(Engine::APlayerController* PlayerController, BasicTypes::TArray<BasicTypes::FString> ProductIdentifiers);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
