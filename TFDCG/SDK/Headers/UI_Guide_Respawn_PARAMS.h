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
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::AkAudio { class UAkAudioEvent; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Guide_Respawn
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Guide_Respawn_C_SequenceEvent__ENTRYPOINTUI_Guide_Respawn_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Guide_Respawn_C_UILoop_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Guide_Respawn_C_BP_BeginOverlap_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Guide_Respawn_C_BP_EndOverlap_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Guide_Respawn_C_OnAnimationFinished_Params
    {
    public:
        UMG::UWidgetAnimation*                                       Animation;                                               //  0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Guide_Respawn_C_BP_widget_playAkEvent_Params
    {
    public:
        AkAudio::UAkAudioEvent*                                      AkEvent;                                                 //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UUI_Guide_Respawn_C_ExecuteUbergraph_UI_Guide_Respawn_Params
    {
    public:
        int32_t                                                      EntryPoint;                                              //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
