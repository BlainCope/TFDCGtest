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
#include "BasicTypes_TArray.h"
#include "M1_UM1UIWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1MissionTaskActorDynamicGoalActor; };
namespace CG::M1 { class UM1UIData; };
namespace CG::M1 { class UM1WidgetSwitcher; };
namespace CG::M1 { class UM1TextBlock; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::M1 { class UM1UIDataMissionTaskInfo; };
namespace CG::M1 { class UM1UIMissionTaskGoal; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIMissionTaskGoals
     * Size -> 0x00F8 (FullSize[0x0800] - InheritedSize[0x0708])
     */
    class UM1UIMissionTaskGoals : public M1::UM1UIWidget
    {
    public:
        BasicTypes::TMap<M1::AM1MissionTaskActorDynamicGoalActor*, M1::UM1UIData*> DynamicGoalActors;                                       //  ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        M1::UM1WidgetSwitcher*                                       WS_ByTaskType;                                           //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1TextBlock*                                            TB_ExterminationInfo;                                    //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        UMG::UPanelWidget*                                           Panel_AssasinationTargetList;                            //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        UMG::UPanelWidget*                                           Panel_AssasinationTargetSpecificDesc;                    //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1TextBlock*                                            TB_AssasinationTargetSpecificDesc;                       //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        UMG::UPanelWidget*                                           Panel_MissionTaskGoal;                                   //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::UM1TextBlock*>                        AssasinationTargetList;                                  //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TMap<M1::UM1UIDataMissionTaskInfo*, M1::UM1UIMissionTaskGoal*> TaskGoalWidgetClasses;                                   //  Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
        M1::UM1UIMissionTaskGoal*                                    CreatedTaskGoalWidget;                                   //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        float                                                        HoldTimeAfterSucceedForAssasinationTargetList;           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0xC];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIMissionTaskGoals");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
