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
#include "M1Data_ENUMS.h"
#include "M1Data_FM1TemplateId.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1CodexTrackingData
     * Size -> 0x000C
     */
    struct FM1CodexTrackingData
    {
    public:
        M1Data::EM1CodexTrackingType                                 TrackingType;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int8_t                                                       SlotIndex;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1Data::FM1TemplateId                                        TrackingTid;                                             //  Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::FM1TemplateId                                        ResearchMaterial;                                        //  Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
