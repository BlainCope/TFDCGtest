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
#include "M1_FM1OptionValue.h"
#include "M1_ENUMS.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1OptionUIComponent; };
namespace CG::M1 { class UM1OptionDetailComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1OptionItem
     * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
     */
    class UM1OptionItem : public CoreUObject::UObject
    {
    public:
        M1::FM1OptionValue                                           Value;                                                   //  Transient, NativeAccessSpecifierPrivate
        M1::EM1OptionFeature                                         Feature;                                                 //  Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::EM1OptionValueType                                       ValueType;                                               //  Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::EM1OptionApplyTime                                       ApplyTime;                                               //  Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x5];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1OptionUIComponent*                                    UIComponent;                                             //  Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1OptionDetailComponent*                                DetailComponent;                                         //  Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1OptionItem");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
