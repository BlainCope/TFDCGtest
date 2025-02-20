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
#include "Headers/DebonePartsWidgetComp_PARAMS.h"
#include "Headers/DebonePartsWidgetComp_UDebonePartsWidgetComp_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::DebonePartsWidgetComp
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/Blueprints/Gameplay/PC/Common/Debone/DebonePartsWidgetComp.DebonePartsWidgetComp_C.DestroyFromExternal
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UDebonePartsWidgetComp_C::DestroyFromExternal()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/Blueprints/Gameplay/PC/Common/Debone/DebonePartsWidgetComp.DebonePartsWidgetComp_C.DestroyFromExternal");
        
        UDebonePartsWidgetComp_C_DestroyFromExternal_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
