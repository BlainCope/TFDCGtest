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
#include "CoreUObject_FVector2D.h"
#include "CoreUObject_FBox2D.h"
#include "Engine_FEquirectProps.h"
#include "Engine_ENUMS.h"
#include "Engine_USceneComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UTexture; };
namespace CG::Engine { class UStereoLayerShape; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.StereoLayerComponent
     * Size -> 0x00F0 (FullSize[0x02E0] - InheritedSize[0x01F0])
     */
    class UStereoLayerComponent : public Engine::USceneComponent
    {
    public:
        bool                                                         bLiveTexture : 1;                                        //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bSupportsDepth : 1;                                      //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bNoAlphaChannel : 1;                                     //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTexture*                                            Texture;                                                 //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UTexture*                                            LeftTexture;                                             //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bQuadPreserveTextureRatio : 1;                           //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector2D                                       QuadSize;                                                //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FBox2D                                          UVRect;                                                  //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
        float                                                        CylinderRadius;                                          //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        CylinderOverlayArc;                                      //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      CylinderHeight;                                          //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::FEquirectProps                                       EquirectProps;                                           //  Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected
        Engine::EStereoLayerType                                     StereoLayerType;                                         //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::EStereoLayerShape                                    StereoLayerShape;                                        //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UStereoLayerShape*                                   Shape;                                                   //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      Priority;                                                //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0003[0x54];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetUVRect(const CoreUObject::FBox2D& InUVRect);
        void SetTexture(Engine::UTexture* InTexture);
        void SetQuadSize(const CoreUObject::FVector2D& InQuadSize);
        void SetPriority(int32_t InPriority);
        void SetLeftTexture(Engine::UTexture* InTexture);
        void SetEquirectProps(const Engine::FEquirectProps& InScaleBiases);
        void MarkTextureForUpdate();
        CoreUObject::FBox2D GetUVRect();
        Engine::UTexture* GetTexture();
        CoreUObject::FVector2D GetQuadSize();
        int32_t GetPriority();
        Engine::UTexture* GetLeftTexture();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.StereoLayerComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
