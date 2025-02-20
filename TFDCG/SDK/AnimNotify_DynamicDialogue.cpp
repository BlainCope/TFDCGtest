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
#include "Headers/AnimNotify_DynamicDialogue_PARAMS.h"
#include "Headers/AnimNotify_DynamicDialogue_UAnimNotify_DynamicDialogue_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimNotify_DynamicDialogue
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/WwiseAudio/AKAudioComponent/AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.Get M1Player String ID
     *         Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
     * Parameters:
     *         M1::AM1Character*                                  M1Player                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::FString                                StringId                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UAnimNotify_DynamicDialogue_C::GetM1PlayerStringID(M1::AM1Character* M1Player, BasicTypes::FString* StringId)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/WwiseAudio/AKAudioComponent/AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.Get M1Player String ID");
        
        UAnimNotify_DynamicDialogue_C_GetM1PlayerStringID_Params params {};
        params.M1Player = M1Player;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (StringId != nullptr)
            *StringId = params.StringId;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/WwiseAudio/AKAudioComponent/AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.GenerateArgPathes
     *         Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
     * Parameters:
     *         M1::AM1Player*                                     InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         BasicTypes::TArray<BasicTypes::FString>            Array                                                      (ConstParm, Parm, OutParm)
     *         void                                               ReturnValue
     */
    void UAnimNotify_DynamicDialogue_C::GenerateArgPathes(M1::AM1Player* InputPin, BasicTypes::TArray<BasicTypes::FString> Array)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/WwiseAudio/AKAudioComponent/AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.GenerateArgPathes");
        
        UAnimNotify_DynamicDialogue_C_GenerateArgPathes_Params params {};
        params.InputPin = InputPin;
        params.Array = Array;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/WwiseAudio/AKAudioComponent/AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.GetNotifyName
     *         Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
     * Parameters:
     *         BasicTypes::FString                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
     */
    BasicTypes::FString UAnimNotify_DynamicDialogue_C::GetNotifyName()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/WwiseAudio/AKAudioComponent/AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.GetNotifyName");
        
        UAnimNotify_DynamicDialogue_C_GetNotifyName_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/WwiseAudio/AKAudioComponent/AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.Received_Notify
     *         Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
     * Parameters:
     *         Engine::USkeletalMeshComponent*                    MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
     *         Engine::UAnimSequenceBase*                         Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         Engine::FAnimNotifyEventReference                  EventReference                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
     *         bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     */
    bool UAnimNotify_DynamicDialogue_C::Received_Notify(Engine::USkeletalMeshComponent* MeshComp, Engine::UAnimSequenceBase* Animation, const Engine::FAnimNotifyEventReference& EventReference)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/WwiseAudio/AKAudioComponent/AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C.Received_Notify");
        
        UAnimNotify_DynamicDialogue_C_Received_Notify_Params params {};
        params.MeshComp = MeshComp;
        params.Animation = Animation;
        params.EventReference = EventReference;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
