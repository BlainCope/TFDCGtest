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
#include "BasicTypes_TMap.h"
#include "M1Data_ENUMS.h"
#include "BasicTypes_FName.h"
#include "M1_UM1UIWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UPanelWidget; };
namespace CG::M1 { class UM1UIRuneBoardStatItem_Normal; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIRuneBoardStatInfo_Normal
     * Size -> 0x00B0 (FullSize[0x07B8] - InheritedSize[0x0708])
     */
    class UM1UIRuneBoardStatInfo_Normal : public M1::UM1UIWidget
    {
    public:
        UMG::UPanelWidget*                                           Panel_NormalStats;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TMap<M1Data::EM1StatType, M1::UM1UIRuneBoardStatItem_Normal*> NormalStatWidgets;                                       //  ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TMap<BasicTypes::FName, M1::UM1UIRuneBoardStatItem_Normal*> IndividualStatWidgets;                                   //  ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        M1::UM1UIWidget*                                             StatItemWidgetClass;                                     //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIRuneBoardStatInfo_Normal");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
