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
#include "BasicTypes_TSoftObjectPtr.h"
#include "Engine_USkeletalMesh.h"
#include "Engine_UMaterialInterface.h"
#include "BasicTypes_TSoftClassPtr.h"
#include "Engine_UAnimInstance.h"
#include "Engine_UAnimSequence.h"
#include "M1_UM1CustomizingDataAsset.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1CustomizingGrapplingHookDataAsset
     * Size -> 0x0120 (FullSize[0x0158] - InheritedSize[0x0038])
     */
    class UM1CustomizingGrapplingHookDataAsset : public M1::UM1CustomizingDataAsset
    {
    public:
        BasicTypes::TSoftObjectPtr<Engine::USkeletalMesh>            WireCasterMesh;                                          //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftObjectPtr<Engine::UMaterialInterface>       WireMaterial;                                            //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftObjectPtr<Engine::USkeletalMesh>            HookMesh;                                                //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftClassPtr<Engine::UAnimInstance>             AnimClass;                                               //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftObjectPtr<Engine::UAnimSequence>            HookStartAnimation;                                      //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0004[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftObjectPtr<Engine::UAnimSequence>            HookLoopAnimation;                                       //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0005[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1CustomizingGrapplingHookDataAsset");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
