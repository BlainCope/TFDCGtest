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

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1CustomizePaintInventory
     * Size -> 0x000C
     */
    struct FM1CustomizePaintInventory
    {
    public:
        M1Data::FM1TemplateId                                        SkinTid;                                                 //  Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::FM1TemplateId                                        PaintTid;                                                //  Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      Slot;                                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
