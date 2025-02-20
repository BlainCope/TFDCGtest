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
#include "M1_UM1CheatExtensionBase.h"
#include "BasicTypes_FString.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1CheatExtensionPlatform
     * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
     */
    class UM1CheatExtensionPlatform : public M1::UM1CheatExtensionBase
    {
    public:
        void WeaponTriggerEffect(bool bLeftOrRightTrigger, int32_t StartPosition, int32_t EndPosition, int32_t Strength);
        void ToggleForcePlatformOnlineId();
        void TestOSS();
        void ShowPlatformTypeAndId();
        void ShowMessagePopupTest(int32_t Type);
        void ShowBlockedUserList();
        void SetSessionSettings(const BasicTypes::FString& Key, const BasicTypes::FString& Value);
        void SetQueryBlockedUserUpdateRate(float InRate);
        void ResetAchievements();
        void QueryBlockedUser();
        void PrintAllAchievements();
        void IsUserMuted(uint64_t NetId);
        void IsUserBlocked(uint64_t NetId);
        void InvitePlatformUser(uint64_t NetId);
        void GetUserNickname(uint64_t NetId);
        void FindOtherSession(uint64_t NetId, const BasicTypes::FString& SessionId, bool bTryJoin);
        void DumpCurrentSession();
        void DestroyTestSession();
        void CreateTestSession();
        void CheckPlatformNickname();
        void CheckChatRestrictionStatus(uint64_t NetId);
        void CheckAllUserPrivileges();
        void ChangeSessionLeader(uint64_t NetId, const BasicTypes::FString& Platform);
        void ChangeHostOfSession();
        void AddRecentPlayer(uint64_t NetId);
        void AchieveOne(const BasicTypes::FString& ID, double Progress);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1CheatExtensionPlatform");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
