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
#include "BasicTypes_FString.h"
#include "BasicTypes_TArray.h"
#include "Engine_FAnimNotifyEventReference.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1Character; };
namespace CG::M1 { class AM1Player; };
namespace CG::Engine { class USkeletalMeshComponent; };
namespace CG::Engine { class UAnimSequenceBase; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimNotify_DynamicDialogue
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UAnimNotify_DynamicDialogue_C_GetM1PlayerStringID_Params
    {
    public:
        M1::AM1Character*                                            M1Player;                                                //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
        BasicTypes::FString                                          StringId;                                                //  0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAnimNotify_DynamicDialogue_C_GenerateArgPathes_Params
    {
    public:
        M1::AM1Player*                                               InputPin;                                                //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
        BasicTypes::TArray<BasicTypes::FString>                      Array;                                                   //  0x0008(0x0010)  (ConstParm, Parm, OutParm)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAnimNotify_DynamicDialogue_C_GetNotifyName_Params
    {
    public:
        BasicTypes::FString                                          ReturnValue;                                             //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAnimNotify_DynamicDialogue_C_Received_Notify_Params
    {
    public:
        Engine::USkeletalMeshComponent*                              MeshComp;                                                //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
        Engine::UAnimSequenceBase*                                   Animation;                                               //  0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
        Engine::FAnimNotifyEventReference                            EventReference;                                          //  0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
        bool                                                         ReturnValue;                                             //  0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
