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
#include "BasicTypes_TArray.h"
#include "M1_UM1UIWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1OverflowTextBlock; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::M1 { class UM1UIItemIcon; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIInDun_FixedMODScoreItem
     * Size -> 0x0040 (FullSize[0x0748] - InheritedSize[0x0708])
     */
    class UM1UIInDun_FixedMODScoreItem : public M1::UM1UIWidget
    {
    public:
        BasicTypes::TArray<M1::UM1OverflowTextBlock*>                TB_ScoreList;                                            //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::UM1OverflowTextBlock*>                TB_ProbabilityList;                                      //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        M1::UM1TextBlock*                                            TB_ItemNum;                                              //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            TB_ItemName;                                             //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIItemIcon*                                           UI_ItemIcon;                                             //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIWidget*                                             WidgetToFocus;                                           //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        void OnTooltipToggleVoidVaultKey(M1::UM1UIWidget* InWidget);
        void OnTooltipToggleLinkedContents(M1::UM1UIWidget* InWidget);
        BasicTypes::TArray<M1::UM1OverflowTextBlock*> BP_GetScoreTBs();
        BasicTypes::TArray<M1::UM1OverflowTextBlock*> BP_GetProbabilityTBs();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIInDun_FixedMODScoreItem");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
