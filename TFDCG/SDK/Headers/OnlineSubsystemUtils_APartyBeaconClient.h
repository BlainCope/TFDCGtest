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
#include "BasicTypes_FString.h"
#include "OnlineSubsystemUtils_FPartyReservation.h"
#include "OnlineSubsystemUtils_ENUMS.h"
#include "OnlineSubsystemUtils_AOnlineBeaconClient.h"
#include "Engine_FUniqueNetIdRepl.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OnlineSubsystemUtils
{
    /**
     * Class /Script/OnlineSubsystemUtils.PartyBeaconClient
     * Size -> 0x00C8 (FullSize[0x03A0] - InheritedSize[0x02D8])
     */
    class APartyBeaconClient : public OnlineSubsystemUtils::AOnlineBeaconClient
    {
    public:
        uint8_t                                                      UnknownData_0000[0x30];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          DestSessionId;                                           //  ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        OnlineSubsystemUtils::FPartyReservation                      PendingReservation;                                      //  Protected, NativeAccessSpecifierProtected
        OnlineSubsystemUtils::EClientRequestType                     RequestType;                                             //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bPendingReservationSent;                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bCancelReservation;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x2D];                                  //  MISSED OFFSET (PADDING)

    public:
        void ServerUpdateReservationRequest(const BasicTypes::FString& SessionId, const OnlineSubsystemUtils::FPartyReservation& ReservationUpdate);
        void ServerReservationRequest(const BasicTypes::FString& SessionId, const OnlineSubsystemUtils::FPartyReservation& Reservation);
        void ServerRemoveMemberFromReservationRequest(const BasicTypes::FString& SessionId, const OnlineSubsystemUtils::FPartyReservation& ReservationUpdate);
        void ServerCancelReservationRequest(const Engine::FUniqueNetIdRepl& PartyLeader);
        void ServerAddOrUpdateReservationRequest(const BasicTypes::FString& SessionId, const OnlineSubsystemUtils::FPartyReservation& Reservation);
        void ClientSendReservationUpdates(int32_t NumRemainingReservations);
        void ClientSendReservationFull();
        void ClientReservationResponse(OnlineSubsystemUtils::EPartyReservationResult ReservationResponse);
        void ClientCancelReservationResponse(OnlineSubsystemUtils::EPartyReservationResult ReservationResponse);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OnlineSubsystemUtils.PartyBeaconClient");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
