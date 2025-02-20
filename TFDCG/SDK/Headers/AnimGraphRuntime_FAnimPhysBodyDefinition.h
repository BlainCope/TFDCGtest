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
#include "Engine_FBoneReference.h"
#include "CoreUObject_FVector.h"
#include "AnimGraphRuntime_FAnimPhysConstraintSetup.h"
#include "Engine_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * ScriptStruct /Script/AnimGraphRuntime.AnimPhysBodyDefinition
     * Size -> 0x0078
     */
    struct FAnimPhysBodyDefinition
    {
    public:
        Engine::FBoneReference                                       BoundBone;                                               //  Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         BoxExtents;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         LocalJointOffset;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AnimGraphRuntime::FAnimPhysConstraintSetup                   ConstraintSetup;                                         //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Engine::EAnimPhysCollisionType                               CollisionType;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        SphereCollisionRadius;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
