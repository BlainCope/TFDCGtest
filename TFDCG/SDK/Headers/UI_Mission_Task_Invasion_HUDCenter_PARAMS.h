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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIData; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Task_Invasion_HUDCenter
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Invasion_HUDCenter_C_SetSubType_Params
    {
    public:
        uint8_t                                                      InSubType;                                               //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Invasion_HUDCenter_C_BP_ShowWidget_Params
    {
    public:
        bool                                                         bInShow;                                                 //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Invasion_HUDCenter_C_OnAnimFinished_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Invasion_HUDCenter_C_Construct_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Invasion_HUDCenter_C_BP_UpdateCollectionReturnState_Params
    {
    public:
        bool                                                         bInFullyCollected;                                       //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Invasion_HUDCenter_C_SetDataImpl_Params
    {
    public:
        M1::UM1UIData*                                               InData;                                                  //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Task_Invasion_HUDCenter_C_ExecuteUbergraph_UI_Mission_Task_Invasion_HUDCenter_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
