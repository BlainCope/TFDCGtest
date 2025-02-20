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
#include "M1_UM1UIGuideMessage.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::UMG { class UImage; };
namespace CG::UMG { class UOverlay; };
namespace CG::UI_Deco_Back_002 { class UUI_Deco_Back_002_C; };
namespace CG::UI_PopupTitleBG { class UUI_PopupTitleBG_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_GuideMessage
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Common/UI_GuideMessage.UI_GuideMessage_C
     * Size -> 0x0040 (FullSize[0x0758] - InheritedSize[0x0718])
     */
    class UUI_GuideMessage_C : public M1::UM1UIGuideMessage
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UWidgetAnimation*                                       Anim_Complete;                                           //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetAnimation*                                       Anim_Close;                                              //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetAnimation*                                       Anim_Open;                                               //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UImage*                                                 Image_422;                                               //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UOverlay*                                               Title;                                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Deco_Back_002::UUI_Deco_Back_002_C*                       UI_Deco_Back_002;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_PopupTitleBG::UUI_PopupTitleBG_C*                         UI_PopupTitleBG;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        void BP_ShowTitle(bool bShow);
        void OnEventWidgetOpen(M1::EM1WidgetAnimDirection InDirection);
        void OnEventWidgetClose(M1::EM1WidgetAnimDirection InDirection);
        void ExecuteUbergraph_UI_GuideMessage(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_GuideMessage.UI_GuideMessage_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
