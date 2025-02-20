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
#include "CoreUObject_UObject.h"
#include "Engine_FLatentActionInfo.h"
#include "BasicTypes_TArray.h"
#include "LiveLink_FProviderPollResult.h"
#include "LiveLinkInterface_FLiveLinkSourceHandle.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::LiveLink { class ULiveLinkMessageBusFinder; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LiveLink
{
    /**
     * Class /Script/LiveLink.LiveLinkMessageBusFinder
     * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
     */
    class ULiveLinkMessageBusFinder : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x58];                                  //  MISSED OFFSET (PADDING)

    public:
        void GetAvailableProviders(CoreUObject::UObject* WorldContextObject, const Engine::FLatentActionInfo& LatentInfo, float Duration, BasicTypes::TArray<LiveLink::FProviderPollResult>* AvailableProviders);
        LiveLink::ULiveLinkMessageBusFinder* STATIC_ConstructMessageBusFinder();
        void STATIC_ConnectToProvider(LiveLink::FProviderPollResult* Provider, LiveLinkInterface::FLiveLinkSourceHandle* SourceHandle);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/LiveLink.LiveLinkMessageBusFinder");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
