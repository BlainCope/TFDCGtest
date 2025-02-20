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
namespace CG::M1 { class UM1TextBlock; };
namespace CG::M1 { class UM1UIMissionTaskGoals; };
namespace CG::M1 { class AM1MissionTaskActorDynamicGoalActor; };
namespace CG::M1 { class AM1MissionTaskActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIMissionTask
     * Size -> 0x0028 (FullSize[0x0730] - InheritedSize[0x0708])
     */
    class UM1UIMissionTask : public M1::UM1UIWidget
    {
    public:
        M1::UM1TextBlock*                                            TB_TaskName;                                             //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            TB_SubTaskName;                                          //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIMissionTaskGoals*                                   UI_TaskGoals;                                            //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<M1::AM1MissionTaskActorDynamicGoalActor*> DynamicGoalActors;                                       //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate

    public:
        void OnTaskSucceeded(M1::AM1MissionTaskActor* InTaskActor);
        void OnTaskFailed(M1::AM1MissionTaskActor* InTaskActor);
        void OnTaskActivated(M1::AM1MissionTaskActor* InTaskActor);
        void OnDynamicGoalRemoved(M1::AM1MissionTaskActorDynamicGoalActor* InDynamicGoal);
        void OnDynamicGoalAdded(M1::AM1MissionTaskActorDynamicGoalActor* InDynamicGoal);
        void BP_PlayUpdateTaskInfoAnim();
        void BP_PlaySucceedTaskAnim();
        void BP_PlayNewTaskAnim();
        void BP_PlayFailedTaskAnim();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIMissionTask");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
