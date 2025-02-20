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

namespace CG::UMG
{
    // --------------------------------------------------
    // # Enums
    // --------------------------------------------------
    /**
     * Enum /Script/UMG.ESlateVisibility
     */
    enum class ESlateVisibility : uint8_t
    {
        Visible              = 0,
        Collapsed            = 1,
        Hidden               = 2,
        HitTestInvisible     = 3,
        SelfHitTestInvisible = 4,
        MAX                  = 5
    };

    /**
     * Enum /Script/UMG.EVirtualKeyboardType
     */
    enum class EVirtualKeyboardType : uint8_t
    {
        Default      = 0,
        Number       = 1,
        Web          = 2,
        Email        = 3,
        Password     = 4,
        AlphaNumeric = 5,
        MAX          = 6
    };

    /**
     * Enum /Script/UMG.ESlateAccessibleBehavior
     */
    enum class ESlateAccessibleBehavior : uint8_t
    {
        NotAccessible = 0,
        Auto          = 1,
        Summary       = 2,
        Custom        = 3,
        ToolTip       = 4,
        MAX           = 5
    };

    /**
     * Enum /Script/UMG.ESlateSizeRule
     */
    enum class ESlateSizeRule : uint8_t
    {
        Automatic = 0,
        Fill      = 1,
        MAX       = 2
    };

    /**
     * Enum /Script/UMG.EDynamicBoxType
     */
    enum class EDynamicBoxType : uint8_t
    {
        Horizontal   = 0,
        Vertical     = 1,
        Wrap         = 2,
        VerticalWrap = 3,
        Radial       = 4,
        Overlay      = 5,
        MAX          = 6
    };

    /**
     * Enum /Script/UMG.EWidgetDesignFlags
     */
    enum class EWidgetDesignFlags : uint8_t
    {
        None                = 0,
        Designing           = 1,
        ShowOutline         = 2,
        ExecutePreConstruct = 3,
        Previewing          = 4,
        MAX                 = 5
    };

    /**
     * Enum /Script/UMG.EWidgetSpace
     */
    enum class EWidgetSpace : uint8_t
    {
        World  = 0,
        Screen = 1,
        MAX    = 2
    };

    /**
     * Enum /Script/UMG.EWidgetTimingPolicy
     */
    enum class EWidgetTimingPolicy : uint8_t
    {
        RealTime = 0,
        GameTime = 1,
        MAX      = 2
    };

    /**
     * Enum /Script/UMG.EWidgetBlendMode
     */
    enum class EWidgetBlendMode : uint8_t
    {
        Opaque      = 0,
        Masked      = 1,
        Transparent = 2,
        MAX         = 3
    };

    /**
     * Enum /Script/UMG.EWidgetGeometryMode
     */
    enum class EWidgetGeometryMode : uint8_t
    {
        Plane    = 0,
        Cylinder = 1,
        MAX      = 2
    };

    /**
     * Enum /Script/UMG.EWindowVisibility
     */
    enum class EWindowVisibility : uint8_t
    {
        Visible              = 0,
        SelfHitTestInvisible = 1,
        MAX                  = 2
    };

    /**
     * Enum /Script/UMG.ETickMode
     */
    enum class ETickMode : uint8_t
    {
        Disabled  = 0,
        Enabled   = 1,
        Automatic = 2,
        MAX       = 3
    };

    /**
     * Enum /Script/UMG.EWidgetInteractionSource
     */
    enum class EWidgetInteractionSource : uint8_t
    {
        World        = 0,
        Mouse        = 1,
        CenterScreen = 2,
        Custom       = 3,
        MAX          = 4
    };

    /**
     * Enum /Script/UMG.EDragPivot
     */
    enum class EDragPivot : uint8_t
    {
        MouseDown    = 0,
        TopLeft      = 1,
        TopCenter    = 2,
        TopRight     = 3,
        CenterLeft   = 4,
        CenterCenter = 5,
        CenterRight  = 6,
        BottomLeft   = 7,
        BottomCenter = 8,
        BottomRight  = 9,
        MAX          = 10
    };

    /**
     * Enum /Script/UMG.EWidgetTickFrequency
     */
    enum class EWidgetTickFrequency : uint8_t
    {
        Never = 0,
        Auto  = 1,
        MAX   = 2
    };

    /**
     * Enum /Script/UMG.EWidgetAnimationEvent
     */
    enum class EWidgetAnimationEvent : uint8_t
    {
        Started  = 0,
        Finished = 1,
        MAX      = 2
    };

    /**
     * Enum /Script/UMG.EUMGSequencePlayMode
     */
    enum class EUMGSequencePlayMode : uint8_t
    {
        Forward  = 0,
        Reverse  = 1,
        PingPong = 2,
        MAX      = 3
    };

    /**
     * Enum /Script/UMG.EBindingKind
     */
    enum class EBindingKind : uint8_t
    {
        Function = 0,
        Property = 1,
        MAX      = 2
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
