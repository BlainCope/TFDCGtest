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
#include "M1_UM1UIPopup.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIDataAccountInfo; };
namespace CG::M1 { class UM1UIButton; };
namespace CG::M1 { class UM1UIWidget; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIPopupAccountInfo
     * Size -> 0x0010 (FullSize[0x07B0] - InheritedSize[0x07A0])
     */
    class UM1UIPopupAccountInfo : public M1::UM1UIPopup
    {
    public:
        M1::UM1UIDataAccountInfo*                                    AccountUIData;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        void SetButton(M1::UM1UIButton* InButtonWidget, M1::EM1AccountInfoPopupButtonType InButtonType);
        void OnButtonClicked_Report(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_PlatformUserProfile(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_PartyMasterDevolve(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_PartyLeave(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_PartyInviteReject(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_PartyInviteAccept(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_PartyInvite(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_PartyExile(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_FriendRequest(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_FriendDelete(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_FriendCancel(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_FriendAccept(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_DirectMessage(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_CSP(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_Bookmark(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_BlockRequest(M1::UM1UIWidget* InWidget);
        void OnButtonClicked_BlockCancel(M1::UM1UIWidget* InWidget);
        void BP_SetAccountUIData();
        M1::UM1UIButton* BP_GetUIButton(M1::EM1AccountInfoPopupButtonType InButtonType);
        void BP_DisableAllButtons();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIPopupAccountInfo");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
