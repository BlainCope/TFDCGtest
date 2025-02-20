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
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "CoreUObject_UObject.h"
#include "CoreUObject_FDateTime.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MovieRenderPipelineCore { class UMoviePipelineCustomTimeStep; };
namespace CG::Engine { class UEngineCustomTimeStep; };
namespace CG::LevelSequence { class ULevelSequence; };
namespace CG::LevelSequence { class ALevelSequenceActor; };
namespace CG::MovieRenderPipelineCore { class UMovieRenderDebugWidget; };
namespace CG::Engine { class UTexture; };
namespace CG::MovieRenderPipelineCore { class UMoviePipelineExecutorJob; };
namespace CG::MovieRenderPipelineCore { class UMoviePipelinePrimaryConfig; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieRenderPipelineCore
{
    /**
     * Class /Script/MovieRenderPipelineCore.MoviePipeline
     * Size -> 0x03B8 (FullSize[0x03E0] - InheritedSize[0x0028])
     */
    class UMoviePipeline : public CoreUObject::UObject
    {
    public:
        BasicTypes::UMulticastInlineDelegate                         OnMoviePipelineFinishedDelegate;                         //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnMoviePipelineWorkFinishedDelegate;                     //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnMoviePipelineShotWorkFinishedDelegate;                 //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        MovieRenderPipelineCore::UMoviePipelineCustomTimeStep*       CustomTimeStep;                                          //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UEngineCustomTimeStep*                               CachedPrevCustomTimeStep;                                //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        LevelSequence::ULevelSequence*                               TargetSequence;                                          //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        LevelSequence::ALevelSequenceActor*                          LevelSequenceActor;                                      //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        MovieRenderPipelineCore::UMovieRenderDebugWidget*            DebugWidget;                                             //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UTexture*                                            PreviewTexture;                                          //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0004[0x258];                                 //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MovieRenderPipelineCore::UMovieRenderDebugWidget*            DebugWidgetClass;                                        //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MovieRenderPipelineCore::UMoviePipelineExecutorJob*          CurrentJob;                                              //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0005[0xE0];                                  //  MISSED OFFSET (PADDING)

    public:
        void Shutdown(bool bError);
        void SetInitializationTime(const CoreUObject::FDateTime& InDateTime);
        void RequestShutdown(bool bIsError);
        void OnMoviePipelineFinishedImpl();
        bool IsShutdownRequested();
        void Initialize(MovieRenderPipelineCore::UMoviePipelineExecutorJob* InJob);
        Engine::UTexture* GetPreviewTexture();
        MovieRenderPipelineCore::UMoviePipelinePrimaryConfig* GetPipelinePrimaryConfig();
        MovieRenderPipelineCore::UMoviePipelinePrimaryConfig* GetPipelineMasterConfig();
        CoreUObject::FDateTime GetInitializationTime();
        MovieRenderPipelineCore::UMoviePipelineExecutorJob* GetCurrentJob();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieRenderPipelineCore.MoviePipeline");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
