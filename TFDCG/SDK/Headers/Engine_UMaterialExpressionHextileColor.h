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
#include "Engine_UMaterialExpressionTextureSample.h"

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
     * Class /Script/Engine.MaterialExpressionHextileColor
     * Size -> 0x0078 (FullSize[0x0230] - InheritedSize[0x01B8])
     */
    class UMaterialExpressionHextileColor : public Engine::UMaterialExpressionTextureSample
    {
    public:
        Engine::FExpressionInput                                     St;                                                      //  NoDestructor, NativeAccessSpecifierPublic
        Engine::FExpressionInput                                     HexSize;                                                 //  NoDestructor, NativeAccessSpecifierPublic
        Engine::FExpressionInput                                     RotStrength;                                             //  NoDestructor, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MaterialExpressionHextileColor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
