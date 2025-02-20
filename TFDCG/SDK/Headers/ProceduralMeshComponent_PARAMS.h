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
#include "CoreUObject_FVector.h"
#include "CoreUObject_FVector2D.h"
#include "CoreUObject_FLinearColor.h"
#include "ProceduralMeshComponent_FProcMeshTangent.h"
#include "CoreUObject_FColor.h"
#include "ProceduralMeshComponent_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::ProceduralMeshComponent { class UProceduralMeshComponent; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::Engine { class UStaticMesh; };
namespace CG::Engine { class UStaticMeshComponent; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ProceduralMeshComponent
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params
    {
    public:
        int32_t                                                      SectionIndex;                                            //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<CoreUObject::FVector>                     Vertices;                                                //  0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector>                     Normals;                                                 //  0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UV0;                                                     //  0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UV1;                                                     //  0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UV2;                                                     //  0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UV3;                                                     //  0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FLinearColor>                VertexColors;                                            //  0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<ProceduralMeshComponent::FProcMeshTangent> Tangents;                                                //  0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        bool                                                         bSRGBConversion;                                         //  0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UProceduralMeshComponent_UpdateMeshSection_Params
    {
    public:
        int32_t                                                      SectionIndex;                                            //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0001[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<CoreUObject::FVector>                     Vertices;                                                //  0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector>                     Normals;                                                 //  0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UV0;                                                     //  0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FColor>                      VertexColors;                                            //  0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<ProceduralMeshComponent::FProcMeshTangent> Tangents;                                                //  0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UProceduralMeshComponent_SetMeshSectionVisible_Params
    {
    public:
        int32_t                                                      SectionIndex;                                            //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bNewVisibility;                                          //  0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UProceduralMeshComponent_IsMeshSectionVisible_Params
    {
    public:
        int32_t                                                      SectionIndex;                                            //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UProceduralMeshComponent_GetNumSections_Params
    {
    public:
        int32_t                                                      ReturnValue;                                             //  0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UProceduralMeshComponent_CreateMeshSection_LinearColor_Params
    {
    public:
        int32_t                                                      SectionIndex;                                            //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0002[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<CoreUObject::FVector>                     Vertices;                                                //  0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<int32_t>                                  Triangles;                                               //  0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector>                     Normals;                                                 //  0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UV0;                                                     //  0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UV1;                                                     //  0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UV2;                                                     //  0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UV3;                                                     //  0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FLinearColor>                VertexColors;                                            //  0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<ProceduralMeshComponent::FProcMeshTangent> Tangents;                                                //  0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        bool                                                         bCreateCollision;                                        //  0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bSRGBConversion;                                         //  0x0099(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UProceduralMeshComponent_CreateMeshSection_Params
    {
    public:
        int32_t                                                      SectionIndex;                                            //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0003[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<CoreUObject::FVector>                     Vertices;                                                //  0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<int32_t>                                  Triangles;                                               //  0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector>                     Normals;                                                 //  0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UV0;                                                     //  0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FColor>                      VertexColors;                                            //  0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<ProceduralMeshComponent::FProcMeshTangent> Tangents;                                                //  0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        bool                                                         bCreateCollision;                                        //  0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UProceduralMeshComponent_ClearMeshSection_Params
    {
    public:
        int32_t                                                      SectionIndex;                                            //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UProceduralMeshComponent_ClearCollisionConvexMeshes_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UProceduralMeshComponent_ClearAllMeshSections_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UProceduralMeshComponent_AddCollisionConvexMesh_Params
    {
    public:
        BasicTypes::TArray<CoreUObject::FVector>                     ConvexVerts;                                             //  0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UKismetProceduralMeshLibrary_SliceProceduralMesh_Params
    {
    public:
        ProceduralMeshComponent::UProceduralMeshComponent*           InProcMesh;                                              //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         PlanePosition;                                           //  0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FVector                                         PlaneNormal;                                             //  0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bCreateOtherHalf;                                        //  0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0000[0x7];                                   //  0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        ProceduralMeshComponent::UProceduralMeshComponent*           OutOtherHalfProcMesh;                                    //  0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        ProceduralMeshComponent::EProcMeshSliceCapOption             CapOption;                                               //  0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0001[0x7];                                   //  0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        Engine::UMaterialInterface*                                  CapMaterial;                                             //  0x0038(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params
    {
    public:
        Engine::UStaticMesh*                                         InMesh;                                                  //  0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      LODIndex;                                                //  0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      SectionIndex;                                            //  0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector>                     Vertices;                                                //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<int32_t>                                  Triangles;                                               //  0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector>                     Normals;                                                 //  0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UVs;                                                     //  0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<ProceduralMeshComponent::FProcMeshTangent> Tangents;                                                //  0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params
    {
    public:
        ProceduralMeshComponent::UProceduralMeshComponent*           InProcMesh;                                              //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      SectionIndex;                                            //  0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0002[0x4];                                   //  0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<CoreUObject::FVector>                     Vertices;                                                //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<int32_t>                                  Triangles;                                               //  0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector>                     Normals;                                                 //  0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UVs;                                                     //  0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<ProceduralMeshComponent::FProcMeshTangent> Tangents;                                                //  0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UKismetProceduralMeshLibrary_GenerateBoxMesh_Params
    {
    public:
        CoreUObject::FVector                                         BoxRadius;                                               //  0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0003[0x4];                                   //  0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<CoreUObject::FVector>                     Vertices;                                                //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<int32_t>                                  Triangles;                                               //  0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector>                     Normals;                                                 //  0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UVs;                                                     //  0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<ProceduralMeshComponent::FProcMeshTangent> Tangents;                                                //  0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params
    {
    public:
        int32_t                                                      NumX;                                                    //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      NumY;                                                    //  0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<int32_t>                                  Triangles;                                               //  0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector>                     Vertices;                                                //  0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UVs;                                                     //  0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        float                                                        GridSpacing;                                             //  0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params
    {
    public:
        int32_t                                                      NumX;                                                    //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      NumY;                                                    //  0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bWinding;                                                //  0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0004[0x7];                                   //  0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<int32_t>                                  Triangles;                                               //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params
    {
    public:
        int32_t                                                      NumX;                                                    //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      NumY;                                                    //  0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<int32_t>                                  Triangles;                                               //  0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector>                     Vertices;                                                //  0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UVs;                                                     //  0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UV1s;                                                    //  0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        float                                                        GridSpacing;                                             //  0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params
    {
    public:
        Engine::UStaticMeshComponent*                                StaticMeshComponent;                                     //  0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      LODIndex;                                                //  0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0005[0x4];                                   //  0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        ProceduralMeshComponent::UProceduralMeshComponent*           ProcMeshComponent;                                       //  0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bCreateCollision;                                        //  0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params
    {
    public:
        BasicTypes::TArray<int32_t>                                  Triangles;                                               //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        int32_t                                                      Vert0;                                                   //  0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      Vert1;                                                   //  0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      Vert2;                                                   //  0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      Vert3;                                                   //  0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params
    {
    public:
        BasicTypes::TArray<CoreUObject::FVector>                     Vertices;                                                //  0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<int32_t>                                  Triangles;                                               //  0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector2D>                   UVs;                                                     //  0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FVector>                     Normals;                                                 //  0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<ProceduralMeshComponent::FProcMeshTangent> Tangents;                                                //  0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
