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
#include "M1_FM1WidgetAudioData.h"
#include "BasicTypes_TMap.h"
#include "SlateCore_ENUMS.h"
#include "M1_FM1NavigationWidgetHandler.h"
#include "M1_FM1NavigationTagMapping.h"
#include "BasicTypes_FName.h"
#include "M1_FM1WidgetUserValue.h"
#include "M1_ENUMS.h"
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "CoreUObject_FVector2D.h"
#include "BasicTypes_TWeakObjectPtr.h"
#include "M1_FM1OwningToolTipType.h"
#include "UMG_UUserWidget.h"
#include "UMG_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AkAudio { class UAkAudioEvent; };
namespace CG::UMG { class UWidget; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::UMG { class UWidgetAnimation; };
namespace CG::M1 { class UM1UIData; };
namespace CG::M1 { class UM1UIDataContainer; };
namespace CG::UMG { class USizeBox; };
namespace CG::M1 { class UM1UIWidget; };
namespace CG::UMG { class UUMGSequencePlayer; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIWidget
     * Size -> 0x04B8 (FullSize[0x0708] - InheritedSize[0x0250])
     */
    class UM1UIWidget : public UMG::UUserWidget
    {
    public:
        uint8_t                                                      UnknownData_0000[0x9];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bKeptInWidgetPool;                                       //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bBlockInput;                                             //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x5];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1WidgetAudioData                                       WidgetAudio;                                             //  Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
        AkAudio::UAkAudioEvent*                                      OpenAkEvent;                                             //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AkAudio::UAkAudioEvent*                                      CloseAkEvent;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        AkAudio::UAkAudioEvent*                                      SelectedAkEvent;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UWidget*                                                FocusDisplayWidget;                                      //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           FocusDecoSizeWidget;                                     //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bHandleNavigationByCustomRule;                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<SlateCore::EUINavigation, M1::FM1NavigationWidgetHandler> TypesForHandleNavigationByCustomRule;                    //  Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
        BasicTypes::TMap<SlateCore::EUINavigation, M1::FM1NavigationWidgetHandler> TypesForHandleNavigationByDefaultRule;                   //  Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
        BasicTypes::TMap<SlateCore::EUINavigation, M1::FM1NavigationTagMapping> TypesForHandleNavigationByTag;                           //  Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
        BasicTypes::FName                                            NavigationTag;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UWidgetAnimation*                                       Anim_MouseEnter;                                         //  ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UWidgetAnimation*                                       Anim_MouseLeave;                                         //  ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        RemoveDelaySec;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bAutoPlayAnimations;                                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0003[0x13];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1UIData*                                               UIData;                                                  //  Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::FM1WidgetUserValue                                       CustomValue;                                             //  Edit, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x30];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1UIDataContainer*                                      DataContainer;                                           //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0005[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::EWidgetLayer                                             WidgetLayer;                                             //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0006[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UMulticastInlineDelegate                         OnEventMouserEnter;                                      //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0007[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnEventMouseLeave;                                       //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0008[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnReceivedFocus;                                         //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0009[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnLostFocus;                                             //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0010[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnEventAddedToFocusPath;                                 //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0011[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnEventRemovedFromFocusPath;                             //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0012[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        bool                                                         bBlockMouseFocus;                                        //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0013[0x23];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector2D                                       WidgetSize;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0014[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        UMG::USizeBox*                                               WidgetSizeBox;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TWeakObjectPtr<M1::UM1UIWidget>                  OwningToolTip;                                           //  ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0015[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1OwningToolTipType                                     ToolTipType;                                             //  Edit, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0016[0x5C];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bTraceOpenClose;                                         //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0017[0x183];                                 //  MISSED OFFSET (PADDING)

    public:
        void SetWidgetSize(const CoreUObject::FVector2D& InSize);
        void SetupForReuse();
        void SetUIData(M1::UM1UIData* InUIData);
        void SetEmptyDataImpl();
        void SetDataImpl(M1::UM1UIData* InData);
        void PrepareFocus();
        UMG::UUMGSequencePlayer* PlayUIAnimation(UMG::UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, UMG::EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bAllStopAnimations, bool bRestoreState);
        void PlayOpenAnimation(M1::EM1WidgetAnimDirection InDirection);
        void PlayCloseAnimation(M1::EM1WidgetAnimDirection InDirection);
        void OnShowImpl();
        void OnHideImpl();
        void OnEventWidgetOpen(M1::EM1WidgetAnimDirection InDirection);
        void OnEventWidgetClose(M1::EM1WidgetAnimDirection InDirection);
        bool IsDisplayAsSelected();
        UMG::UWidget* GetWidgetHandleByTagToNavigate(const M1::FM1NavigationTagMapping& TagMapping);
        M1::UM1UIData* GetUIData();
        M1::UM1UIData* GetToolTipDataToOverride();
        UMG::UWidget* GetFocusWidget();
        UMG::UWidget* GetDescendantWidgetForNavigation(int32_t InIndex);
        UMG::UWidget* GetCalculatedWidgetHandleToNavigateByDefaultRule(SlateCore::EUINavigation NavigationType);
        UMG::UWidget* GetCalculatedWidgetHandleToNavigate(SlateCore::EUINavigation NavigationType);
        void DisplayAsSelected(bool InSelected);
        void ClearFocus();
        void BP_SetupForReuse();
        void BP_Selected(bool InSelected);
        void BP_ReceivedFocus();
        void BP_LostFocus();
        void AddToLayer(M1::EWidgetLayer InLayer);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIWidget");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
