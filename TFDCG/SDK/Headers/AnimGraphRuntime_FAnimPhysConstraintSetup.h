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
#include "AnimGraphRuntime_ENUMS.h"
#include "CoreUObject_FVector.h"
#include "Engine_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * ScriptStruct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
     * Size -> 0x0048
     */
    struct FAnimPhysConstraintSetup
    {
    public:
        AnimGraphRuntime::EAnimPhysLinearConstraintType              LinearXLimitType;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AnimGraphRuntime::EAnimPhysLinearConstraintType              LinearYLimitType;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AnimGraphRuntime::EAnimPhysLinearConstraintType              LinearZLimitType;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         LinearAxesMin;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         LinearAxesMax;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AnimGraphRuntime::EAnimPhysAngularConstraintType             AngularConstraintType;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EAnimPhysTwistAxis                                   TwistAxis;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EAnimPhysTwistAxis                                   AngularTargetAxis;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ConeAngle;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         AngularLimitsMin;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         AngularLimitsMax;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         AngularTarget;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
