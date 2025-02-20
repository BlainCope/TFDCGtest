#pragma once

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
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "BasicTypes_FString.h"
#include "UMG_UWidget.h"
#include "BasicTypes_FText.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::NXPWebBrowserWidget
{
    /**
     * Class /Script/NXPWebBrowserWidget.NXPWebBrowser
     * Size -> 0x0068 (FullSize[0x0198] - InheritedSize[0x0130])
     */
    class UNXPWebBrowser : public UMG::UWidget
    {
    public:
        BasicTypes::UMulticastInlineDelegate                         OnUrlChanged;                                            //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnBeforePopup;                                           //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnConsoleMessage;                                        //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnLoadCompleted;                                         //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::FString                                          InitialURL;                                              //  Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bSupportsTransparency;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0004[0x17];                                  //  MISSED OFFSET (PADDING)

    public:
        void UnbindUObject(const BasicTypes::FString& Name, CoreUObject::UObject* Object, bool bIsPermanent);
        void OnUrlChanged__DelegateSignature(const BasicTypes::FText& Text);
        void OnLoadCompleted__DelegateSignature();
        void OnConsoleMessage__DelegateSignature(const BasicTypes::FString& Message, const BasicTypes::FString& Source, int32_t Line);
        void OnBeforePopup__DelegateSignature(const BasicTypes::FString& URL, const BasicTypes::FString& Frame);
        void LoadURL(const BasicTypes::FString& NewUrl);
        void LoadString(const BasicTypes::FString& Contents, const BasicTypes::FString& DummyURL);
        BasicTypes::FString GetUrl();
        BasicTypes::FText GetTitleText();
        void ExecuteJavascript(const BasicTypes::FString& ScriptText);
        void BindUObject(const BasicTypes::FString& Name, CoreUObject::UObject* Object, bool bIsPermanent);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/NXPWebBrowserWidget.NXPWebBrowser");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
