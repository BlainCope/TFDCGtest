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
#include "M1_ENUMS.h"
#include "M1_UM1UIWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIToggle; };
namespace CG::M1 { class UM1UIMultiConditionDropDown_Sort; };
namespace CG::M1 { class UM1UIButton; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::M1 { class UM1UIMultiConditionDropDown_Search; };
namespace CG::M1 { class UM1UIMultiConditionDropDown_Filter; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIMultiCondition
     * Size -> 0x0050 (FullSize[0x0758] - InheritedSize[0x0708])
     */
    class UM1UIMultiCondition : public M1::UM1UIWidget
    {
    public:
        M1::UM1UIToggle*                                             BTN_SortDirection;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIMultiConditionDropDown_Sort*                        UI_DropDown_Sort;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIButton*                                             BTN_ResetFilter;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_DropDown_Filter;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIMultiConditionDropDown_Search*                      UI_DropDown_Search;                                      //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIMultiConditionDropDown_Filter*                      BaseFilterClass;                                         //  Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::EM1SaveSortAndFilterScope                                SaveScope;                                               //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x1F];                                  //  MISSED OFFSET (PADDING)

    public:
        void OnClicked_ResetFilter(M1::UM1UIWidget* InWidget);
        void BP_ShowSorter(bool bShow);
        void BP_ShowSearch(bool bShow);
        void BP_ShowFilter(bool bShow);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIMultiCondition");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
