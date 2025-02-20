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

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Paper2D
{
    // --------------------------------------------------
    // # Enums
    // --------------------------------------------------
    /**
     * Enum /Script/Paper2D.ESpriteCollisionMode
     */
    enum class ESpriteCollisionMode : uint8_t
    {
        None         = 0,
        Use2DPhysics = 1,
        Use3DPhysics = 2,
        MAX          = 3
    };

    /**
     * Enum /Script/Paper2D.ESpriteShapeType
     */
    enum class ESpriteShapeType : uint8_t
    {
        Box     = 0,
        Circle  = 1,
        Polygon = 2,
        MAX     = 3
    };

    /**
     * Enum /Script/Paper2D.ESpritePolygonMode
     */
    enum class ESpritePolygonMode : uint8_t
    {
        SourceBoundingBox = 0,
        TightBoundingBox  = 1,
        ShrinkWrapped     = 2,
        FullyCustom       = 3,
        Diced             = 4,
        MAX               = 5
    };

    /**
     * Enum /Script/Paper2D.ESpritePivotMode
     */
    enum class ESpritePivotMode : uint8_t
    {
        Top_Left      = 0,
        Top_Center    = 1,
        Top_Right     = 2,
        Center_Left   = 3,
        Center_Center = 4,
        Center_Right  = 5,
        Bottom_Left   = 6,
        Bottom_Center = 7,
        Bottom_Right  = 8,
        Custom        = 9,
        MAX           = 10
    };

    /**
     * Enum /Script/Paper2D.EFlipbookCollisionMode
     */
    enum class EFlipbookCollisionMode : uint8_t
    {
        NoCollision         = 0,
        FirstFrameCollision = 1,
        EachFrameCollision  = 2,
        MAX                 = 3
    };

    /**
     * Enum /Script/Paper2D.EPaperSpriteAtlasPadding
     */
    enum class EPaperSpriteAtlasPadding : uint8_t
    {
        DilateBorder = 0,
        PadWithZero  = 1,
        MAX          = 2
    };

    /**
     * Enum /Script/Paper2D.ETileMapProjectionMode
     */
    enum class ETileMapProjectionMode : uint8_t
    {
        Orthogonal         = 0,
        IsometricDiamond   = 1,
        IsometricStaggered = 2,
        HexagonalStaggered = 3,
        MAX                = 4
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
