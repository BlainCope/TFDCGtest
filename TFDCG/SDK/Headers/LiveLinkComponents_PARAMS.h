#pragma once
#pragma warning(disable: 4267)

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
#include "LiveLinkInterface_FLiveLinkSubjectRepresentation.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LiveLinkComponents
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class ULiveLinkComponentController_SetSubjectRepresentation_Params
    {
    public:
        LiveLinkInterface::FLiveLinkSubjectRepresentation            InSubjectRepresentation;                                 //  0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class ULiveLinkComponentController_GetSubjectRepresentation_Params
    {
    public:
        LiveLinkInterface::FLiveLinkSubjectRepresentation            ReturnValue;                                             //  0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
