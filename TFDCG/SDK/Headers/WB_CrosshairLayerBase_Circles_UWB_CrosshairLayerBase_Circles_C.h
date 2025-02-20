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
#include "Engine_FPointerToUberGraphFrame.h"
#include "WB_CrosshairLayerBase_UWB_CrosshairLayerBase_C.h"
#include "SlateCore_FGeometry.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UImage; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::WB_CrosshairLayerBase_Circles
{
    /**
     * WidgetBlueprintGeneratedClass /Game/UI/Game/Crosshair/UMG/CrosshairLayerBaseClasses/WB_CrosshairLayerBase_Circles.WB_CrosshairLayerBase_Circles_C
     * Size -> 0x0041 (FullSize[0x0829] - InheritedSize[0x07E8])
     */
    class UWB_CrosshairLayerBase_Circles_C : public WB_CrosshairLayerBase::UWB_CrosshairLayerBase_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UImage*                                                 Image_16;                                                //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        double                                                       _arcAngle;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       effectiveRadius;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       _radius;                                                 //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       _recoilResponsePercentageradius;                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       effectiveThickness;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                       _thickness;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         _fill;                                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void getImagePlane(UMG::UImage** Image);
        void GetMaterial(Engine::UMaterialInterface** Material);
        void PreRender();
        void Render();
        void Tick(const SlateCore::FGeometry& MyGeometry, float InDeltaTime);
        void ExecuteUbergraph_WB_CrosshairLayerBase_Circles(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/UI/Game/Crosshair/UMG/CrosshairLayerBaseClasses/WB_CrosshairLayerBase_Circles.WB_CrosshairLayerBase_Circles_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
