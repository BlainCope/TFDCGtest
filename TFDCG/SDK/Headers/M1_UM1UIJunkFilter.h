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
#include "M1_UM1UIPopupContent.h"
#include "BasicTypes_TArray.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UITabControl; };
namespace CG::M1 { class UM1WidgetSwitcher; };
namespace CG::M1 { class UM1UIWidget; };
namespace CG::M1 { class UM1UIJunkFilterIndividual; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIJunkFilter
     * Size -> 0x0018 (FullSize[0x0798] - InheritedSize[0x0780])
     */
    class UM1UIJunkFilter : public M1::UM1UIPopupContent
    {
    public:
        M1::UM1UITabControl*                                         UI_TabControl;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1WidgetSwitcher*                                       WS_Filter;                                               //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIWidget*                                             HoveredEntryWidget;                                      //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        void OnTabSelected(int32_t InTabIndex, bool bIsSelectedTabChanged);
        BasicTypes::TArray<M1::UM1UIJunkFilterIndividual*> BP_GetIndividualWidgets();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIJunkFilter");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
