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
#include "Engine_FExpressionInput.h"
#include "Engine_UMaterialExpressionStrataBSDF.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.MaterialExpressionStrataUnlitBSDF
     * Size -> 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
     */
    class UMaterialExpressionStrataUnlitBSDF : public Engine::UMaterialExpressionStrataBSDF
    {
    public:
        Engine::FExpressionInput                                     EmissiveColor;                                           //  NoDestructor, NativeAccessSpecifierPublic
        Engine::FExpressionInput                                     TransmittanceColor;                                      //  NoDestructor, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MaterialExpressionStrataUnlitBSDF");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
