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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AIModule { class UBlackboardKeyType; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AIModule
{
    /**
     * ScriptStruct /Script/AIModule.BlackboardEntry
     * Size -> 0x0018
     */
    struct FBlackboardEntry
    {
    public:
        BasicTypes::FName                                            EntryName;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AIModule::UBlackboardKeyType*                                KeyType;                                                 //  Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bInstanceSynced : 1;                                     //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
