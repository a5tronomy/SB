#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "Layout/Geometry.h"
#include "Layout/Margin.h"
#include "DelegateULowEntryExtendedStandardLibraryCompareObjectsDelegate.h"
#include "ELowEntryBatteryState.h"
#include "ELowEntryExtendedStandardLibrary0to9.h"
#include "ELowEntryExtendedStandardLibrary1to10other.h"
#include "ELowEntryExtendedStandardLibraryTrueOrFalse.h"
#include "ELowEntryHmacAlgorithm.h"
#include "ELowEntryImageFormat.h"
#include "ELowEntrySplitScreenType.h"
#include "ELowEntrySplitScreenTypeThreePlayers.h"
#include "ELowEntrySplitScreenTypeTwoPlayers.h"
#include "LowEntryRegexMatch.h"
#include "LowEntryExtendedStandardLibrary.generated.h"

class AActor;
class APlayerController;
class ASceneCapture2D;
class ULocalPlayer;
class ULowEntryBitDataEntry;
class ULowEntryBitDataReader;
class ULowEntryBitDataWriter;
class ULowEntryByteArray;
class ULowEntryByteDataEntry;
class ULowEntryByteDataReader;
class ULowEntryByteDataWriter;
class ULowEntryDouble;
class ULowEntryExecutionQueue;
class ULowEntryLatentActionBoolean;
class ULowEntryLatentActionFloat;
class ULowEntryLatentActionInteger;
class ULowEntryLatentActionNone;
class ULowEntryLatentActionObject;
class ULowEntryLatentActionString;
class ULowEntryLong;
class ULowEntryParsedHashcash;
class UMediaPlayer;
class UMediaSoundComponent;
class UMediaTexture;
class UObject;
class USceneCaptureComponent2D;
class USoundClass;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryExtendedStandardLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULowEntryExtendedStandardLibrary();

    UFUNCTION(BlueprintPure)
    static bool XboxOnePlatform();
    
    UFUNCTION(BlueprintPure)
    static bool WithEditor();
    
    UFUNCTION(BlueprintPure)
    static bool WindowsRtPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool WindowsRtArmPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool WindowsPlatform();
    
    UFUNCTION(BlueprintPure)
    static FString WindowsNewlineCharacter();
    
    UFUNCTION(BlueprintPure)
    static bool Windows64Platform();
    
    UFUNCTION(BlueprintPure)
    static bool Windows32Platform();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void TickSeconds(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const int32 Ticks, const float SecondsInterval, int32& Tick);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void TickFrames(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const int32 Ticks, const int32 FramesInterval, int32& Tick);
    
    UFUNCTION(BlueprintCallable)
    static void TextureUpdateResource(UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void TextureRenderTarget2DToPixels(UTextureRenderTarget2D* TextureRenderTarget2D, int32& Width, int32& Height, TArray<FColor>& Pixels);
    
    UFUNCTION(BlueprintCallable)
    static void TextureRenderTarget2DToBytes(UTextureRenderTarget2D* TextureRenderTarget2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality);
    
    UFUNCTION(BlueprintCallable)
    static void Texture2DToPixels(UTexture2D* Texture2D, int32& Width, int32& Height, TArray<FColor>& Pixels);
    
    UFUNCTION(BlueprintCallable)
    static void Texture2DToBytes(UTexture2D* Texture2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality);
    
    UFUNCTION(BlueprintPure)
    static bool TestBuild();
    
    UFUNCTION(BlueprintPure)
    static FString TabCharacter();
    
    UFUNCTION(BlueprintPure)
    static bool SwitchPlatform();
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> StringToBytesUtf8(const FString& string);
    
    UFUNCTION(BlueprintPure)
    static void SplitBytes(const TArray<uint8>& ByteArray, const int32 LengthA, TArray<uint8>& A, TArray<uint8>& B);
    
    UFUNCTION(BlueprintCallable)
    static void SoundClass_SetVolume(USoundClass* SoundClass, const float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SoundClass_SetPitch(USoundClass* SoundClass, const float Pitch);
    
    UFUNCTION(BlueprintPure)
    static float SoundClass_GetVolume(USoundClass* SoundClass);
    
    UFUNCTION(BlueprintPure)
    static float SoundClass_GetPitch(USoundClass* SoundClass);
    
    UFUNCTION(BlueprintCallable)
    static void SortTimespanArrayDirectly(UPARAM(Ref) TArray<FTimespan>& TimespanArray, const bool Reversed);
    
    UFUNCTION(BlueprintPure)
    static TArray<FTimespan> SortTimespanArray(const TArray<FTimespan>& TimespanArray, const bool Reversed);
    
    UFUNCTION(BlueprintCallable)
    static void SortStringArrayDirectly(UPARAM(Ref) TArray<FString>& StringArray, const bool Reversed);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> SortStringArray(const TArray<FString>& StringArray, const bool Reversed);
    
    UFUNCTION(BlueprintCallable)
    static void SortObjectArrayDirectly(UPARAM(Ref) TArray<UObject*>& ObjectArray, FDelegateULowEntryExtendedStandardLibraryCompareObjects Comparator, const bool Reversed);
    
    UFUNCTION(BlueprintPure)
    static TArray<UObject*> SortObjectArray(const TArray<UObject*>& ObjectArray, FDelegateULowEntryExtendedStandardLibraryCompareObjects Comparator, const bool Reversed);
    
    UFUNCTION(BlueprintCallable)
    static void SortIntegerArrayDirectly(UPARAM(Ref) TArray<int32>& IntegerArray, const bool Reversed);
    
    UFUNCTION(BlueprintPure)
    static TArray<int32> SortIntegerArray(const TArray<int32>& IntegerArray, const bool Reversed);
    
    UFUNCTION(BlueprintCallable)
    static void SortFloatArrayDirectly(UPARAM(Ref) TArray<float>& FloatArray, const bool Reversed);
    
    UFUNCTION(BlueprintPure)
    static TArray<float> SortFloatArray(const TArray<float>& FloatArray, const bool Reversed);
    
    UFUNCTION(BlueprintCallable)
    static void SortDateTimeArrayDirectly(UPARAM(Ref) TArray<FDateTime>& DateTimeArray, const bool Reversed);
    
    UFUNCTION(BlueprintPure)
    static TArray<FDateTime> SortDateTimeArray(const TArray<FDateTime>& DateTimeArray, const bool Reversed);
    
    UFUNCTION(BlueprintCallable)
    static void SortByteArrayDirectly(UPARAM(Ref) TArray<uint8>& ByteArray, const bool Reversed);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> SortByteArray(const TArray<uint8>& ByteArray, const bool Reversed);
    
    UFUNCTION(BlueprintCallable)
    static void SimpleKismetSystemLibraryPrintString(const FString& inString);
    
    UFUNCTION(BlueprintPure)
    static bool ShippingBuild();
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> Sha512(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> Sha256(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> Sha1(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldRenderingEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowSize(const int32 Width, const int32 Height);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowPosition(const int32 X, const int32 Y);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowPositiomInPercentagesCentered(const float X, const float Y);
    
    UFUNCTION(BlueprintCallable)
    static void SetWindowMode(const bool Fullscreen, const bool IsFullscreenWindowed);
    
    UFUNCTION(BlueprintCallable)
    static void SetSplitScreenType_TwoPlayers(const ELowEntrySplitScreenTypeTwoPlayers Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetSplitScreenType_ThreePlayers(const ELowEntrySplitScreenTypeThreePlayers Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetSplitScreenEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetMousePositionInPercentages(const float X, const float Y);
    
    UFUNCTION(BlueprintCallable)
    static void SetMousePosition(const int32 X, const int32 Y);
    
    UFUNCTION(BlueprintCallable)
    static void SetMouseLockedToViewport(const bool Locked);
    
    UFUNCTION(BlueprintCallable)
    static void SetGenericTeamId(AActor* Target, const uint8 TeamID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ServerChangeMap(UObject* WorldContextObject, const FString& Map, const FString& Args, APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void SceneCaptureComponent2DToPixels(USceneCaptureComponent2D* SceneCaptureComponent2D, int32& Width, int32& Height, TArray<FColor>& Pixels);
    
    UFUNCTION(BlueprintCallable)
    static void SceneCaptureComponent2DToBytes(USceneCaptureComponent2D* SceneCaptureComponent2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SceneCaptureComponent2D_SetFov(USceneCaptureComponent2D* SceneCaptureComponent2D, const float FOV);
    
    UFUNCTION(BlueprintPure)
    static void SceneCaptureComponent2D_GetFov(USceneCaptureComponent2D* SceneCaptureComponent2D, float& FOV);
    
    UFUNCTION(BlueprintCallable)
    static void SceneCapture2DToPixels(ASceneCapture2D* SceneCapture2D, int32& Width, int32& Height, TArray<FColor>& Pixels);
    
    UFUNCTION(BlueprintCallable)
    static void SceneCapture2DToBytes(ASceneCapture2D* SceneCapture2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SceneCapture2D_SetFov(ASceneCapture2D* SceneCapture2D, const float FOV);
    
    UFUNCTION(BlueprintPure)
    static void SceneCapture2D_GetFov(ASceneCapture2D* SceneCapture2D, float& FOV);
    
    UFUNCTION(BlueprintPure)
    static float RoundDecimals(float Number, int32 Decimals);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RetriggerableRandomDelayFrames(UObject* WorldContextObject, int32 MinFrames, int32 MaxFrames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RetriggerableRandomDelay(UObject* WorldContextObject, float MinDuration, float MaxDuration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RetriggerableDelayFrames(UObject* WorldContextObject, int32 Frames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintPure)
    static FString ReplaceCharactersExcept(const FString& string, const FString& ReplacementCharacter, const bool KeepLowercaseAZ, const bool KeepUppercaseAZ, const bool KeepNumbers, const FString& OtherCharactersToKeep);
    
    UFUNCTION(BlueprintPure)
    static FString RemoveCharactersExcept(const FString& string, const bool KeepLowercaseAZ, const bool KeepUppercaseAZ, const bool KeepNumbers, const FString& OtherCharactersToKeep);
    
    UFUNCTION(BlueprintPure)
    static FString RegexReplace(const FString& string, const FString& pattern, const FString& Replacement);
    
    UFUNCTION(BlueprintPure)
    static bool RegexMatch(const FString& string, const FString& pattern);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FLowEntryRegexMatch> RegexGetMatches(const FString& string, const FString& pattern);
    
    UFUNCTION(BlueprintPure)
    static int32 RegexCount(const FString& string, const FString& pattern);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RandomDelayFrames(UObject* WorldContextObject, int32 MinFrames, int32 MaxFrames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RandomDelay(UObject* WorldContextObject, float MinDuration, float MaxDuration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void QueueExecutions(UObject* WorldContextObject, ULowEntryExecutionQueue*& Queue, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintPure)
    static bool Ps4Platform();
    
    UFUNCTION(BlueprintCallable)
    static void PlayerControllerGetLocalPlayer(APlayerController* PlayerController, bool& Success, ULocalPlayer*& LocalPlayer);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* PixelsToTexture2D(const int32 Width, const int32 Height, const TArray<FColor>& Pixels);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* PixelsToExistingTexture2D(bool& ReusedGivenTexture2D, UTexture2D* Texture2D, const int32 Width, const int32 Height, const TArray<FColor>& Pixels);
    
    UFUNCTION(BlueprintCallable)
    static void PixelsToBytes(const int32 Width, const int32 Height, const TArray<FColor>& Pixels, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> Pearson(const TArray<uint8>& ByteArray, const int32 HashLength, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryLong* ParseStringIntoLongBytes(const FString& string);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryDouble* ParseStringIntoDoubleBytes(const FString& string);
    
    UFUNCTION(BlueprintPure)
    static bool ParsedHashcashIsValid(ULowEntryParsedHashcash* Target);
    
    UFUNCTION(BlueprintCallable)
    static void NextQueueExecution(ULowEntryExecutionQueue* Queue);
    
    UFUNCTION(BlueprintPure)
    static FString NewlineCharacter();
    
    UFUNCTION(BlueprintPure)
    static FString MinString(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static void MinOfTimespanArray(const TArray<FTimespan>& TimespanArray, int32& IndexOfMinValue, FTimespan& MinValue);
    
    UFUNCTION(BlueprintPure)
    static void MinOfStringArray(const TArray<FString>& StringArray, int32& IndexOfMinValue, FString& MinValue);
    
    UFUNCTION(BlueprintPure)
    static void MinOfDateTimeArray(const TArray<FDateTime>& DateTimeArray, int32& IndexOfMinValue, FDateTime& MinValue);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> MergeEncapsulatedByteArrays(const TArray<ULowEntryByteArray*>& ByteArrays);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> MergeBytes(TArray<uint8> A, TArray<uint8> B);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> Md5(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static FString MaxString(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static void MaxOfTimespanArray(const TArray<FTimespan>& TimespanArray, int32& IndexOfMaxValue, FTimespan& MaxValue);
    
    UFUNCTION(BlueprintPure)
    static void MaxOfStringArray(const TArray<FString>& StringArray, int32& IndexOfMaxValue, FString& MaxValue);
    
    UFUNCTION(BlueprintPure)
    static void MaxOfDateTimeArray(const TArray<FDateTime>& DateTimeArray, int32& IndexOfMaxValue, FDateTime& MaxValue);
    
    UFUNCTION(BlueprintPure)
    static bool MacPlatform();
    
    UFUNCTION(BlueprintCallable)
    static ULowEntryLong* Long_CreateZero();
    
    UFUNCTION(BlueprintCallable)
    static ULowEntryLong* Long_Create(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintCallable)
    static void LoadVideo(UMediaSoundComponent* MediaSoundComponent, const FString& URL, bool& Success, UMediaPlayer*& MediaPlayer, UMediaTexture*& MediaTexture, const bool PlayOnOpen, const bool Loop);
    
    UFUNCTION(BlueprintPure)
    static bool LinuxPlatform();
    
    UFUNCTION(BlueprintPure)
    static bool LessStringString(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static bool LessIntegerFloat(const int32 A, const float B);
    
    UFUNCTION(BlueprintPure)
    static bool LessIntegerByte(const int32 A, const uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessFloatInteger(const float A, const int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessFloatByte(const float A, const uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqualStringString(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqualIntegerFloat(const int32 A, const float B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqualIntegerByte(const int32 A, const uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqualFloatInteger(const float A, const int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqualFloatByte(const float A, const uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqualByteInteger(const uint8 A, const int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqualByteFloat(const uint8 A, const float B);
    
    UFUNCTION(BlueprintPure)
    static bool LessByteInteger(const uint8 A, const int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool LessByteFloat(const uint8 A, const float B);
    
    UFUNCTION(BlueprintCallable)
    static void LatentAction_Create_String(ULowEntryLatentActionString*& LatentAction);
    
    UFUNCTION(BlueprintCallable)
    static void LatentAction_Create_Object(ULowEntryLatentActionObject*& LatentAction);
    
    UFUNCTION(BlueprintCallable)
    static void LatentAction_Create_None(ULowEntryLatentActionNone*& LatentAction);
    
    UFUNCTION(BlueprintCallable)
    static void LatentAction_Create_Integer(ULowEntryLatentActionInteger*& LatentAction);
    
    UFUNCTION(BlueprintCallable)
    static void LatentAction_Create_Float(ULowEntryLatentActionFloat*& LatentAction);
    
    UFUNCTION(BlueprintCallable)
    static void LatentAction_Create_Boolean(ULowEntryLatentActionBoolean*& LatentAction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void JoinGame(UObject* WorldContextObject, const FString& ServerAddress, const FString& Args, APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void IsWorldRenderingEnabled(bool& Success, bool& Enabled);
    
    UFUNCTION(BlueprintPure)
    static bool IsBitSet(const uint8 B, const int32 Bit);
    
    UFUNCTION(BlueprintPure)
    static bool IsAndroidDaydreamApplication();
    
    UFUNCTION(BlueprintPure)
    static bool IosPlatform();
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> IntegerToBytes(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    static bool Html5Platform();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HostGame(UObject* WorldContextObject, const FString& Map, const FString& Args, APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> HMAC(const TArray<uint8>& ByteArray, const TArray<uint8>& Key, ELowEntryHmacAlgorithm Algorithm, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> HexToBytes(const FString& Hex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ULowEntryParsedHashcash*> HashcashParseArray(const TArray<FString>& Hashes);
    
    UFUNCTION(BlueprintCallable)
    static ULowEntryParsedHashcash* HashcashParse(const FString& Hash);
    
    UFUNCTION(BlueprintPure)
    static FString HashcashCustomCreationDate(const FString& Resource, const FDateTime& UtcDate, const int32 Bits);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> HashcashArrayCustomCreationDate(const TArray<FString>& Resources, const FDateTime& UtcDate, const int32 Bits);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> HashcashArray(const TArray<FString>& Resources, const int32 Bits);
    
    UFUNCTION(BlueprintPure)
    static FString Hashcash(const FString& Resource, const int32 Bits);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterStringString(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterIntegerFloat(const int32 A, const float B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterIntegerByte(const int32 A, const uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterFloatInteger(const float A, const int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterFloatByte(const float A, const uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqualStringString(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqualIntegerFloat(const int32 A, const float B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqualIntegerByte(const int32 A, const uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqualFloatInteger(const float A, const int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqualFloatByte(const float A, const uint8 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqualByteInteger(const uint8 A, const int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqualByteFloat(const uint8 A, const float B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterByteInteger(const uint8 A, const int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterByteFloat(const uint8 A, const float B);
    
    UFUNCTION(BlueprintPure)
    static TArray<FColor> GrayscalePixels(const TArray<FColor>& Pixel);
    
    UFUNCTION(BlueprintPure)
    static FColor GrayscalePixel(const FColor& Pixel);
    
    UFUNCTION(BlueprintCallable)
    static void GetWindowSize(bool& Success, int32& Width, int32& Height);
    
    UFUNCTION(BlueprintCallable)
    static void GetWindowPosition(bool& Success, int32& X, int32& Y);
    
    UFUNCTION(BlueprintCallable)
    static void GetWindowPositiomInPercentagesCentered(bool& Success, float& X, float& Y);
    
    UFUNCTION(BlueprintCallable)
    static void GetWindowMode(bool& Success, bool& Fullscreen, bool& IsFullscreenWindowed);
    
    UFUNCTION(BlueprintCallable)
    static void GetWindowBounds(bool& Success, int32& X, int32& Y, int32& Width, int32& Height);
    
    UFUNCTION(BlueprintCallable)
    static void GetWindowBorderSize(bool& Success, FMargin& Margin);
    
    UFUNCTION(BlueprintCallable)
    static FName GetUserFocusedWidgetType(const int32 UserIndex);
    
    UFUNCTION(BlueprintPure)
    static void GetSplitScreenType(ELowEntrySplitScreenType& Type);
    
    UFUNCTION(BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintPure)
    static FString GetProjectName();
    
    UFUNCTION(BlueprintPure)
    static void GetPrimaryMonitorWorkArea(int32& X, int32& Y, int32& Width, int32& Height);
    
    UFUNCTION(BlueprintPure)
    static void GetPrimaryMonitorResolution(int32& Width, int32& Height);
    
    UFUNCTION(BlueprintCallable)
    static void GetMousePositionInPercentages(bool& Success, float& X, float& Y);
    
    UFUNCTION(BlueprintCallable)
    static void GetMousePosition(bool& Success, int32& X, int32& Y);
    
    UFUNCTION(BlueprintCallable)
    static void GetMaximumVolume(int32& Volume, bool& Success);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetLocalToAbsoluteScale(const FGeometry& Geometry);
    
    UFUNCTION(BlueprintCallable)
    static FName GetKeyboardFocusedWidgetType();
    
    UFUNCTION(BlueprintPure)
    static void GetGenericTeamId(AActor* Target, uint8& TeamID);
    
    UFUNCTION(BlueprintCallable)
    static void GetCurrentVolumePercentage(float& Percentage, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static void GetCurrentVolume(int32& Volume, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static void GetClassWithName(const FString& ClassName, UClass*& Class_, bool& Success);
    
    UFUNCTION(BlueprintPure)
    static uint8 GetByteWithBitSet(const uint8 byte, const int32 Bit, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void GetBatteryTemperature(float& Celsius, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static void GetBatteryState(ELowEntryBatteryState& State, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static void GetBatteryCharge(int32& Percentage, bool& Success);
    
    UFUNCTION(BlueprintPure)
    static void GetAndroidVolume(int32& Volume);
    
    UFUNCTION(BlueprintPure)
    static FString GetAndroidVersion();
    
    UFUNCTION(BlueprintPure)
    static FString GetAndroidOsLanguage();
    
    UFUNCTION(BlueprintPure)
    static int32 GetAndroidNumberOfCores();
    
    UFUNCTION(BlueprintPure)
    static FString GetAndroidGpuFamily();
    
    UFUNCTION(BlueprintPure)
    static FString GetAndroidGlVersion();
    
    UFUNCTION(BlueprintPure)
    static FString GetAndroidDeviceModel();
    
    UFUNCTION(BlueprintPure)
    static FString GetAndroidDeviceMake();
    
    UFUNCTION(BlueprintPure)
    static FString GetAndroidDefaultLocale();
    
    UFUNCTION(BlueprintPure)
    static int32 GetAndroidBuildVersion();
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetAbsoluteToLocalScale(const FGeometry& Geometry);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetAbsoluteSize(const FGeometry& Geometry);
    
    UFUNCTION(BlueprintPure)
    static void GenerateRandomBytesRandomLength(int32 MinLength, int32 MaxLength, TArray<uint8>& ByteArray);
    
    UFUNCTION(BlueprintPure)
    static void GenerateRandomBytes(const int32 Length, TArray<uint8>& ByteArray);
    
    UFUNCTION(BlueprintPure)
    static float FloorDecimals(float Number, int32 Decimals);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> FloatToBytes(const float Value);
    
    UFUNCTION(BlueprintCallable)
    static void ExecToInteger(const ELowEntryExtendedStandardLibrary0to9 Branch, int32& Value);
    
    UFUNCTION(BlueprintCallable)
    static void ExecToByte(const ELowEntryExtendedStandardLibrary0to9 Branch, uint8& Value);
    
    UFUNCTION(BlueprintCallable)
    static void ExecToBoolean(const ELowEntryExtendedStandardLibraryTrueOrFalse Branch, bool& Value);
    
    UFUNCTION(BlueprintCallable)
    static ULowEntryByteArray* EncapsulateByteArray(const TArray<uint8>& ByteArray);
    
    UFUNCTION(BlueprintCallable)
    static ULowEntryDouble* Double_CreateZero();
    
    UFUNCTION(BlueprintCallable)
    static ULowEntryDouble* Double_Create(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static FVector2D Divide_Vector2dVector2d(const FVector2D& A, const FVector2D& B);
    
    UFUNCTION(BlueprintPure)
    static bool DevelopmentBuild();
    
    UFUNCTION(BlueprintPure)
    static bool DesktopPlatform();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void DelayFrames(UObject* WorldContextObject, int32 Frames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintPure)
    static bool DebugBuild();
    
    UFUNCTION(BlueprintPure)
    static void DateTime_ToUnixTimestamp(const FDateTime& DateTime, ULowEntryLong*& Timestamp);
    
    UFUNCTION(BlueprintPure)
    static void DateTime_ToString(const FDateTime& DateTime, FString& string, const FString& Format);
    
    UFUNCTION(BlueprintPure)
    static void DateTime_ToIso8601(const FDateTime& DateTime, FString& string);
    
    UFUNCTION(BlueprintPure)
    static void DateTime_FromUnixTimestamp(ULowEntryLong* Timestamp, FDateTime& DateTime);
    
    UFUNCTION(BlueprintPure)
    static FString CreateString(const int32 Length, const FString& Filler);
    
    UFUNCTION(BlueprintPure)
    static void CreateObject(UClass* Class, UObject*& Object);
    
    UFUNCTION(BlueprintCallable)
    static void Crash();
    
    UFUNCTION(BlueprintPure)
    static void ConvertUtcDateToLocalDate(const FDateTime& Utc, FDateTime& Local);
    
    UFUNCTION(BlueprintPure)
    static void ConvertLocalDateToUtcDate(const FDateTime& Local, FDateTime& Utc);
    
    UFUNCTION(BlueprintCallable)
    static void ClipboardSet(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static FString ClipboardGet();
    
    UFUNCTION(BlueprintCallable)
    static void ClearUserFocus(const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static void ClearKeyboardFocus();
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllUserFocus();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeMap(UObject* WorldContextObject, const FString& Map, const FString& Args, APlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintPure)
    static float CeilDecimals(float Number, int32 Decimals);
    
    UFUNCTION(BlueprintCallable)
    static void CaseSwitchObject(const int32 OnlyCheckFirstX, const UObject* Value, const UObject* _1__, const UObject* _2__, const UObject* _3__, const UObject* _4__, const UObject* _5__, const UObject* _6__, const UObject* _7__, const UObject* _8__, const UObject* _9__, const UObject* _10__, ELowEntryExtendedStandardLibrary1to10other& Branch);
    
    UFUNCTION(BlueprintCallable)
    static void CaseSwitchInteger(const int32 OnlyCheckFirstX, const int32 Value, const int32 _1__, const int32 _2__, const int32 _3__, const int32 _4__, const int32 _5__, const int32 _6__, const int32 _7__, const int32 _8__, const int32 _9__, const int32 _10__, ELowEntryExtendedStandardLibrary1to10other& Branch);
    
    UFUNCTION(BlueprintCallable)
    static void CaseSwitchByte(const int32 OnlyCheckFirstX, const uint8 Value, const uint8 _1__, const uint8 _2__, const uint8 _3__, const uint8 _4__, const uint8 _5__, const uint8 _6__, const uint8 _7__, const uint8 _8__, const uint8 _9__, const uint8 _10__, ELowEntryExtendedStandardLibrary1to10other& Branch);
    
    UFUNCTION(BlueprintPure)
    static FString CarriageReturnCharacter();
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> ByteToBytes(const uint8 Value);
    
    UFUNCTION(BlueprintPure)
    static bool ByteToBoolean(const uint8 byte);
    
    UFUNCTION(BlueprintPure)
    static void ByteToBits(const uint8 byte, bool& Bit1, bool& Bit2, bool& Bit3, bool& Bit4, bool& Bit5, bool& Bit6, bool& Bit7, bool& Bit8);
    
    UFUNCTION(BlueprintPure)
    static FString BytesToStringUtf8(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintCallable)
    static void BytesToPixels(const TArray<uint8>& ByteArray, const ELowEntryImageFormat ImageFormat, int32& Width, int32& Height, TArray<FColor>& Pixels, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryLong* BytesToLongBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static int32 BytesToInteger(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* BytesToImage(const TArray<uint8>& ByteArray, const ELowEntryImageFormat ImageFormat, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static FString BytesToHex(const TArray<uint8>& ByteArray, const bool AddSpaces, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static float BytesToFloat(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* BytesToExistingImage(bool& ReusedGivenTexture2D, UTexture2D* Texture2D, const TArray<uint8>& ByteArray, const ELowEntryImageFormat ImageFormat, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryDouble* BytesToDoubleBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static uint8 BytesToByte(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static bool BytesToBoolean(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static FString BytesToBitString(const TArray<uint8>& ByteArray, const bool AddSpaces, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static FString BytesToBinary(const TArray<uint8>& ByteArray, const bool AddSpaces, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static FString BytesToBase64Url(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static FString BytesToBase64(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> BytesSubArray(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> ByteDataWriter_GetBytes(ULowEntryByteDataWriter* ByteDataWriter);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataWriter* ByteDataWriter_CreateFromEntryArrayPure(const TArray<ULowEntryByteDataEntry*>& Array);
    
    UFUNCTION(BlueprintCallable)
    static ULowEntryByteDataWriter* ByteDataWriter_CreateFromEntryArray(const TArray<ULowEntryByteDataEntry*>& Array);
    
    UFUNCTION(BlueprintCallable)
    static ULowEntryByteDataReader* ByteDataReader_Create(const TArray<uint8>& Bytes, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromStringUtf8Array(const TArray<FString>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromStringUtf8(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger3Array(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger3(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger2Array(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger2(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger1Array(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromPositiveInteger1(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromLongBytesArray(const TArray<ULowEntryLong*>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromLongBytes(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromIntegerArray(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromInteger(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromFloatArray(const TArray<float>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromFloat(const float Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromDoubleBytesArray(const TArray<ULowEntryDouble*>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromDoubleBytes(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromByteArray(const TArray<uint8>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromByte(const uint8 Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromBooleanArray(const TArray<bool>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryByteDataEntry* ByteDataEntry_CreateFromBoolean(const bool Value);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> BooleanToBytes(const bool Value);
    
    UFUNCTION(BlueprintPure)
    static uint8 BooleanToByte(const bool Value);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> BitStringToBytes(const FString& Bits);
    
    UFUNCTION(BlueprintPure)
    static void BitsToByte(const bool Bit1, const bool Bit2, const bool Bit3, const bool Bit4, const bool Bit5, const bool Bit6, const bool Bit7, const bool Bit8, uint8& byte);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> BitDataWriter_GetBytes(ULowEntryBitDataWriter* BitDataWriter);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataWriter* BitDataWriter_CreateFromEntryArrayPure(const TArray<ULowEntryBitDataEntry*>& Array);
    
    UFUNCTION(BlueprintCallable)
    static ULowEntryBitDataWriter* BitDataWriter_CreateFromEntryArray(const TArray<ULowEntryBitDataEntry*>& Array);
    
    UFUNCTION(BlueprintCallable)
    static ULowEntryBitDataReader* BitDataReader_Create(const TArray<uint8>& Bytes, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromStringUtf8Array(const TArray<FString>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromStringUtf8(const FString& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger3Array(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger3(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger2Array(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger2(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger1Array(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromPositiveInteger1(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromLongBytesArray(const TArray<ULowEntryLong*>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromLongBytes(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerMostSignificantBits(const int32 Value, const int32 BitCount);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerLeastSignificantBits(const int32 Value, const int32 BitCount);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArrayMostSignificantBits(const TArray<int32>& Value, const int32 BitCount);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArrayLeastSignificantBits(const TArray<int32>& Value, const int32 BitCount);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromIntegerArray(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromInteger(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromFloatArray(const TArray<float>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromFloat(const float Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromDoubleBytesArray(const TArray<ULowEntryDouble*>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromDoubleBytes(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromByteMostSignificantBits(const uint8 Value, const int32 BitCount);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromByteLeastSignificantBits(const uint8 Value, const int32 BitCount);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArrayMostSignificantBits(const TArray<uint8>& Value, const int32 BitCount);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArrayLeastSignificantBits(const TArray<uint8>& Value, const int32 BitCount);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromByteArray(const TArray<uint8>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromByte(const uint8 Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromBooleanArray(const TArray<bool>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromBoolean(const bool Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromBitArray(const TArray<bool>& Value);
    
    UFUNCTION(BlueprintPure)
    static ULowEntryBitDataEntry* BitDataEntry_CreateFromBit(const bool Value);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> BinaryToBytes(const FString& Binary);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> BCrypt(const TArray<uint8>& ByteArray, const TArray<uint8>& Salt, int32 Strength, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> Base64UrlToBytes(const FString& Base64Url);
    
    UFUNCTION(BlueprintPure)
    static FString Base64UrlToBase64(const FString& Base64Url);
    
    UFUNCTION(BlueprintPure)
    static TArray<uint8> Base64ToBytes(const FString& Base64);
    
    UFUNCTION(BlueprintPure)
    static FString Base64ToBase64Url(const FString& Base64);
    
    UFUNCTION(BlueprintPure)
    static bool AreBytesEqual(const TArray<uint8>& A, const TArray<uint8>& B, int32 IndexA, int32 LengthA, int32 IndexB, int32 LengthB);
    
    UFUNCTION(BlueprintPure)
    static bool AreAndroidHeadphonesPluggedIn();
    
    UFUNCTION(BlueprintPure)
    static bool AndroidPlatform();
    
};

