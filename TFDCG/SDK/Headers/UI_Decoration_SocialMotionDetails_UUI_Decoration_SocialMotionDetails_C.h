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
#include "M1_UM1UISocialMotionDetails.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::M1 { class UM1RichTextBlock; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::UI_Deco_Back_002 { class UUI_Deco_Back_002_C; };
namespace CG::UI_Deco_TitleLine_04 { class UUI_Deco_TitleLine_04_C; };
namespace CG::M1 { class UM1UIData; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Decoration_SocialMotionDetails
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Decoration/UI_Decoration_SocialMotionDetails.UI_Decoration_SocialMotionDetails_C
     * Size -> 0x0040 (FullSize[0x0758] - InheritedSize[0x0718])
     */
    class UUI_Decoration_SocialMotionDetails_C : public M1::UM1UISocialMotionDetails
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UWidgetAnimation*                                       UIAnim_Open;                                             //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        M1::UM1RichTextBlock*                                        TB_Desc;                                                 //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            TB_ItemType;                                             //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            Text_ItemName;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        M1::UM1TextBlock*                                            Text_Tier;                                               //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Deco_Back_002::UUI_Deco_Back_002_C*                       UI_Deco_Back_002;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Deco_TitleLine_04::UUI_Deco_TitleLine_04_C*               UI_Deco_TitleLine_4;                                     //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        void Construct();
        void SetDataImpl(M1::UM1UIData* InData);
        void OnEventWidgetOpen(M1::EM1WidgetAnimDirection InDirection);
        void ExecuteUbergraph_UI_Decoration_SocialMotionDetails(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Decoration/UI_Decoration_SocialMotionDetails.UI_Decoration_SocialMotionDetails_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
