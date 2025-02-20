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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Paper2D { class UPaperSprite; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Paper2D
{
    /**
     * ScriptStruct /Script/Paper2D.PaperTerrainMaterialRule
     * Size -> 0x0038
     */
    struct FPaperTerrainMaterialRule
    {
    public:
        Paper2D::UPaperSprite*                                       StartCap;                                                //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Paper2D::UPaperSprite*>                   Body;                                                    //  Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        Paper2D::UPaperSprite*                                       EndCap;                                                  //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MinimumAngle;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaximumAngle;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnableCollision;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        CollisionOffset;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      DrawOrder;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
