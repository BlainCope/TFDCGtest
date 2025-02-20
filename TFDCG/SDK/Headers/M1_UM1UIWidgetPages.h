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
#include "BasicTypes_TArray.h"
#include "BasicTypes_TSoftClassPtr.h"
#include "M1_UM1UIWidget.h"
#include "UMG_FUserWidgetPool.h"
#include "BasicTypes_TWeakObjectPtr.h"
#include "BasicTypes_UMulticastInlineDelegate.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UCanvasPanel; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIWidgetPages
     * Size -> 0x0110 (FullSize[0x0818] - InheritedSize[0x0708])
     */
    class UM1UIWidgetPages : public M1::UM1UIWidget
    {
    public:
        bool                                                         bAutoFocusWhenShowPage;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bPlayInDirection;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      PreviewPageIndex;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<BasicTypes::TSoftClassPtr<M1::UM1UIWidget>> WidgetClasses;                                           //  Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
        UMG::FUserWidgetPool                                         WidgetPool;                                              //  Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TWeakObjectPtr<M1::UM1UIWidget>                  CurrentPage;                                             //  ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        UMG::UCanvasPanel*                                           MainPanel;                                               //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::UMulticastInlineDelegate                         OnPageChanged;                                           //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        int32_t                                                      CreatedPageCount;                                        //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bRemovePageImmediately;                                  //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x2B];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UMulticastInlineDelegate                         OnPageClosed;                                            //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnEmptyPage;                                             //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY

    public:
        void ShowPage(int32_t InPageIndex);
        void SetAutoFocusWhenShowPage(bool InAutoFocus);
        int32_t GetCurrentPageIndex();
        M1::UM1UIWidget* GetCurrentPage();
        void ClosePage();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIWidgetPages");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
