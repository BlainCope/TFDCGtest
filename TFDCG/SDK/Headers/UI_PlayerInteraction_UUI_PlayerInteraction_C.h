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
#include "Engine_FPointerToUberGraphFrame.h"
#include "M1_UM1UIPlayerInteraction.h"
#include "M1Data_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UBorder; };
namespace CG::UI_Player_Overhaul { class UUI_Player_Overhaul_C; };
namespace CG::UI_Social_Platform_Icon { class UUI_Social_Platform_Icon_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_PlayerInteraction
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Game/Widgets/UI_PlayerInteraction.UI_PlayerInteraction_C
     * Size -> 0x0020 (FullSize[0x0788] - InheritedSize[0x0768])
     */
    class UUI_PlayerInteraction_C : public M1::UM1UIPlayerInteraction
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UBorder*                                                Border_1;                                                //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Player_Overhaul::UUI_Player_Overhaul_C*                   UI_Player_Overhaul;                                      //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Social_Platform_Icon::UUI_Social_Platform_Icon_C*         UI_Social_Platform_Icon;                                 //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        void BP_ChangedPartyState(bool bPartyMember);
        void PreConstruct(bool IsDesignTime);
        void BP_UpdateAwayFromGameplay(bool bAway);
        void Construct();
        void BP_SetPlatformIcon(M1Data::EM1LoginPlatformTypes InLocalPlatformType, M1Data::EM1LoginPlatformTypes InPlayerPlatformType);
        void ExecuteUbergraph_UI_PlayerInteraction(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Game/Widgets/UI_PlayerInteraction.UI_PlayerInteraction_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
