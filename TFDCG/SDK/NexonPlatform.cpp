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
#include "Headers/NexonPlatform_ENUMS.h"
#include "Headers/NexonPlatform_PARAMS.h"
#include "Headers/NexonPlatform_UNXPToyCSInterface.h"
#include "Headers/NexonPlatform_UNXPToyPreferences.h"
#include "Headers/NexonPlatform_UNXPEveInterface.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::NexonPlatform
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x01861C10
     *         Name   -> Function /Script/NexonPlatform.NXPToyCSInterface.OpenNCSForNonMember
     *         Flags  -> (Final, Native, Public, Const)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UNXPToyCSInterface::OpenNCSForNonMember()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPToyCSInterface.OpenNCSForNonMember");
        
        UNXPToyCSInterface_OpenNCSForNonMember_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01864150
     *         Name   -> Function /Script/NexonPlatform.NXPEveInterface.saveEveUserInfo
     *         Flags  -> (Final, Native, Public, Const)
     * Parameters:
     *         BasicTypes::FString                                UserInfo                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UNXPEveInterface::saveEveUserInfo(const BasicTypes::FString& UserInfo)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPEveInterface.saveEveUserInfo");
        
        UNXPEveInterface_saveEveUserInfo_Params params {};
        params.UserInfo = UserInfo;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01863560
     *         Name   -> Function /Script/NexonPlatform.NXPEveInterface.openLink
     *         Flags  -> (Final, Native, Public, Const)
     * Parameters:
     *         BasicTypes::FString                                EveLinkJsonString                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         BasicTypes::FString                                callback                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UNXPEveInterface::openLink(const BasicTypes::FString& EveLinkJsonString, const BasicTypes::FString& callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPEveInterface.openLink");
        
        UNXPEveInterface_openLink_Params params {};
        params.EveLinkJsonString = EveLinkJsonString;
        params.callback = callback;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01863B00
     *         Name   -> Function /Script/NexonPlatform.NXPEveInterface.getUserInfo
     *         Flags  -> (Final, Native, Public, Const)
     * Parameters:
     *         BasicTypes::FString                                callback                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UNXPEveInterface::getUserInfo(const BasicTypes::FString& callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPEveInterface.getUserInfo");
        
        UNXPEveInterface_getUserInfo_Params params {};
        params.callback = callback;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01863C10
     *         Name   -> Function /Script/NexonPlatform.NXPEveInterface.getLocale
     *         Flags  -> (Final, Native, Public, Const)
     * Parameters:
     *         BasicTypes::FString                                callback                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UNXPEveInterface::getLocale(const BasicTypes::FString& callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPEveInterface.getLocale");
        
        UNXPEveInterface_getLocale_Params params {};
        params.callback = callback;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01864420
     *         Name   -> Function /Script/NexonPlatform.NXPEveInterface.getDisplayCutout
     *         Flags  -> (Final, Native, Public, Const)
     * Parameters:
     *         BasicTypes::FString                                callback                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UNXPEveInterface::getDisplayCutout(const BasicTypes::FString& callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPEveInterface.getDisplayCutout");
        
        UNXPEveInterface_getDisplayCutout_Params params {};
        params.callback = callback;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01863D20
     *         Name   -> Function /Script/NexonPlatform.NXPEveInterface.getCountry
     *         Flags  -> (Final, Native, Public, Const)
     * Parameters:
     *         BasicTypes::FString                                callback                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UNXPEveInterface::getCountry(const BasicTypes::FString& callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPEveInterface.getCountry");
        
        UNXPEveInterface_getCountry_Params params {};
        params.callback = callback;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01863E30
     *         Name   -> Function /Script/NexonPlatform.NXPEveInterface.doNotShowToday
     *         Flags  -> (Final, Native, Public, Const)
     * Parameters:
     *         BasicTypes::FString                                PlacementId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         BasicTypes::FString                                State                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UNXPEveInterface::doNotShowToday(const BasicTypes::FString& PlacementId, const BasicTypes::FString& State)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPEveInterface.doNotShowToday");
        
        UNXPEveInterface_doNotShowToday_Params params {};
        params.PlacementId = PlacementId;
        params.State = State;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01864000
     *         Name   -> Function /Script/NexonPlatform.NXPEveInterface.dismissWebView
     *         Flags  -> (Final, Native, Public, Const)
     * Parameters:
     *         BasicTypes::FString                                callback                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UNXPEveInterface::dismissWebView(const BasicTypes::FString& callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPEveInterface.dismissWebView");
        
        UNXPEveInterface_dismissWebView_Params params {};
        params.callback = callback;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01864250
     *         Name   -> Function /Script/NexonPlatform.NXPEveInterface.callback
     *         Flags  -> (Final, Native, Public, Const)
     * Parameters:
     *         BasicTypes::FString                                ErrorCode                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         BasicTypes::FString                                Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UNXPEveInterface::callback(const BasicTypes::FString& ErrorCode, const BasicTypes::FString& Message)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPEveInterface.callback");
        
        UNXPEveInterface_callback_Params params {};
        params.ErrorCode = ErrorCode;
        params.Message = Message;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01863900
     *         Name   -> Function /Script/NexonPlatform.NXPEveInterface.billingRequestProducts
     *         Flags  -> (Final, Native, Public, HasOutParms, Const)
     * Parameters:
     *         BasicTypes::TArray<BasicTypes::FString>            ProductIds                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
     *         BasicTypes::FString                                callback                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UNXPEveInterface::billingRequestProducts(BasicTypes::TArray<BasicTypes::FString> ProductIds, const BasicTypes::FString& callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPEveInterface.billingRequestProducts");
        
        UNXPEveInterface_billingRequestProducts_Params params {};
        params.ProductIds = ProductIds;
        params.callback = callback;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x01863730
     *         Name   -> Function /Script/NexonPlatform.NXPEveInterface.billingPayment
     *         Flags  -> (Final, Native, Public, Const)
     * Parameters:
     *         BasicTypes::FString                                ProductId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         BasicTypes::FString                                callback                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UNXPEveInterface::billingPayment(const BasicTypes::FString& ProductId, const BasicTypes::FString& callback)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/NexonPlatform.NXPEveInterface.billingPayment");
        
        UNXPEveInterface_billingPayment_Params params {};
        params.ProductId = ProductId;
        params.callback = callback;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
