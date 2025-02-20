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
#include "M1_UM1UIMissionGuide.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UI_FieldContents_Fail { class UUI_FieldContents_Fail_C; };
namespace CG::UI_FieldContents_Start { class UUI_FieldContents_Start_C; };
namespace CG::UI_FieldContents_Success { class UUI_FieldContents_Success_C; };
namespace CG::UI_Mission_Fail { class UUI_Mission_Fail_C; };
namespace CG::UI_Mission_Start { class UUI_Mission_Start_C; };
namespace CG::UI_Mission_succes { class UUI_Mission_Succes_C; };
namespace CG::UI_Mission_VoidBattle_Fail { class UUI_Mission_VoidBattle_Fail_C; };
namespace CG::UI_Mission_VoidBattle_Succes { class UUI_Mission_VoidBattle_Succes_C; };
namespace CG::UMG { class UWidgetSwitcher; };
namespace CG::M1 { class UM1UIChildMissionGuide; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Guide
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Mission/UI_Mission_Guide.UI_Mission_Guide_C
     * Size -> 0x0050 (FullSize[0x0770] - InheritedSize[0x0720])
     */
    class UUI_Mission_Guide_C : public M1::UM1UIMissionGuide
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UI_FieldContents_Fail::UUI_FieldContents_Fail_C*             UI_FieldContents_Fail;                                   //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_FieldContents_Start::UUI_FieldContents_Start_C*           UI_FieldContents_Start;                                  //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_FieldContents_Success::UUI_FieldContents_Success_C*       UI_FieldContents_Success;                                //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Fail::UUI_Mission_Fail_C*                         UI_Mission_Fail;                                         //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_Start::UUI_Mission_Start_C*                       UI_Mission_Start;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_succes::UUI_Mission_Succes_C*                     UI_Mission_Succes;                                       //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_VoidBattle_Fail::UUI_Mission_VoidBattle_Fail_C*   UI_Mission_VoidBattle_Fail;                              //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UI_Mission_VoidBattle_Succes::UUI_Mission_VoidBattle_Succes_C* UI_Mission_VoidBattle_Succes;                            //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UWidgetSwitcher*                                        WS_MissionStatus;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        BasicTypes::TArray<M1::UM1UIChildMissionGuide*> GetChildMissionWidgets();
        void BP_PlayMissionStartAnim(const BasicTypes::FName& InMissionName, const BasicTypes::FName& InMissionTypeName);
        void BP_PlayMissionSuccessAnim();
        void BP_PlayMissionFailAnim();
        void BP_PlayFieldContentsStartAnim(M1::EM1MissionSubType InSubType);
        void BP_PlayVoidBattleSuccessAnim();
        void BP_PlayVoidBattleFailAnim();
        void BP_PlayFieldContentsSuccessAnim(M1::EM1MissionSubType InSubType);
        void BP_PlayFieldContentsFailAnim(M1::EM1MissionSubType InSubType);
        void ExecuteUbergraph_UI_Mission_Guide(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Mission/UI_Mission_Guide.UI_Mission_Guide_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
