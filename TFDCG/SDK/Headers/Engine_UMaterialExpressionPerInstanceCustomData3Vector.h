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
#include "CoreUObject_FLinearColor.h"
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
     * Class /Script/Engine.MaterialExpressionPerInstanceCustomData3Vector
     * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
     */
    class UMaterialExpressionPerInstanceCustomData3Vector : public Engine::UMaterialExpression
    {
    public:
        Engine::FExpressionInput                                     DefaultValue;                                            //  NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FLinearColor                                    ConstDefaultValue;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      DataIndex;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MaterialExpressionPerInstanceCustomData3Vector");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
