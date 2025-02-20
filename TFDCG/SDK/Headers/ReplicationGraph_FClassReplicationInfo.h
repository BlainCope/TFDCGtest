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

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ReplicationGraph
{
    /**
     * ScriptStruct /Script/ReplicationGraph.ClassReplicationInfo
     * Size -> 0x0070
     */
    struct FClassReplicationInfo
    {
    public:
        float                                                        DistancePriorityScale;                                   //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        StarvationPriorityScale;                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AccumulatedNetPriorityBias;                              //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint16_t                                                     ReplicationPeriodFrame;                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint16_t                                                     FastPath_ReplicationPeriodFrame;                         //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint16_t                                                     ActorChannelFrameTimeout;                                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x56];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        CullDistance;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        float                                                        CullDistanceSquared;                                     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
