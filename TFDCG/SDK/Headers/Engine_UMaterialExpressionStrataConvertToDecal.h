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
     * Class /Script/Engine.MaterialExpressionStrataConvertToDecal
     * Size -> 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
     */
    class UMaterialExpressionStrataConvertToDecal : public Engine::UMaterialExpressionStrataBSDF
    {
    public:
        Engine::FExpressionInput                                     DecalMaterial;                                           //  NoDestructor, NativeAccessSpecifierPublic
        Engine::FExpressionInput                                     Coverage;                                                //  NoDestructor, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MaterialExpressionStrataConvertToDecal");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
