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
#include "BasicTypes_FName.h"
#include "BasicTypes_TArray.h"
#include "M1_UM1UIOptionSpecTypeBase.h"
#include "M1_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIOptionIndividual_DropDown; };
namespace CG::M1 { class UM1UIOptionSubclass; };
namespace CG::M1 { class UM1UIOptionDetailMain; };
namespace CG::M1 { class UM1WidgetSwitcher; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::M1 { class UM1UIOptionGamepadKeyInfo; };
namespace CG::M1 { class UM1UIWidget; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIOptionSpecGamepadKey
     * Size -> 0x0078 (FullSize[0x0840] - InheritedSize[0x07C8])
     */
    class UM1UIOptionSpecGamepadKey : public M1::UM1UIOptionSpecTypeBase
    {
    public:
        M1::UM1UIOptionIndividual_DropDown*                          UI_Option_DropDown_GamepadPreset_Key;                    //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIOptionSubclass*                                     UI_Option_Subclass;                                      //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIOptionSubclass*                                     UI_Option_Subclass_CSOOnly;                              //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIOptionDetailMain*                                   UI_DetailMain;                                           //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1WidgetSwitcher*                                       WS_Preset;                                               //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::FName                                            SubclassRowName;                                         //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::FName                                            CSOOnlySubclassRowName;                                  //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_DuplicatedKeyWarning;                              //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<M1::UM1UIOptionGamepadKeyInfo*>           DefaultKeyInfos;                                         //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::UM1UIOptionGamepadKeyInfo*>           LeftHandedKeyInfos;                                      //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::UM1UIOptionGamepadKeyInfo*>           CustomizedKeyInfos;                                      //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        void OnEventUnhoveredOption(M1::UM1UIWidget* InWidget);
        void OnEventHoveredOption(M1::UM1UIWidget* InWidget);
        void OnClickedResetOption(M1::UM1UIWidget* InWidget);
        void OnCancelOption(M1::UM1UIWidget* InWidget);
        void OnApplyClick(M1::UM1UIWidget* InWidget);
        void BP_UpdateControllerImage(M1::EM1GamepadPlatform InPlatform);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIOptionSpecGamepadKey");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
