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
#include "CoreUObject_FTransform.h"
#include "LiveLinkInterface_FLiveLinkBaseFrameData.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LiveLinkInterface
{
    /**
     * ScriptStruct /Script/LiveLinkInterface.LiveLinkTransformFrameData
     * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
     */
    struct FLiveLinkTransformFrameData : public LiveLinkInterface::FLiveLinkBaseFrameData
    {
    public:
        CoreUObject::FTransform                                      Transform;                                               //  Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
