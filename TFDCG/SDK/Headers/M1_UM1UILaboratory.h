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
#include "BasicTypes_FString.h"
#include "M1_UM1UINpcService.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UILaboratoryOptionList; };
namespace CG::M1 { class UM1ListView; };
namespace CG::M1 { class UM1UIKeyButton; };
namespace CG::M1 { class UM1UIContextButtons; };
namespace CG::M1 { class UM1UIWidget; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UILaboratory
     * Size -> 0x0048 (FullSize[0x0758] - InheritedSize[0x0710])
     */
    class UM1UILaboratory : public M1::UM1UINpcService
    {
    public:
        M1::UM1UILaboratoryOptionList*                               UI_LabOptionList;                                        //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1ListView*                                             InfoList;                                                //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIKeyButton*                                          Btn_Apply;                                               //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UIContextButtons*                                     UI_ContextButtons;                                       //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<BasicTypes::FString>                      LegionNameIds;                                           //  Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<BasicTypes::FString>                      FormationNameIds;                                        //  Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        void OnCancelClicked(M1::UM1UIWidget* InWidget);
        void OnApplyHoldCompleted(M1::UM1UIWidget* InWidget);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UILaboratory");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
