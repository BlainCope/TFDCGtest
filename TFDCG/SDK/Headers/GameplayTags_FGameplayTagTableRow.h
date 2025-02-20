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
#include "BasicTypes_FName.h"
#include "BasicTypes_FString.h"
#include "Engine_FTableRowBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::GameplayTags
{
    /**
     * ScriptStruct /Script/GameplayTags.GameplayTagTableRow
     * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
     */
    struct FGameplayTagTableRow : public Engine::FTableRowBase
    {
    public:
        BasicTypes::FName                                            Tag;                                                     //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          DevComment;                                              //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
