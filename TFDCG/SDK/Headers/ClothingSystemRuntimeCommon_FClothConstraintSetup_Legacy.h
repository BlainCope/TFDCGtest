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

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ClothingSystemRuntimeCommon
{
    /**
     * ScriptStruct /Script/ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
     * Size -> 0x0010
     */
    struct FClothConstraintSetup_Legacy
    {
    public:
        float                                                        Stiffness;                                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        StiffnessMultiplier;                                     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        StretchLimit;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CompressionLimit;                                        //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
