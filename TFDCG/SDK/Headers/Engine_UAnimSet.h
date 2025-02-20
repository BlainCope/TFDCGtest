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
#include "Engine_FAnimSetMeshLinkup.h"
#include "CoreUObject_UObject.h"

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
     * Class /Script/Engine.AnimSet
     * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
     */
    class UAnimSet : public CoreUObject::UObject
    {
    public:
        bool                                                         bAnimRotationOnly : 1;                                   //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FName>                        TrackBoneNames;                                          //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FAnimSetMeshLinkup>               LinkupCache;                                             //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        BasicTypes::TArray<uint8_t>                                  BoneUseAnimTranslation;                                  //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        BasicTypes::TArray<uint8_t>                                  ForceUseMeshTranslation;                                 //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        BasicTypes::TArray<BasicTypes::FName>                        UseTranslationBoneNames;                                 //  Edit, ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TArray<BasicTypes::FName>                        ForceMeshTranslationBoneNames;                           //  Edit, ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::FName                                            PreviewSkelMeshName;                                     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            BestRatioSkelMeshName;                                   //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x50];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.AnimSet");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
