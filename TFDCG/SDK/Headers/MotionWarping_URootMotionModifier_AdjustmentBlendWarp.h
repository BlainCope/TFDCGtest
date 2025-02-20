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
#include "BasicTypes_FName.h"
#include "CoreUObject_FTransform.h"
#include "Engine_FAnimSequenceTrackContainer.h"
#include "MotionWarping_URootMotionModifier_Warp.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MotionWarping
{
    /**
     * Class /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp
     * Size -> 0x00D0 (FullSize[0x0260] - InheritedSize[0x0190])
     */
    class URootMotionModifier_AdjustmentBlendWarp : public MotionWarping::URootMotionModifier_Warp
    {
    public:
        bool                                                         bWarpIKBones;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FName>                        IKBones;                                                 //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FTransform                                      CachedMeshTransform;                                     //  IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FTransform                                      CachedMeshRelativeTransform;                             //  IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FTransform                                      CachedRootMotion;                                        //  IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::FAnimSequenceTrackContainer                          Result;                                                  //  Protected, NativeAccessSpecifierProtected

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
