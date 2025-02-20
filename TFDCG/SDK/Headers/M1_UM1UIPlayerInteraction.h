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
#include "M1_UM1UIActorWidget.h"
#include "M1Data_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIKeyButton; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::UMG { class UWidget; };
namespace CG::M1 { class UM1UICreatorIcon; };
namespace CG::M1 { class UM1UIWidget; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIPlayerInteraction
     * Size -> 0x0030 (FullSize[0x0768] - InheritedSize[0x0738])
     */
    class UM1UIPlayerInteraction : public M1::UM1UIActorWidget
    {
    public:
        M1::UM1UIKeyButton*                                          UI_KeyButton;                                            //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1TextBlock*                                            TB_PlayerName;                                           //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1TextBlock*                                            TB_Title;                                                //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        UMG::UWidget*                                                UI_Block;                                                //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1UICreatorIcon*                                        UI_CreatorIcon;                                          //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bEnableInteractionWithPlayer;                            //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        void OnHoldCompleted_BeginInteraction(M1::UM1UIWidget* InWidget);
        void BP_UpdateAwayFromGameplay(bool bAway);
        void BP_SetPlatformIcon(M1Data::EM1LoginPlatformTypes InLocalPlatformType, M1Data::EM1LoginPlatformTypes InPlayerPlatformType);
        void BP_ChangedPartyState(bool bPartyMember);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIPlayerInteraction");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
