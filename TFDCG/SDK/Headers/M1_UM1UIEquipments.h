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
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "M1_ENUMS.h"
#include "M1_UM1UIWidget.h"
#include "M1Data_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIEquipmentSlot; };
namespace CG::M1 { class UM1UIButton; };
namespace CG::M1 { class UM1UIDataItemInfo; };
namespace CG::M1 { class UM1InventoryItem; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIEquipments
     * Size -> 0x0068 (FullSize[0x0770] - InheritedSize[0x0708])
     */
    class UM1UIEquipments : public M1::UM1UIWidget
    {
    public:
        BasicTypes::TArray<M1::UM1UIEquipmentSlot*>                  Slots;                                                   //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::UM1UIButton*>                         Buttons_OpenRuneBoard;                                   //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::UMulticastInlineDelegate                         OnEventSlotClicked;                                      //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnEventCursorEnteredSlot;                                //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnEventCursorLeftSlot;                                   //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnEventSlotRightMouseButtonUp;                           //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        M1::EM1UIEquipmentsType                                      EquipmentsType;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0004[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        void ShowEquipments(BasicTypes::TArray<M1::UM1UIDataItemInfo*> InEquipments);
        void OnSlotRightMouseButtonUp(M1::UM1UIWidget* InWidget);
        void OnSlotClicked(M1::UM1UIWidget* InWidget);
        void OnRuneBoardButtonClicked(M1::UM1UIWidget* InWidget);
        void OnReceiveNewlyObtainedItems(BasicTypes::TArray<M1::UM1InventoryItem*> InItems);
        void OnEquipmentMouseUnhovered(M1::UM1UIWidget* InWidget);
        void OnEquipmentMouseHovered(M1::UM1UIWidget* InWidget);
        void OnCheckNewMarkedItemRemaining();
        void BP_ShowRuneBoardButton(bool InShow, M1Data::EM1EquipmentSlotType InSlotType);
        void BP_ShowNewMarkOnRuneBoardButton(bool InShow, int32_t InSlotIndex);
        void BP_ShowNewMark(bool InShow);
        BasicTypes::TArray<M1::UM1UIEquipmentSlot*> BP_GetSlots();
        BasicTypes::TArray<M1::UM1UIButton*> BP_GetRuneBoardButtons();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIEquipments");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
