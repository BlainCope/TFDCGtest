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
#include "M1_UM1UIMissionTargetActorInfo.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIMissionIcon; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIMissionTargetVoidFragmentInfo
     * Size -> 0x0008 (FullSize[0x0780] - InheritedSize[0x0778])
     */
    class UM1UIMissionTargetVoidFragmentInfo : public M1::UM1UIMissionTargetActorInfo
    {
    public:
        M1::UM1UIMissionIcon*                                        UI_MissionIcon;                                          //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIMissionTargetVoidFragmentInfo");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
