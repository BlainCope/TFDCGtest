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
#include "M1_FM1AbilityOperationParam.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SE_Bunny_GaugeDeltaBase
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_GetCurrentTickAccumulatedValue_Params
    {
    public:
        double                                                       CurrentTickAccumulatedValue;                             //  0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_ExecutePeriodOperation_Params
    {
    public:
        M1::FM1AbilityOperationParam                                 OpParam;                                                 //  0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_ExecuteTickOperation_Params
    {
    public:
        M1::FM1AbilityOperationParam                                 OpParam;                                                 //  0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_MakePeriodOpParam_Params
    {
    public:
        double                                                       InDouble;                                                //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        M1::FM1AbilityOperationParam                                 M1AbilityOperationParam;                                 //  0x0008(0x00B0)  (Parm, OutParm, ContainsInstancedReference)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_MakeTickOpParam_Params
    {
    public:
        double                                                       OpValue;                                                 //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        M1::FM1AbilityOperationParam                                 OpParam;                                                 //  0x0008(0x00B0)  (Parm, OutParm, ContainsInstancedReference)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_GetTickRate_Params
    {
    public:
        double                                                       TickRate;                                                //  0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_CanApplyOperation_Params
    {
    public:
        bool                                                         bCanApply;                                               //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         bShouldConsumePeriodicOnly;                              //  0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_CanPerformTick_Params
    {
    public:
        bool                                                         bCanApply;                                               //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_BP_OnActivated_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_BP_OnDeactivated_Params
    {
    public:
        bool                                                         bCancelled;                                              //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_OnActiveTick_Params
    {
    public:
        float                                                        DeltaSeconds;                                            //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_Auth_ApplyOnTick_Params
    {
    public:
        double                                                       OnTickValue;                                             //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_Auth_ApplyOnPeriod_Params
    {
    public:
        double                                                       AccumulatedValue;                                        //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_BP_OnPeriod_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class USE_Bunny_GaugeDeltaBase_C_ExecuteUbergraph_SE_Bunny_GaugeDeltaBase_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
