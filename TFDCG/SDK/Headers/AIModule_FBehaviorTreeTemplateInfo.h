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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AIModule { class UBehaviorTree; };
namespace CG::AIModule { class UBTCompositeNode; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AIModule
{
    /**
     * ScriptStruct /Script/AIModule.BehaviorTreeTemplateInfo
     * Size -> 0x0018
     */
    struct FBehaviorTreeTemplateInfo
    {
    public:
        AIModule::UBehaviorTree*                                     Asset;                                                   //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AIModule::UBTCompositeNode*                                  Template;                                                //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
