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
#include "BasicTypes_TArray.h"
#include "CustomMeshComponent_FCustomMeshTriangle.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CustomMeshComponent
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UCustomMeshComponent_SetCustomMeshTriangles_Params
    {
    public:
        BasicTypes::TArray<CustomMeshComponent::FCustomMeshTriangle> Triangles;                                               //  0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UCustomMeshComponent_ClearCustomMeshTriangles_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UCustomMeshComponent_AddCustomMeshTriangles_Params
    {
    public:
        BasicTypes::TArray<CustomMeshComponent::FCustomMeshTriangle> Triangles;                                               //  0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
