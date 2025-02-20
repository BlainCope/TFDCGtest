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
#include "Headers/animlayer_Player_Locomotion_PARAMS.h"
#include "Headers/animlayer_Player_Locomotion_Ianimlayer_Player_Locomotion_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::animlayer_Player_Locomotion
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Characters/PC/AnimBP/AnimLayers/animlayer_Player_Locomotion.animlayer_Player_Locomotion_C.LocomotionLayer
     *         Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         Engine::FPoseLink                                  LocomotionLayer                                            (Parm, OutParm, NoDestructor)
     *         void                                               ReturnValue
     */
    void Ianimlayer_Player_Locomotion_C::LocomotionLayer(Engine::FPoseLink* LocomotionLayer)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Characters/PC/AnimBP/AnimLayers/animlayer_Player_Locomotion.animlayer_Player_Locomotion_C.LocomotionLayer");
        
        Ianimlayer_Player_Locomotion_C_LocomotionLayer_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        if (LocomotionLayer != nullptr)
            *LocomotionLayer = params.LocomotionLayer;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
