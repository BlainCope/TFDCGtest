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
#include "M1Data_ENUMS.h"
#include "M1_ENUMS.h"
#include "BasicTypes_FText.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UTexture2D; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Mission_Result_Slot_Item
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_SequenceEvent__ENTRYPOINTUI_Mission_Result_Slot_Item_1_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_SequenceEvent__ENTRYPOINTUI_Mission_Result_Slot_Item_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_BP_SetCharacterIcon_Params
    {
    public:
        Engine::UTexture2D*                                          InIcon;                                                  //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
        M1Data::EM1CharacterGrade                                    InGrade;                                                 //  0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_BP_ResetAllExpProgressValue_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_BP_SetExpProgressValue_Params
    {
    public:
        M1::EM1UIMissionResultExpType                                InType;                                                  //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        float                                                        InProgressValue;                                         //  0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_BP_SetItemIcon_Params
    {
    public:
        Engine::UTexture2D*                                          InIcon;                                                  //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
        M1Data::EM1ItemTierType                                      InTier;                                                  //  0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_BP_ShowExpText_Params
    {
    public:
        M1::EM1UIMissionResultExpType                                InType;                                                  //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0001[0x7];                                   //  0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        int64_t                                                      InExp;                                                   //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_UISetDefault_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_UIMaxLevel_Params
    {
    public:
        bool                                                         MaxLevel;                                                //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0002[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_BP_widget_playAkEvent_Open_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_BP_widget_playAkEvent_Up_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_PreConstruct_Params
    {
    public:
        bool                                                         IsDesignTime;                                            //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_Construct_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_BP_SetIsMaxLevel_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_BP_SetNameText_Params
    {
    public:
        BasicTypes::FText                                            InName;                                                  //  0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_BP_SetLevel_Params
    {
    public:
        int32_t                                                      InLevel;                                                 //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_BP_PlayLevelUpAnim_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Mission_Result_Slot_Item_C_ExecuteUbergraph_UI_Mission_Result_Slot_Item_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
