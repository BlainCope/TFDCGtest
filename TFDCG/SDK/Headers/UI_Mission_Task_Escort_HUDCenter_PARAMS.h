#pragma once
#pragma warning(disable: 4267)

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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UI_Timer_MissionOnly { class UUI_Timer_MissionOnly_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Task_Escort_HUDCenter
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Escort_HUDCenter_C_SequenceEvent__ENTRYPOINTUI_Mission_Task_Escort_HUDCenter_Params
    {
    public:
        UI_Timer_MissionOnly::UUI_Timer_MissionOnly_C*               Default_Timer;                                           //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Escort_HUDCenter_C_Default_Timer_Event_Params
    {
    public:
        UI_Timer_MissionOnly::UUI_Timer_MissionOnly_C*               Default_Timer;                                           //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetOpen_Params
    {
    public:
        M1::EM1WidgetAnimDirection                                   InDirection;                                             //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Escort_HUDCenter_C_OnEventWidgetClose_Params
    {
    public:
        M1::EM1WidgetAnimDirection                                   InDirection;                                             //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Escort_HUDCenter_C_BP_OnChangedState_Params
    {
    public:
        bool                                                         bMoving;                                                 //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Escort_HUDCenter_C_BP_OnChangedDefensePhase_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Escort_HUDCenter_C_Construct_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Escort_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Escort_HUDCenter_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
