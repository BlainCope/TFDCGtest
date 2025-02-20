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
#include "M1_FM1AbilityEvent.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Ability_MissionTarget_Immune
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UAbility_MissionTarget_Immune_C_OnAbilityEvent_7A1CF11F4F2643CD0401179AA7CFA1A3_Params
    {
    public:
        M1::FM1AbilityEvent                                          Event;                                                   //  0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAbility_MissionTarget_Immune_C_BP_OnActivated_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAbility_MissionTarget_Immune_C_BP_OnDeactivated_Params
    {
    public:
        bool                                                         bCancelled;                                              //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAbility_MissionTarget_Immune_C_ExecuteUbergraph_Ability_MissionTarget_Immune_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
