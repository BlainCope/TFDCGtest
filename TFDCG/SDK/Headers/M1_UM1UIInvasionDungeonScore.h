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
namespace CG::UMG { class UWidgetSwitcher; };
namespace CG::M1 { class UM1UITimer; };
namespace CG::UMG { class UProgressBar; };
namespace CG::M1 { class UM1UIInvasionDungeonScoreItem; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIInvasionDungeonScore
     * Size -> 0x0038 (FullSize[0x0740] - InheritedSize[0x0708])
     */
    class UM1UIInvasionDungeonScore : public M1::UM1UIWidget
    {
    public:
        UMG::UWidgetSwitcher*                                        WS_State;                                                //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UITimer*                                              UI_InvasionDungeonTime;                                  //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UProgressBar*                                           PB_Progress;                                             //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<M1::UM1UIInvasionDungeonScoreItem*>       TimeAttackItems;                                         //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        float                                                        RewardableTimeSec;                                       //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0xC];                                   //  MISSED OFFSET (PADDING)

    public:
        BasicTypes::TArray<M1::UM1UIInvasionDungeonScoreItem*> BP_GetTimeAttackItems();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIInvasionDungeonScore");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
