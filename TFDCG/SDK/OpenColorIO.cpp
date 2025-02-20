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
#include "Headers/OpenColorIO_ENUMS.h"
#include "Headers/OpenColorIO_PARAMS.h"
#include "Headers/OpenColorIO_UOpenColorIOSettings.h"
#include "Headers/OpenColorIO_UOpenColorIOBlueprintLibrary.h"
#include "Headers/OpenColorIO_UOpenColorIOColorTransform.h"
#include "Headers/OpenColorIO_UOpenColorIOConfiguration.h"
#include "Headers/OpenColorIO_UOpenColorIODisplayExtensionWrapper.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OpenColorIO
{
    // --------------------------------------------------
    // # Structs functions
    // --------------------------------------------------
    /**
     * Function:
     *         RVA    -> 0x0159A820
     *         Name   -> Function /Script/OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
     *         Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
     * Parameters:
     *         CoreUObject::UObject*                              WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         OpenColorIO::FOpenColorIOColorConversionSettings   ConversionSettings                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
     *         Engine::UTexture*                                  InputTexture                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         Engine::UTextureRenderTarget2D*                    OutputRenderTarget                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     *         bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    bool UOpenColorIOBlueprintLibrary::STATIC_ApplyColorSpaceTransform(CoreUObject::UObject* WorldContextObject, const OpenColorIO::FOpenColorIOColorConversionSettings& ConversionSettings, Engine::UTexture* InputTexture, Engine::UTextureRenderTarget2D* OutputRenderTarget)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform");
        
        UOpenColorIOBlueprintLibrary_ApplyColorSpaceTransform_Params params {};
        params.WorldContextObject = WorldContextObject;
        params.ConversionSettings = ConversionSettings;
        params.InputTexture = InputTexture;
        params.OutputRenderTarget = OutputRenderTarget;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x012D8020
     *         Name   -> Function /Script/OpenColorIO.OpenColorIOConfiguration.ReloadExistingColorspaces
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UOpenColorIOConfiguration::ReloadExistingColorspaces()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/OpenColorIO.OpenColorIOConfiguration.ReloadExistingColorspaces");
        
        UOpenColorIOConfiguration_ReloadExistingColorspaces_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x015A2110
     *         Name   -> Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
     *         Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
     * Parameters:
     *         BasicTypes::TArray<Engine::FSceneViewExtensionIsActiveFunctor> IsActiveFunctions                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunctions(BasicTypes::TArray<Engine::FSceneViewExtensionIsActiveFunctor> IsActiveFunctions)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions");
        
        UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunctions_Params params {};
        params.IsActiveFunctions = IsActiveFunctions;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x015A2330
     *         Name   -> Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
     *         Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
     * Parameters:
     *         Engine::FSceneViewExtensionIsActiveFunctor         IsActiveFunction                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UOpenColorIODisplayExtensionWrapper::SetSceneExtensionIsActiveFunction(const Engine::FSceneViewExtensionIsActiveFunctor& IsActiveFunction)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction");
        
        UOpenColorIODisplayExtensionWrapper_SetSceneExtensionIsActiveFunction_Params params {};
        params.IsActiveFunction = IsActiveFunction;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x015A2480
     *         Name   -> Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         OpenColorIO::FOpenColorIODisplayConfiguration      InDisplayConfiguration                                     (Parm, NativeAccessSpecifierPublic)
     *         void                                               ReturnValue
     */
    void UOpenColorIODisplayExtensionWrapper::SetOpenColorIOConfiguration(const OpenColorIO::FOpenColorIODisplayConfiguration& InDisplayConfiguration)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration");
        
        UOpenColorIODisplayExtensionWrapper_SetOpenColorIOConfiguration_Params params {};
        params.InDisplayConfiguration = InDisplayConfiguration;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x015A2070
     *         Name   -> Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
     *         Flags  -> (Final, Native, Public, BlueprintCallable)
     * Parameters:
     *         void                                               ReturnValue
     */
    void UOpenColorIODisplayExtensionWrapper::RemoveSceneExtension()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension");
        
        UOpenColorIODisplayExtensionWrapper_RemoveSceneExtension_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
    }

    /**
     * Function:
     *         RVA    -> 0x015A26D0
     *         Name   -> Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration
     *         Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
     * Parameters:
     *         OpenColorIO::FOpenColorIODisplayConfiguration      ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
     */
    OpenColorIO::FOpenColorIODisplayConfiguration UOpenColorIODisplayExtensionWrapper::GetOpenColorIOConfiguration()
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.GetOpenColorIOConfiguration");
        
        UOpenColorIODisplayExtensionWrapper_GetOpenColorIOConfiguration_Params params {};
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x015A1D40
     *         Name   -> Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
     *         Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
     * Parameters:
     *         OpenColorIO::FOpenColorIODisplayConfiguration      InDisplayConfiguration                                     (Parm, NativeAccessSpecifierPublic)
     *         Engine::FSceneViewExtensionIsActiveFunctor         IsActiveFunction                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
     *         OpenColorIO::UOpenColorIODisplayExtensionWrapper*  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    OpenColorIO::UOpenColorIODisplayExtensionWrapper* UOpenColorIODisplayExtensionWrapper::STATIC_CreateOpenColorIODisplayExtension(const OpenColorIO::FOpenColorIODisplayConfiguration& InDisplayConfiguration, const Engine::FSceneViewExtensionIsActiveFunctor& IsActiveFunction)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension");
        
        UOpenColorIODisplayExtensionWrapper_CreateOpenColorIODisplayExtension_Params params {};
        params.InDisplayConfiguration = InDisplayConfiguration;
        params.IsActiveFunction = IsActiveFunction;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

    /**
     * Function:
     *         RVA    -> 0x015A18D0
     *         Name   -> Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension
     *         Flags  -> (Final, Native, Static, Public, BlueprintCallable)
     * Parameters:
     *         OpenColorIO::FOpenColorIODisplayConfiguration      InDisplayConfiguration                                     (Parm, NativeAccessSpecifierPublic)
     *         OpenColorIO::UOpenColorIODisplayExtensionWrapper*  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
     */
    OpenColorIO::UOpenColorIODisplayExtensionWrapper* UOpenColorIODisplayExtensionWrapper::STATIC_CreateInGameOpenColorIODisplayExtension(const OpenColorIO::FOpenColorIODisplayConfiguration& InDisplayConfiguration)
    {
        static CoreUObject::UFunction* fn = nullptr;
        if (!fn)
            fn = CoreUObject::UObject::FindObject<CoreUObject::UFunction>("Function /Script/OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateInGameOpenColorIODisplayExtension");
        
        UOpenColorIODisplayExtensionWrapper_CreateInGameOpenColorIODisplayExtension_Params params {};
        params.InDisplayConfiguration = InDisplayConfiguration;
        
        auto flags = fn->FunctionFlags;
        CoreUObject::UObject::ProcessEvent(fn, &params);
        fn->FunctionFlags = flags;
        
        return params.ReturnValue;
    }

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
