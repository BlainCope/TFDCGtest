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
#include "M1Data_FM1TemplateId.h"
#include "M1Data_FM1MapDataLink.h"
#include "BasicTypes_FName.h"
#include "Engine_FTableRowBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1WorldMissionData
     * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
     */
    struct FM1WorldMissionData : public Engine::FTableRowBase
    {
    public:
        M1Data::FM1TemplateId                                        TemplateId;                                              //  Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1Data::FM1MapDataLink                                       MapId;                                                   //  Edit, NativeAccessSpecifierPublic
        BasicTypes::FName                                            EnterWorldMissionToast;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
