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
#include "Engine_UMaterialExpression.h"

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
     * Class /Script/Engine.MaterialExpressionHairColor
     * Size -> 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
     */
    class UMaterialExpressionHairColor : public Engine::UMaterialExpression
    {
    public:
        Engine::FExpressionInput                                     Melanin;                                                 //  NoDestructor, NativeAccessSpecifierPublic
        Engine::FExpressionInput                                     Redness;                                                 //  NoDestructor, NativeAccessSpecifierPublic
        Engine::FExpressionInput                                     DyeColor;                                                //  NoDestructor, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MaterialExpressionHairColor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
