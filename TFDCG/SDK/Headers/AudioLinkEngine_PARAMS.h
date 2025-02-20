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
namespace CG::Engine { class USoundBase; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AudioLinkEngine
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class IAudioLinkBlueprintInterface_StopLink_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAudioLinkBlueprintInterface_SetLinkSound_Params
    {
    public:
        Engine::USoundBase*                                          NewSound;                                                //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAudioLinkBlueprintInterface_PlayLink_Params
    {
    public:
        float                                                        StartTime;                                               //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAudioLinkBlueprintInterface_IsLinkPlaying_Params
    {
    public:
        bool                                                         ReturnValue;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
