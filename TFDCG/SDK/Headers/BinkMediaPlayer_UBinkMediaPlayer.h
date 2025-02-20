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
#include "CoreUObject_FVector2D.h"
#include "BasicTypes_FString.h"
#include "BinkMediaPlayer_ENUMS.h"
#include "CoreUObject_UObject.h"
#include "CoreUObject_FTimespan.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UTexture; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BinkMediaPlayer
{
    /**
     * Class /Script/BinkMediaPlayer.BinkMediaPlayer
     * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
     */
    class UBinkMediaPlayer : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UMulticastInlineDelegate                         OnMediaClosed;                                           //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnMediaOpened;                                           //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnMediaReachedEnd;                                       //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnPlaybackSuspended;                                     //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        bool                                                         Looping : 1;                                             //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         StartImmediately : 1;                                    //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         DelayedOpen : 1;                                         //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0005[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector2D                                       BinkDestinationUpperLeft;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector2D                                       BinkDestinationLowerRight;                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0006[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          URL;                                                     //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BinkMediaPlayer::EBinkMediaPlayerBinkBufferModes             BinkBufferMode;                                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BinkMediaPlayer::EBinkMediaPlayerBinkSoundTrack              BinkSoundTrack;                                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0007[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      BinkSoundTrackStart;                                     //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BinkMediaPlayer::EBinkMediaPlayerBinkDrawStyle               BinkDrawStyle;                                           //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0008[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      BinkLayerDepth;                                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0009[0x58];                                  //  MISSED OFFSET (PADDING)

    public:
        bool SupportsSeeking();
        bool SupportsScrubbing();
        bool SupportsRate(float Rate, bool Unthinned);
        void Stop();
        void SetVolume(float Rate);
        bool SetRate(float Rate);
        bool SetLooping(bool InLooping);
        bool Seek(const CoreUObject::FTimespan& InTime);
        bool Rewind();
        bool Play();
        bool Pause();
        bool OpenUrl(const BasicTypes::FString& NewUrl);
        bool IsStopped();
        bool IsPlaying();
        bool IsPaused();
        bool IsLooping();
        bool IsInitialized();
        BasicTypes::FString GetUrl();
        CoreUObject::FTimespan GetTime();
        float GetRate();
        CoreUObject::FTimespan GetDuration();
        void Draw(Engine::UTexture* Texture, bool tonemap, int32_t out_nits, float Alpha, bool srgb_decode, bool hdr);
        void CloseUrl();
        bool CanPlay();
        bool CanPause();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/BinkMediaPlayer.BinkMediaPlayer");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
