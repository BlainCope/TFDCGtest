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
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FString.h"
#include "Engine_UBookmarkBase.h"

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
     * Class /Script/Engine.BookMark
     * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
     */
    class UBookMark : public Engine::UBookmarkBase
    {
    public:
        CoreUObject::FVector                                         Location;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FRotator                                        Rotation;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FString>                      HiddenLevels;                                            //  Edit, ZeroConstructor, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.BookMark");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
