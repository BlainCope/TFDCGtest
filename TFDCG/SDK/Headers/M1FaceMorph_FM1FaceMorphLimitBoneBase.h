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
#include "Engine_FBoneSocketTarget.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"
#include "M1FaceMorph_FM1FaceMorphLimitBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1FaceMorph
{
    /**
     * ScriptStruct /Script/M1FaceMorph.M1FaceMorphLimitBoneBase
     * Size -> 0x0078
     */
    struct FM1FaceMorphLimitBoneBase : public M1FaceMorph::FM1FaceMorphLimitBase
    {
    public:
        Engine::FBoneSocketTarget                                    bone;                                                    //  Edit, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         OffsetLocation;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FRotator                                        OffsetRotation;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
