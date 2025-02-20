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
#include "GameplayCameras_FROscillator.h"
#include "GameplayCameras_FVOscillator.h"
#include "GameplayCameras_FFOscillator.h"
#include "Engine_UCameraShakeBase.h"
#include "Engine_ENUMS.h"
#include "CoreUObject_FRotator.h"
#include "Engine_FMinimalViewInfo.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::TemplateSequence { class UCameraAnimationSequence; };
namespace CG::TemplateSequence { class USequenceCameraShakePattern; };
namespace CG::Engine { class APlayerCameraManager; };
namespace CG::GameplayCameras { class ULegacyCameraShake; };
namespace CG::Engine { class UCameraShakeSourceComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::GameplayCameras
{
    /**
     * Class /Script/GameplayCameras.LegacyCameraShake
     * Size -> 0x00F4 (FullSize[0x01A0] - InheritedSize[0x00AC])
     */
    class ULegacyCameraShake : public Engine::UCameraShakeBase
    {
    public:
        float                                                        OscillationBlendInTime;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        OscillationBlendOutTime;                                 //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        GameplayCameras::FROscillator                                RotOscillation;                                          //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        GameplayCameras::FVOscillator                                LocOscillation;                                          //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        GameplayCameras::FFOscillator                                FOVOscillation;                                          //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        float                                                        AnimPlayRate;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AnimScale;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AnimBlendInTime;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AnimBlendOutTime;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        RandomAnimSegmentDuration;                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        TemplateSequence::UCameraAnimationSequence*                  AnimSequence;                                            //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRandomAnimSegment : 1;                                  //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        OscillatorTimeRemaining;                                 //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x38];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        TemplateSequence::USequenceCameraShakePattern*               SequenceShakePattern;                                    //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0003[0x30];                                  //  MISSED OFFSET (PADDING)

    public:
        GameplayCameras::ULegacyCameraShake* STATIC_StartLegacyCameraShakeFromSource(Engine::APlayerCameraManager* PlayerCameraManager, GameplayCameras::ULegacyCameraShake* ShakeClass, Engine::UCameraShakeSourceComponent* SourceComponent, float Scale, Engine::ECameraShakePlaySpace PlaySpace, const CoreUObject::FRotator& UserPlaySpaceRot);
        GameplayCameras::ULegacyCameraShake* STATIC_StartLegacyCameraShake(Engine::APlayerCameraManager* PlayerCameraManager, GameplayCameras::ULegacyCameraShake* ShakeClass, float Scale, Engine::ECameraShakePlaySpace PlaySpace, const CoreUObject::FRotator& UserPlaySpaceRot);
        void ReceiveStopShake(bool bImmediately);
        void ReceivePlayShake(float Scale);
        bool ReceiveIsFinished();
        void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, const Engine::FMinimalViewInfo& POV, Engine::FMinimalViewInfo* ModifiedPOV);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/GameplayCameras.LegacyCameraShake");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
