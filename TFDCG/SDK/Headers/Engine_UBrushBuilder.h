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
#include "BasicTypes_FString.h"
#include "BasicTypes_TArray.h"
#include "CoreUObject_FVector.h"
#include "Engine_FBuilderPoly.h"
#include "BasicTypes_FName.h"
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
     * Class /Script/Engine.BrushBuilder
     * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
     */
    class UBrushBuilder : public CoreUObject::UObject
    {
    public:
        BasicTypes::FString                                          BitmapFilename;                                          //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          Tooltip;                                                 //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         NotifyBadParams : 1;                                     //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<CoreUObject::FVector>                     Vertices;                                                //  ZeroConstructor, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<Engine::FBuilderPoly>                     Polys;                                                   //  ZeroConstructor, Protected, NativeAccessSpecifierProtected
        BasicTypes::FName                                            Layer;                                                   //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         MergeCoplanars : 1;                                      //  BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.BrushBuilder");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
