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
#include "M1_UM1UIWidget.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Result_ExpValueNotice
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Result_ExpValueNotice.UI_Mission_Result_ExpValueNotice_C
     * Size -> 0x0028 (FullSize[0x0730] - InheritedSize[0x0708])
     */
    class UUI_Mission_Result_ExpValueNotice_C : public M1::UM1UIWidget
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UWidgetAnimation*                                       UIAnim_Open_MasteryRank;                                 //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetAnimation*                                       UIAnim_Stack;                                            //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetAnimation*                                       UIAnim_Open;                                             //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
        M1::UM1TextBlock*                                            Text_Exp;                                                //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        void SetExpText(M1::EM1UIMissionResultExpType InType, int64_t InExp, M1::EM1UIMissionResultExpOwnerType InOwnerType);
        void SetTextColor(int32_t Index);
        void Construct();
        void ExecuteUbergraph_UI_Mission_Result_ExpValueNotice(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Mission/Widgets/UI_Mission_Result_ExpValueNotice.UI_Mission_Result_ExpValueNotice_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
