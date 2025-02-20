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
#include "CoreUObject_FLinearColor.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Deco_Back_001
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Deco_Back_001_C_SetUIStyleDecoBack001_Params
    {
    public:
        bool                                                         BgOFF;                                                   //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         DotOFF;                                                  //  0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         OutlineOFF;                                              //  0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x1];                                   //  0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        CoreUObject::FLinearColor                                    BgColor;                                                 //  0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0001[0x4];                                   //  0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        double                                                       BgOpacity;                                               //  0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                                         White_Gradient;                                          //  0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Deco_Back_001_C_PreConstruct_Params
    {
    public:
        bool                                                         IsDesignTime;                                            //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Deco_Back_001_C_Construct_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Deco_Back_001_C_ExecuteUbergraph_UI_Deco_Back_001_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
