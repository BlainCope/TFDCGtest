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
#include "M1_UM1UIWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidget; };
namespace CG::M1 { class UM1ProgressBar; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::M1 { class UM1OverflowTextBlock; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIInDun_ScoreBar
     * Size -> 0x0048 (FullSize[0x0750] - InheritedSize[0x0708])
     */
    class UM1UIInDun_ScoreBar : public M1::UM1UIWidget
    {
    public:
        UMG::UWidget*                                                Panel_Horizontal;                                        //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1ProgressBar*                                          Progress_Score_TaskSuccess;                              //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1ProgressBar*                                          Progress_Score_MonsterKill;                              //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1ProgressBar*                                          Progress_Score_Bonus;                                    //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           P_MyScorePosition;                                       //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           P_FirstScorePosition;                                    //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1OverflowTextBlock*                                    TB_FirstScore;                                           //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1OverflowTextBlock*                                    TB_MaxScore;                                             //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        ProgressBarPadding;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)

    public:
        void BP_PlayMyScorePositionAnim();
        void BP_OnPlayOpenAnimFinished();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIInDun_ScoreBar");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
