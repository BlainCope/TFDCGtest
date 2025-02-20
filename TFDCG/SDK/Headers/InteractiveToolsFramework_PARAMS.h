#pragma once
#pragma warning(disable: 4267)

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
#include "CoreUObject_FVector2D.h"
#include "CoreUObject_FTransform.h"
#include "CoreUObject_FVector.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::InteractiveToolsFramework
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoStateTarget_EndUpdate_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoStateTarget_BeginUpdate_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoFloatParameterSource_SetParameter_Params
    {
    public:
        float                                                        NewValue;                                                //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoFloatParameterSource_GetParameter_Params
    {
    public:
        float                                                        ReturnValue;                                             //  0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoFloatParameterSource_EndModify_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoFloatParameterSource_BeginModify_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoVec2ParameterSource_SetParameter_Params
    {
    public:
        CoreUObject::FVector2D                                       NewValue;                                                //  0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoVec2ParameterSource_GetParameter_Params
    {
    public:
        CoreUObject::FVector2D                                       ReturnValue;                                             //  0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoVec2ParameterSource_EndModify_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoVec2ParameterSource_BeginModify_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGizmoBaseComponent_UpdateWorldLocalState_Params
    {
    public:
        bool                                                         bWorldIn;                                                //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UGizmoBaseComponent_UpdateHoverState_Params
    {
    public:
        bool                                                         bHoveringIn;                                             //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoTransformSource_SetTransform_Params
    {
    public:
        CoreUObject::FTransform                                      NewTransform;                                            //  0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoTransformSource_GetTransform_Params
    {
    public:
        CoreUObject::FTransform                                      ReturnValue;                                             //  0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoAxisSource_HasTangentVectors_Params
    {
    public:
        bool                                                         ReturnValue;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoAxisSource_GetTangentVectors_Params
    {
    public:
        CoreUObject::FVector                                         TangentXOut;                                             //  0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         TangentYOut;                                             //  0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoAxisSource_GetOrigin_Params
    {
    public:
        CoreUObject::FVector                                         ReturnValue;                                             //  0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoAxisSource_GetDirection_Params
    {
    public:
        CoreUObject::FVector                                         ReturnValue;                                             //  0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoClickTarget_UpdateInteractingState_Params
    {
    public:
        bool                                                         bInteracting;                                            //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoClickTarget_UpdateHoverState_Params
    {
    public:
        bool                                                         bHovering;                                               //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoClickMultiTarget_UpdateInteractingState_Params
    {
    public:
        bool                                                         bInteracting;                                            //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        int32_t                                                      InPartIdentifier;                                        //  0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoClickMultiTarget_UpdateHoverState_Params
    {
    public:
        bool                                                         bHovering;                                               //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0001[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        int32_t                                                      InPartIdentifier;                                        //  0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoClickMultiTarget_UpdateHittableState_Params
    {
    public:
        bool                                                         bHittable;                                               //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0002[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        int32_t                                                      InPartIdentifier;                                        //  0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IGizmoRenderMultiTarget_UpdateVisibilityState_Params
    {
    public:
        bool                                                         bVisible;                                                //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        int32_t                                                      InPartIdentifier;                                        //  0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
