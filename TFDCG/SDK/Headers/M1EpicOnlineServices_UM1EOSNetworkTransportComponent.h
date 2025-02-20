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
#include "Engine_UActorComponent.h"
#include "M1EpicOnlineServices_FM1EOSClientAuthInfo.h"
#include "M1EpicOnlineServices_FM1EOSNetworkTransportMessage.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1EpicOnlineServices
{
    /**
     * Class /Script/M1EpicOnlineServices.M1EOSNetworkTransportComponent
     * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
     */
    class UM1EOSNetworkTransportComponent : public Engine::UActorComponent
    {
    public:
        uint8_t                                                      UnknownData_0000[0x38];                                  //  MISSED OFFSET (PADDING)

    public:
        void ServerReceiveAuthInfo(const M1EpicOnlineServices::FM1EOSClientAuthInfo& ClientAuthInfo);
        void ServerOnReceivedAntiCheatClientMessage(const M1EpicOnlineServices::FM1EOSNetworkTransportMessage& Message);
        void ClientRequestAuthInfo();
        void ClientOnReceivedAntiCheatServerMessage(const M1EpicOnlineServices::FM1EOSNetworkTransportMessage& Message);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1EpicOnlineServices.M1EOSNetworkTransportComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
