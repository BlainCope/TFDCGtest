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
#include "BasicTypes_TSoftClassPtr.h"
#include "M1_UM1UIWidgetContainer.h"
#include "BasicTypes_TMap.h"
#include "M1_ENUMS.h"
#include "M1_UM1UIWidget.h"
#include "M1_FM1PackageWidgetInfo.h"
#include "Engine_UDataAsset.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1DataWidgetPackage
     * Size -> 0x02C8 (FullSize[0x02F8] - InheritedSize[0x0030])
     */
    class UM1DataWidgetPackage : public Engine::UDataAsset
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TSoftClassPtr<M1::UM1UIWidgetContainer>          WidgetContainerClass;                                    //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TMap<M1::EStandaloneWidgetType, BasicTypes::TSoftClassPtr<M1::UM1UIWidget>> StandaloneWidgetClasses;                                 //  Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
        BasicTypes::TMap<M1::EM1CommonWidgetType, M1::FM1PackageWidgetInfo> CommonWidgetPackages;                                    //  Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
        BasicTypes::TMap<M1::EM1SystemWidgetType, BasicTypes::TSoftClassPtr<M1::UM1UIWidget>> SystemWidgetClasses;                                     //  Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
        BasicTypes::TMap<M1::EM1AlwaysVisibleWidgetType, BasicTypes::TSoftClassPtr<M1::UM1UIWidget>> AlwaysVisibleWidgetClasses;                              //  Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
        BasicTypes::TMap<M1::EM1OverlayWidgetType, BasicTypes::TSoftClassPtr<M1::UM1UIWidget>> OverlayWidgetClasses;                                    //  Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
        BasicTypes::TMap<M1::EM1MainWidgetType, BasicTypes::TSoftClassPtr<M1::UM1UIWidget>> MainWidgetClasses;                                       //  Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate
        BasicTypes::TMap<M1::EM1AboveMainButUnderStandaloneWidgetType, M1::FM1PackageWidgetInfo> AboveMainButUnderStandaloneWidgetClasses;                //  Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
        BasicTypes::TSoftClassPtr<M1::UM1UIWidget>                   MissionDebugInfoWidgetClass;                             //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftClassPtr<M1::UM1UIWidget>                   MatchingWidgetClass;                                     //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1DataWidgetPackage");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
