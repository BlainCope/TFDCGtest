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
#include "BasicTypes_TArray.h"
#include "CoreUObject_FVector2D.h"
#include "Paper2D_FPaperSpriteSocket.h"
#include "Paper2D_ENUMS.h"
#include "CoreUObject_FVector4.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UTexture; };
namespace CG::Engine { class UTexture2D; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::Engine { class UBodySetup; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Paper2D
{
    /**
     * Class /Script/Paper2D.PaperSprite
     * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
     */
    class UPaperSprite : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::UTexture*>                        AdditionalSourceTextures;                                //  Edit, ZeroConstructor, AssetRegistrySearchable, Protected, UObjectWrapper, NativeAccessSpecifierProtected
        CoreUObject::FVector2D                                       BakedSourceUV;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FVector2D                                       BakedSourceDimension;                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UTexture2D*                                          BakedSourceTexture;                                      //  ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UMaterialInterface*                                  DefaultMaterial;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UMaterialInterface*                                  AlternateMaterial;                                       //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<Paper2D::FPaperSpriteSocket>              Sockets;                                                 //  Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
        Paper2D::ESpriteCollisionMode                                SpriteCollisionDomain;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        PixelsPerUnrealUnit;                                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UBodySetup*                                          BodySetup;                                               //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      AlternateMaterialSplitIndex;                             //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<CoreUObject::FVector4>                    BakedRenderData;                                         //  ZeroConstructor, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Paper2D.PaperSprite");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
