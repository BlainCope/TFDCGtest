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
#include "BasicTypes_FName.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FString.h"
#include "OnlineSubsystemUtils_FPartyBeaconCrossplayPlatformMapping.h"
#include "OnlineSubsystemUtils_FPartyReservation.h"
#include "CoreUObject_UObject.h"

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
     * Class /Script/OnlineSubsystemUtils.PartyBeaconState
     * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
     */
    class UPartyBeaconState : public CoreUObject::UObject
    {
    public:
        BasicTypes::FName                                            SessionName;                                             //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      NumConsumedReservations;                                 //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      MaxReservations;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      NumTeams;                                                //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      NumPlayersPerTeam;                                       //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::FName                                            TeamAssignmentMethod;                                    //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      ReservedHostTeamNum;                                     //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      ForceTeamNum;                                            //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bRestrictCrossConsole;                                   //  ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FString>                      PlatformCrossplayRestrictions;                           //  ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<OnlineSubsystemUtils::FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;                                     //  ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
        bool                                                         bEnableRemovalRequests;                                  //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<OnlineSubsystemUtils::FPartyReservation>  Reservations;                                            //  ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OnlineSubsystemUtils.PartyBeaconState");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
