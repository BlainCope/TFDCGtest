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
#include "Headers/UI_Deco_Back_Title_PARAMS.h"
#include "Headers/UI_Deco_Back_Title_UUI_Deco_Back_Title_C.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UI_Deco_Back_Title
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_Deco_Back_Title.UI_Deco_Back_Title_C.SetUIString
     *         Flags  -> (Public, BlueprintCallable, BlueprintEvent)
     * Parameters:
     *         BasicTypes::FText                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
     *         void                                               ReturnValue
     */
    void UUI_Deco_Back_Title_C::SetUIString(const BasicTypes::FText& Text)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_Deco_Back_Title.UI_Deco_Back_Title_C.SetUIString");
        
        UUI_Deco_Back_Title_C_SetUIString_Params params {};
        params.Text = Text;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_Deco_Back_Title.UI_Deco_Back_Title_C.PreConstruct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_Deco_Back_Title_C::PreConstruct(bool IsDesignTime)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_Deco_Back_Title.UI_Deco_Back_Title_C.PreConstruct");
        
        UUI_Deco_Back_Title_C_PreConstruct_Params params {};
        params.IsDesignTime = IsDesignTime;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_Deco_Back_Title.UI_Deco_Back_Title_C.Construct
     *         Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UUI_Deco_Back_Title_C::Construct()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_Deco_Back_Title.UI_Deco_Back_Title_C.Construct");
        
        UUI_Deco_Back_Title_C_Construct_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x03A3F420
     *         Name   -> Function /Game/UI/Components/UI_Deco_Back_Title.UI_Deco_Back_Title_C.ExecuteUbergraph_UI_Deco_Back_Title
     *         Flags  -> (Final)
     * Parameters:
     *         int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
     *         void                                               ReturnValue
     */
    void UUI_Deco_Back_Title_C::ExecuteUbergraph_UI_Deco_Back_Title(int32_t EntryPoint)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Game/UI/Components/UI_Deco_Back_Title.UI_Deco_Back_Title_C.ExecuteUbergraph_UI_Deco_Back_Title");
        
        UUI_Deco_Back_Title_C_ExecuteUbergraph_UI_Deco_Back_Title_Params params {};
        params.EntryPoint = EntryPoint;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
