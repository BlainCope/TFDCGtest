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

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AkAudio
{
    // --------------------------------------------------
    // # Enums
    // --------------------------------------------------
    /**
     * Enum /Script/AkAudio.EAkResult
     */
    enum class EAkResult : uint8_t
    {
        NotImplemented              = 0,
        Success                     = 1,
        Fail                        = 2,
        PartialSuccess              = 3,
        NotCompatible               = 4,
        AlreadyConnected            = 5,
        InvalidFile                 = 6,
        AudioFileHeaderTooLarge     = 7,
        MaxReached                  = 8,
        InvalidID                   = 9,
        IDNotFound                  = 10,
        InvalidInstanceID           = 11,
        NoMoreData                  = 12,
        InvalidStateGroup           = 13,
        ChildAlreadyHasAParent      = 14,
        InvalidLanguage             = 15,
        CannotAddItseflAsAChild     = 16,
        InvalidParameter            = 17,
        ElementAlreadyInList        = 18,
        PathNotFound                = 19,
        PathNoVertices              = 20,
        PathNotRunning              = 21,
        PathNotPaused               = 22,
        PathNodeAlreadyInList       = 23,
        PathNodeNotInList           = 24,
        DataNeeded                  = 25,
        NoDataNeeded                = 26,
        DataReady                   = 27,
        NoDataReady                 = 28,
        InsufficientMemory          = 29,
        Cancelled                   = 30,
        UnknownBankID               = 31,
        BankReadError               = 32,
        InvalidSwitchType           = 33,
        FormatNotReady              = 34,
        WrongBankVersion            = 35,
        FileNotFound                = 36,
        DeviceNotReady              = 37,
        BankAlreadyLoaded           = 38,
        RenderedFX                  = 39,
        ProcessNeeded               = 40,
        ProcessDone                 = 41,
        MemManagerNotInitialized    = 42,
        StreamMgrNotInitialized     = 43,
        SSEInstructionsNotSupported = 44,
        Busy                        = 45,
        UnsupportedChannelConfig    = 46,
        PluginMediaNotAvailable     = 47,
        MustBeVirtualized           = 48,
        CommandTooLarge             = 49,
        RejectedByFilter            = 50,
        InvalidCustomPlatformName   = 51,
        DLLCannotLoad               = 52,
        DLLPathNotFound             = 53,
        NoJavaVM                    = 54,
        OpenSLError                 = 55,
        PluginNotRegistered         = 56,
        DataAlignmentError          = 57,
        MAX                         = 58
    };

    /**
     * Enum /Script/AkAudio.EAkCallbackType
     */
    enum class EAkCallbackType : uint8_t
    {
        EndOfEvent       = 0,
        Marker           = 1,
        Duration         = 2,
        Starvation       = 3,
        MusicPlayStarted = 4,
        MusicSyncBeat    = 5,
        MusicSyncBar     = 6,
        MusicSyncEntry   = 7,
        MusicSyncExit    = 8,
        MusicSyncGrid    = 9,
        MusicSyncUserCue = 10,
        MusicSyncPoint   = 11,
        MIDIEvent        = 12,
        MAX              = 13
    };

    /**
     * Enum /Script/AkAudio.EAkAndroidAudioAPI
     */
    enum class EAkAndroidAudioAPI : uint8_t
    {
        AAudio    = 0,
        OpenSL_ES = 1,
        MAX       = 2
    };

    /**
     * Enum /Script/AkAudio.EAkAudioSessionCategory
     */
    enum class EAkAudioSessionCategory : uint8_t
    {
        Ambient       = 0,
        SoloAmbient   = 1,
        PlayAndRecord = 2,
        MAX           = 3
    };

    /**
     * Enum /Script/AkAudio.EAkAudioSessionCategoryOptions
     */
    enum class EAkAudioSessionCategoryOptions : uint8_t
    {
        MixWithOthers    = 0,
        DuckOthers       = 1,
        AllowBluetooth   = 2,
        DefaultToSpeaker = 3,
        MAX              = 4
    };

    /**
     * Enum /Script/AkAudio.EAkAudioSessionMode
     */
    enum class EAkAudioSessionMode : uint8_t
    {
        Default        = 0,
        VoiceChat      = 1,
        GameChat       = 2,
        VideoRecording = 3,
        Measurement    = 4,
        MoviePlayback  = 5,
        VideoChat      = 6,
        MAX            = 7
    };

    /**
     * Enum /Script/AkAudio.EReflectionFilterBits
     */
    enum class EReflectionFilterBits : uint8_t
    {
        Wall    = 0,
        Ceiling = 1,
        Floor   = 2,
        MAX     = 3
    };

    /**
     * Enum /Script/AkAudio.EAkAudioContext
     */
    enum class EAkAudioContext : uint8_t
    {
        Foreign       = 0,
        GameplayAudio = 1,
        EditorAudio   = 2,
        AlwaysActive  = 3,
        MAX           = 4
    };

    /**
     * Enum /Script/AkAudio.PanningRule
     */
    enum class EPanningRule : uint8_t
    {
        PanningRulePanningRule_Speakers   = 0,
        PanningRulePanningRule_Headphones = 1,
        PanningRulePanningRule_MAX        = 2
    };

    /**
     * Enum /Script/AkAudio.AkAcousticPortalState
     */
    enum class EAkAcousticPortalState : uint8_t
    {
        AkAcousticPortalStateClosed                    = 0,
        AkAcousticPortalStateOpen                      = 1,
        AkAcousticPortalStateAkAcousticPortalState_MAX = 2
    };

    /**
     * Enum /Script/AkAudio.AkChannelConfiguration
     */
    enum class EAkChannelConfiguration : uint8_t
    {
        AkChannelConfigurationAk_Parent                  = 0,
        AkChannelConfigurationAk_MainMix                 = 1,
        AkChannelConfigurationAk_Passthrough             = 2,
        AkChannelConfigurationAk_LFE                     = 3,
        AkChannelConfigurationAK_Audio_Objects           = 4,
        AkChannelConfigurationAk_1                       = 5,
        AkChannelConfigurationAk_2                       = 6,
        AkChannelConfigurationAk_201                     = 7,
        AkChannelConfigurationAk_3                       = 8,
        AkChannelConfigurationAk_301                     = 9,
        AkChannelConfigurationAk_4                       = 10,
        AkChannelConfigurationAk_401                     = 11,
        AkChannelConfigurationAk_5                       = 12,
        AkChannelConfigurationAk_501                     = 13,
        AkChannelConfigurationAk_7                       = 14,
        AkChannelConfigurationAk_5_1                     = 15,
        AkChannelConfigurationAk_7_1                     = 16,
        AkChannelConfigurationAk_7_101                   = 17,
        AkChannelConfigurationAk_Auro_9                  = 18,
        AkChannelConfigurationAk_Auro_10                 = 19,
        AkChannelConfigurationAk_Auro_11                 = 20,
        AkChannelConfigurationAk_Auro_13                 = 21,
        AkChannelConfigurationAk_Ambisonics_1st_order    = 22,
        AkChannelConfigurationAk_Ambisonics_2nd_order    = 23,
        AkChannelConfigurationAk_Ambisonics_3rd_order    = 24,
        AkChannelConfigurationAk_Ambisonics_4th_order    = 25,
        AkChannelConfigurationAk_Ambisonics_5th_order    = 26,
        AkChannelConfigurationAkChannelConfiguration_MAX = 27
    };

    /**
     * Enum /Script/AkAudio.AkSpeakerConfiguration
     */
    enum class EAkSpeakerConfiguration : uint8_t
    {
        AkSpeakerConfigurationAk_Speaker_Front_Left          = 0,
        AkSpeakerConfigurationAk_Speaker_Front_Right         = 1,
        AkSpeakerConfigurationAk_Speaker_Front_Center        = 2,
        AkSpeakerConfigurationAk_Speaker_Low_Frequency       = 3,
        AkSpeakerConfigurationAk_Speaker_Back_Left           = 4,
        AkSpeakerConfigurationAk_Speaker_Back_Right          = 5,
        AkSpeakerConfigurationAk_Speaker_Back_Center         = 6,
        AkSpeakerConfigurationAk_Speaker_Side_Left           = 7,
        AkSpeakerConfigurationAk_Speaker_Side_Right          = 8,
        AkSpeakerConfigurationAk_Speaker_Top                 = 9,
        AkSpeakerConfigurationAk_Speaker_Height_Front_Left   = 10,
        AkSpeakerConfigurationAk_Speaker_Height_Front_Center = 11,
        AkSpeakerConfigurationAk_Speaker_Height_Front_Right  = 12,
        AkSpeakerConfigurationAk_Speaker_Height_Back_Left    = 13,
        AkSpeakerConfigurationAk_Speaker_Height_Back_Center  = 14,
        AkSpeakerConfigurationAk_Speaker_Height_Back_Right   = 15,
        AkSpeakerConfigurationAk_Speaker_MAX                 = 16
    };

    /**
     * Enum /Script/AkAudio.AkMultiPositionType
     */
    enum class EAkMultiPositionType : uint8_t
    {
        AkMultiPositionTypeSingleSource            = 0,
        AkMultiPositionTypeMultiSources            = 1,
        AkMultiPositionTypeMultiDirections         = 2,
        AkMultiPositionTypeAkMultiPositionType_MAX = 3
    };

    /**
     * Enum /Script/AkAudio.AkActionOnEventType
     */
    enum class EAkActionOnEventType : uint8_t
    {
        AkActionOnEventTypeStop                    = 0,
        AkActionOnEventTypePause                   = 1,
        AkActionOnEventTypeResume                  = 2,
        AkActionOnEventTypeBreak                   = 3,
        AkActionOnEventTypeReleaseEnvelope         = 4,
        AkActionOnEventTypeAkActionOnEventType_MAX = 5
    };

    /**
     * Enum /Script/AkAudio.EAkCurveInterpolation
     */
    enum class EAkCurveInterpolation : uint8_t
    {
        Log3          = 0,
        Sine          = 1,
        Log1          = 2,
        InvSCurve     = 3,
        Linear        = 4,
        SCurve        = 5,
        Exp1          = 6,
        SineRecip     = 7,
        Exp3          = 8,
        LastFadeCurve = 9,
        Constant      = 10,
        MAX           = 11
    };

    /**
     * Enum /Script/AkAudio.ERTPCValueType
     */
    enum class ERTPCValueType : uint8_t
    {
        Default     = 0,
        Global      = 1,
        GameObject  = 2,
        PlayingID   = 3,
        Unavailable = 4,
        MAX         = 5
    };

    /**
     * Enum /Script/AkAudio.EAkMidiEventType
     */
    enum class EAkMidiEventType : uint8_t
    {
        AkMidiEventTypeInvalid           = 0,
        AkMidiEventTypeNoteOff           = 1,
        AkMidiEventTypeNoteOn            = 2,
        AkMidiEventTypeNoteAftertouch    = 3,
        AkMidiEventTypeController        = 4,
        AkMidiEventTypeProgramChange     = 5,
        AkMidiEventTypeChannelAftertouch = 6,
        AkMidiEventTypePitchBend         = 7,
        AkMidiEventTypeSysex             = 8,
        AkMidiEventTypeEscape            = 9,
        AkMidiEventTypeMeta              = 10,
        MAX                              = 11
    };

    /**
     * Enum /Script/AkAudio.EAkMidiCcValues
     */
    enum class EAkMidiCcValues : uint8_t
    {
        AkMidiCcBankSelectCoarse  = 0,
        AkMidiCcModWheelCoarse    = 1,
        AkMidiCcBreathCtrlCoarse  = 2,
        AkMidiCcCtrl3Coarse       = 3,
        AkMidiCcFootPedalCoarse   = 4,
        AkMidiCcPortamentoCoarse  = 5,
        AkMidiCcDataEntryCoarse   = 6,
        AkMidiCcVolumeCoarse      = 7,
        AkMidiCcBalanceCoarse     = 8,
        AkMidiCcCtrl9Coarse       = 9,
        AkMidiCcPanPositionCoarse = 10,
        AkMidiCcExpressionCoarse  = 11,
        AkMidiCcEffectCtrl1Coarse = 12,
        AkMidiCcEffectCtrl2Coarse = 13,
        AkMidiCcCtrl14Coarse      = 14,
        AkMidiCcCtrl15Coarse      = 15,
        AkMidiCcGenSlider1        = 16,
        AkMidiCcGenSlider2        = 17,
        AkMidiCcGenSlider3        = 18,
        AkMidiCcGenSlider4        = 19,
        AkMidiCcCtrl20Coarse      = 20,
        AkMidiCcCtrl21Coarse      = 21,
        AkMidiCcCtrl22Coarse      = 22,
        AkMidiCcCtrl23Coarse      = 23,
        AkMidiCcCtrl24Coarse      = 24,
        AkMidiCcCtrl25Coarse      = 25,
        AkMidiCcCtrl26Coarse      = 26,
        AkMidiCcCtrl27Coarse      = 27,
        AkMidiCcCtrl28Coarse      = 28,
        AkMidiCcCtrl29Coarse      = 29,
        AkMidiCcCtrl30Coarse      = 30,
        AkMidiCcCtrl31Coarse      = 31,
        AkMidiCcBankSelectFine    = 32,
        AkMidiCcModWheelFine      = 33,
        AkMidiCcBreathCtrlFine    = 34,
        AkMidiCcCtrl3Fine         = 35,
        AkMidiCcFootPedalFine     = 36,
        AkMidiCcPortamentoFine    = 37,
        AkMidiCcDataEntryFine     = 38,
        AkMidiCcVolumeFine        = 39,
        AkMidiCcBalanceFine       = 40,
        AkMidiCcCtrl9Fine         = 41,
        AkMidiCcPanPositionFine   = 42,
        AkMidiCcExpressionFine    = 43,
        AkMidiCcEffectCtrl1Fine   = 44,
        AkMidiCcEffectCtrl2Fine   = 45,
        AkMidiCcCtrl14Fine        = 46,
        AkMidiCcCtrl15Fine        = 47,
        AkMidiCcCtrl20Fine        = 48,
        AkMidiCcCtrl21Fine        = 49,
        AkMidiCcCtrl22Fine        = 50,
        AkMidiCcCtrl23Fine        = 51,
        AkMidiCcCtrl24Fine        = 52,
        AkMidiCcCtrl25Fine        = 53,
        AkMidiCcCtrl26Fine        = 54,
        AkMidiCcCtrl27Fine        = 55,
        AkMidiCcCtrl28Fine        = 56,
        AkMidiCcCtrl29Fine        = 57,
        AkMidiCcCtrl30Fine        = 58,
        AkMidiCcCtrl31Fine        = 59,
        AkMidiCcHoldPedal         = 60,
        AkMidiCcPortamentoOnOff   = 61,
        AkMidiCcSustenutoPedal    = 62,
        AkMidiCcSoftPedal         = 63,
        AkMidiCcLegatoPedal       = 64,
        AkMidiCcHoldPedal2        = 65,
        AkMidiCcSoundVariation    = 66,
        AkMidiCcSoundTimbre       = 67,
        AkMidiCcSoundReleaseTime  = 68,
        AkMidiCcSoundAttackTime   = 69,
        AkMidiCcSoundBrightness   = 70,
        AkMidiCcSoundCtrl6        = 71,
        AkMidiCcSoundCtrl7        = 72,
        AkMidiCcSoundCtrl8        = 73,
        AkMidiCcSoundCtrl9        = 74,
        AkMidiCcSoundCtrl10       = 75,
        AkMidiCcGeneralButton1    = 76,
        AkMidiCcGeneralButton2    = 77,
        AkMidiCcGeneralButton3    = 78,
        AkMidiCcGeneralButton4    = 79,
        AkMidiCcReverbLevel       = 80,
        AkMidiCcTremoloLevel      = 81,
        AkMidiCcChorusLevel       = 82,
        AkMidiCcCelesteLevel      = 83,
        AkMidiCcPhaserLevel       = 84,
        AkMidiCcDataButtonP1      = 85,
        AkMidiCcDataButtonM1      = 86,
        AkMidiCcNonRegisterCoarse = 87,
        AkMidiCcNonRegisterFine   = 88,
        AkMidiCcAllSoundOff       = 89,
        AkMidiCcAllControllersOff = 90,
        AkMidiCcLocalKeyboard     = 91,
        AkMidiCcAllNotesOff       = 92,
        AkMidiCcOmniModeOff       = 93,
        AkMidiCcOmniModeOn        = 94,
        AkMidiCcOmniMonophonicOn  = 95,
        AkMidiCcOmniPolyphonicOn  = 96,
        MAX                       = 97
    };

    /**
     * Enum /Script/AkAudio.AkCodecId
     */
    enum class EAkCodecId : uint8_t
    {
        AkCodecIdNone          = 0,
        AkCodecIdPCM           = 1,
        AkCodecIdADPCM         = 2,
        AkCodecIdXMA           = 3,
        AkCodecIdVorbis        = 4,
        AkCodecIdAAC           = 5,
        AkCodecIdATRAC9        = 6,
        AkCodecIdOpusNX        = 7,
        AkCodecIdAkOpus        = 8,
        AkCodecIdAkOpusWEM     = 9,
        AkCodecIdAkCodecId_MAX = 10
    };

    /**
     * Enum /Script/AkAudio.AkMeshType
     */
    enum class EAkMeshType : uint8_t
    {
        AkMeshTypeStaticMesh     = 0,
        AkMeshTypeCollisionMesh  = 1,
        AkMeshTypeAkMeshType_MAX = 2
    };

    /**
     * Enum /Script/AkAudio.EAkPanningRule
     */
    enum class EAkPanningRule : uint8_t
    {
        Speakers   = 0,
        Headphones = 1,
        MAX        = 2
    };

    /**
     * Enum /Script/AkAudio.EAkChannelConfigType
     */
    enum class EAkChannelConfigType : uint8_t
    {
        Anonymous = 0,
        Standard  = 1,
        Ambisonic = 2,
        MAX       = 3
    };

    /**
     * Enum /Script/AkAudio.EAkChannelMask
     */
    enum class EAkChannelMask : uint8_t
    {
        FrontLeft         = 0,
        FrontRight        = 1,
        FrontCenter       = 2,
        LowFrequency      = 3,
        BackLeft          = 4,
        BackRight         = 5,
        BackCenter        = 6,
        SideLeft          = 7,
        SideRight         = 8,
        Top               = 9,
        HeightFrontLeft   = 10,
        HeightFrontCenter = 11,
        HeightFrontRight  = 12,
        HeightBackLeft    = 13,
        HeightBackCenter  = 14,
        HeightBackRight   = 15,
        MAX               = 16
    };

    /**
     * Enum /Script/AkAudio.EAkCommSystem
     */
    enum class EAkCommSystem : uint8_t
    {
        Socket = 0,
        HTCS   = 1,
        MAX    = 2
    };

    /**
     * Enum /Script/AkAudio.EAkFitToGeometryMode
     */
    enum class EAkFitToGeometryMode : uint8_t
    {
        OrientedBox      = 0,
        AlignedBox       = 1,
        ConvexPolyhedron = 2,
        MAX              = 3
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
