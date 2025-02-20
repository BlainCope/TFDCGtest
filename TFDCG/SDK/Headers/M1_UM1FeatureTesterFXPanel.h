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
#include "M1_UM1FeatureTesterAssetsPanelBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UEditableTextBox; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1FeatureTesterFXPanel
     * Size -> 0x0018 (FullSize[0x0768] - InheritedSize[0x0750])
     */
    class UM1FeatureTesterFXPanel : public M1::UM1FeatureTesterAssetsPanelBase
    {
    public:
        UMG::UEditableTextBox*                                       TxtInitialDelay;                                         //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UEditableTextBox*                                       TxtLoopTime;                                             //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UEditableTextBox*                                       TxtSpawnForwardDistance;                                 //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1FeatureTesterFXPanel");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
