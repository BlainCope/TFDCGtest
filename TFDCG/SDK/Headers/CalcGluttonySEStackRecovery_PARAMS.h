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
#include "M1_FM1AbilityOpCalcParam.h"
#include "M1_FM1CalcDamageInfo.h"
#include "M1_ENUMS.h"
#include "M1Data_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CalcGluttonySEStackRecovery
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UCalcGluttonySEStackRecovery_C_ApplyGluttonySEStackRecovery_Params
    {
    public:
        M1::FM1AbilityOpCalcParam                                    Param;                                                   //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
        M1::FM1CalcDamageInfo                                        DamageInfo;                                              //  0x0008(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
        double                                                       RecoveryAmount;                                          //  0x0140(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        M1::EM1RecoveryType                                          RecoveryType;                                            //  0x0148(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        M1Data::EM1StatType                                          RecoveryStat;                                            //  0x0149(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x6];                                   //  0x014A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UCalcGluttonySEStackRecovery_C_DoCalculation_Params
    {
    public:
        M1::FM1AbilityOpCalcParam                                    Param;                                                   //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
        M1::FM1CalcDamageInfo                                        DamageInfo;                                              //  0x0008(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
