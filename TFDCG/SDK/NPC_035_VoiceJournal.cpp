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
#include "Headers/NPC_035_VoiceJournal_PARAMS.h"
#include "Headers/NPC_035_VoiceJournal_ANPC_035_VoiceJournal_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::NPC_035_VoiceJournal
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Character/NPC/NPC_035_VoiceJournal.NPC_035_VoiceJournal_C.SetOffsetOfMeshAndNameTag
     *         Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ANPC_035_VoiceJournal_C::SetOffsetOfMeshAndNameTag()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Character/NPC/NPC_035_VoiceJournal.NPC_035_VoiceJournal_C.SetOffsetOfMeshAndNameTag");
        
        ANPC_035_VoiceJournal_C_SetOffsetOfMeshAndNameTag_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Character/NPC/NPC_035_VoiceJournal.NPC_035_VoiceJournal_C.ReceiveBeginPlay
     *         Flags  -> (Event, Protected, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void ANPC_035_VoiceJournal_C::ReceiveBeginPlay()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Character/NPC/NPC_035_VoiceJournal.NPC_035_VoiceJournal_C.ReceiveBeginPlay");
        
        ANPC_035_VoiceJournal_C_ReceiveBeginPlay_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Character/NPC/NPC_035_VoiceJournal.NPC_035_VoiceJournal_C.ReceiveActorBeginOverlap
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         Engine::AActor*                                    OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ANPC_035_VoiceJournal_C::ReceiveActorBeginOverlap(Engine::AActor* OtherActor)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Character/NPC/NPC_035_VoiceJournal.NPC_035_VoiceJournal_C.ReceiveActorBeginOverlap");
        
        ANPC_035_VoiceJournal_C_ReceiveActorBeginOverlap_Params params {};
        params.OtherActor = OtherActor;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Character/NPC/NPC_035_VoiceJournal.NPC_035_VoiceJournal_C.ReceiveTick
     *         Flags  -> (Event, Public, BlueprintEvent)
     * Parameters:
     *         float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ANPC_035_VoiceJournal_C::ReceiveTick(float DeltaSeconds)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Character/NPC/NPC_035_VoiceJournal.NPC_035_VoiceJournal_C.ReceiveTick");
        
        ANPC_035_VoiceJournal_C_ReceiveTick_Params params {};
        params.DeltaSeconds = DeltaSeconds;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Character/NPC/NPC_035_VoiceJournal.NPC_035_VoiceJournal_C.ExecuteUbergraph_NPC_035_VoiceJournal
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void ANPC_035_VoiceJournal_C::ExecuteUbergraph_NPC_035_VoiceJournal(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Character/NPC/NPC_035_VoiceJournal.NPC_035_VoiceJournal_C.ExecuteUbergraph_NPC_035_VoiceJournal");
        
        ANPC_035_VoiceJournal_C_ExecuteUbergraph_NPC_035_VoiceJournal_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
