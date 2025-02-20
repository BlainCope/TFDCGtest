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
#include "M1_UM1UIPopup.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIResearchInfo; };
namespace CG::M1 { class UM1UIWidget; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIResearchInfoPopup
     * Size -> 0x0018 (FullSize[0x07B8] - InheritedSize[0x07A0])
     */
    class UM1UIResearchInfoPopup : public M1::UM1UIPopup
    {
    public:
        M1::UM1UIResearchInfo*                                       UI_ResearchDetails;                                      //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        void OnTraceItemClicked(M1::UM1UIWidget* InWidget);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIResearchInfoPopup");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
