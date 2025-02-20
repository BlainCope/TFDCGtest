/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    TFDCG                       |
 * | Version: 1                           |
 * | Date:    08/22/2024                  |
 * ----------------------------------------
 */

#include "pch.h"
#include <cstdint>
#include <vector>
#include <string>
#include <locale>
#include <unordered_set>
#include "Headers/Global_DEFINES.h"
#include "Headers/BasicTypes.h"
#include "Headers/CoreUObject_UFunction.h"
#include "Headers/CalcSkillDamageMonster_New_PARAMS.h"
#include "Headers/CalcSkillDamageMonster_New_UCalcSkillDamageMonster_New_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CalcSkillDamageMonster_New
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/Common/Calculation/Damage/CalcSkillDamageMonster_New.CalcSkillDamageMonster_New_C.DoCalculation
     *         Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
     * Parameters:
     *         M1::FM1AbilityOpCalcParam                          Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
     *         M1::FM1CalcDamageInfo                              DamageInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
     *         void                                               ReturnValue
     */
    void UCalcSkillDamageMonster_New_C::DoCalculation(M1::FM1AbilityOpCalcParam* Param, M1::FM1CalcDamageInfo* DamageInfo)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/Common/Calculation/Damage/CalcSkillDamageMonster_New.CalcSkillDamageMonster_New_C.DoCalculation");
        
        UCalcSkillDamageMonster_New_C_DoCalculation_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (Param != nullptr)
            *Param = params.Param;
        if (DamageInfo != nullptr)
            *DamageInfo = params.DamageInfo;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
