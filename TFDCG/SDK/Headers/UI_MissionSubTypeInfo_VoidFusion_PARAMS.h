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
#include "BasicTypes_TArray.h"
#include "BasicTypes_FString.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_MissionSubTypeInfo_VoidFusion
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UUI_MissionSubTypeInfo_VoidFusion_C_BP_SetVoidFusionActivationInfo_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FString>                      InNamedMonsterStringIds;                                 //  0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_MissionSubTypeInfo_VoidFusion_C_ExecuteUbergraph_UI_MissionSubTypeInfo_VoidFusion_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
