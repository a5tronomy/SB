#include "LowEntryExtendedStandardLibrary.h"

ULowEntryExtendedStandardLibrary::ULowEntryExtendedStandardLibrary() {
}

bool ULowEntryExtendedStandardLibrary::XboxOnePlatform() {
    return false;
}

bool ULowEntryExtendedStandardLibrary::WithEditor() {
    return false;
}

bool ULowEntryExtendedStandardLibrary::WindowsRtPlatform() {
    return false;
}

bool ULowEntryExtendedStandardLibrary::WindowsRtArmPlatform() {
    return false;
}

bool ULowEntryExtendedStandardLibrary::WindowsPlatform() {
    return false;
}

FString ULowEntryExtendedStandardLibrary::WindowsNewlineCharacter() {
    return TEXT("");
}

bool ULowEntryExtendedStandardLibrary::Windows64Platform() {
    return false;
}

bool ULowEntryExtendedStandardLibrary::Windows32Platform() {
    return false;
}

void ULowEntryExtendedStandardLibrary::TickSeconds(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const int32 Ticks, const float SecondsInterval, int32& Tick) {
}

void ULowEntryExtendedStandardLibrary::TickFrames(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const int32 Ticks, const int32 FramesInterval, int32& Tick) {
}

void ULowEntryExtendedStandardLibrary::TextureUpdateResource(UTexture* Texture) {
}

void ULowEntryExtendedStandardLibrary::TextureRenderTarget2DToPixels(UTextureRenderTarget2D* TextureRenderTarget2D, int32& Width, int32& Height, TArray<FColor>& Pixels) {
}

void ULowEntryExtendedStandardLibrary::TextureRenderTarget2DToBytes(UTextureRenderTarget2D* TextureRenderTarget2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality) {
}

void ULowEntryExtendedStandardLibrary::Texture2DToPixels(UTexture2D* Texture2D, int32& Width, int32& Height, TArray<FColor>& Pixels) {
}

void ULowEntryExtendedStandardLibrary::Texture2DToBytes(UTexture2D* Texture2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality) {
}

bool ULowEntryExtendedStandardLibrary::TestBuild() {
    return false;
}

FString ULowEntryExtendedStandardLibrary::TabCharacter() {
    return TEXT("");
}

bool ULowEntryExtendedStandardLibrary::SwitchPlatform() {
    return false;
}

TArray<uint8> ULowEntryExtendedStandardLibrary::StringToBytesUtf8(const FString& string) {
    return TArray<uint8>();
}

void ULowEntryExtendedStandardLibrary::SplitBytes(const TArray<uint8>& ByteArray, const int32 LengthA, TArray<uint8>& A, TArray<uint8>& B) {
}

void ULowEntryExtendedStandardLibrary::SoundClass_SetVolume(USoundClass* SoundClass, const float Volume) {
}

void ULowEntryExtendedStandardLibrary::SoundClass_SetPitch(USoundClass* SoundClass, const float Pitch) {
}

float ULowEntryExtendedStandardLibrary::SoundClass_GetVolume(USoundClass* SoundClass) {
    return 0.0f;
}

float ULowEntryExtendedStandardLibrary::SoundClass_GetPitch(USoundClass* SoundClass) {
    return 0.0f;
}

void ULowEntryExtendedStandardLibrary::SortTimespanArrayDirectly(TArray<FTimespan>& TimespanArray, const bool Reversed) {
}

TArray<FTimespan> ULowEntryExtendedStandardLibrary::SortTimespanArray(const TArray<FTimespan>& TimespanArray, const bool Reversed) {
    return TArray<FTimespan>();
}

void ULowEntryExtendedStandardLibrary::SortStringArrayDirectly(TArray<FString>& StringArray, const bool Reversed) {
}

TArray<FString> ULowEntryExtendedStandardLibrary::SortStringArray(const TArray<FString>& StringArray, const bool Reversed) {
    return TArray<FString>();
}

void ULowEntryExtendedStandardLibrary::SortObjectArrayDirectly(TArray<UObject*>& ObjectArray, FDelegateULowEntryExtendedStandardLibraryCompareObjects Comparator, const bool Reversed) {
}

TArray<UObject*> ULowEntryExtendedStandardLibrary::SortObjectArray(const TArray<UObject*>& ObjectArray, FDelegateULowEntryExtendedStandardLibraryCompareObjects Comparator, const bool Reversed) {
    return TArray<UObject*>();
}

void ULowEntryExtendedStandardLibrary::SortIntegerArrayDirectly(TArray<int32>& IntegerArray, const bool Reversed) {
}

TArray<int32> ULowEntryExtendedStandardLibrary::SortIntegerArray(const TArray<int32>& IntegerArray, const bool Reversed) {
    return TArray<int32>();
}

void ULowEntryExtendedStandardLibrary::SortFloatArrayDirectly(TArray<float>& FloatArray, const bool Reversed) {
}

TArray<float> ULowEntryExtendedStandardLibrary::SortFloatArray(const TArray<float>& FloatArray, const bool Reversed) {
    return TArray<float>();
}

void ULowEntryExtendedStandardLibrary::SortDateTimeArrayDirectly(TArray<FDateTime>& DateTimeArray, const bool Reversed) {
}

TArray<FDateTime> ULowEntryExtendedStandardLibrary::SortDateTimeArray(const TArray<FDateTime>& DateTimeArray, const bool Reversed) {
    return TArray<FDateTime>();
}

void ULowEntryExtendedStandardLibrary::SortByteArrayDirectly(TArray<uint8>& ByteArray, const bool Reversed) {
}

TArray<uint8> ULowEntryExtendedStandardLibrary::SortByteArray(const TArray<uint8>& ByteArray, const bool Reversed) {
    return TArray<uint8>();
}

void ULowEntryExtendedStandardLibrary::SimpleKismetSystemLibraryPrintString(const FString& inString) {
}

bool ULowEntryExtendedStandardLibrary::ShippingBuild() {
    return false;
}

TArray<uint8> ULowEntryExtendedStandardLibrary::Sha512(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return TArray<uint8>();
}

TArray<uint8> ULowEntryExtendedStandardLibrary::Sha256(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return TArray<uint8>();
}

TArray<uint8> ULowEntryExtendedStandardLibrary::Sha1(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return TArray<uint8>();
}

void ULowEntryExtendedStandardLibrary::SetWorldRenderingEnabled(const bool Enabled) {
}

void ULowEntryExtendedStandardLibrary::SetWindowSize(const int32 Width, const int32 Height) {
}

void ULowEntryExtendedStandardLibrary::SetWindowPosition(const int32 X, const int32 Y) {
}

void ULowEntryExtendedStandardLibrary::SetWindowPositiomInPercentagesCentered(const float X, const float Y) {
}

void ULowEntryExtendedStandardLibrary::SetWindowMode(const bool Fullscreen, const bool IsFullscreenWindowed) {
}

void ULowEntryExtendedStandardLibrary::SetSplitScreenType_TwoPlayers(const ELowEntrySplitScreenTypeTwoPlayers Type) {
}

void ULowEntryExtendedStandardLibrary::SetSplitScreenType_ThreePlayers(const ELowEntrySplitScreenTypeThreePlayers Type) {
}

void ULowEntryExtendedStandardLibrary::SetSplitScreenEnabled(const bool Enabled) {
}

void ULowEntryExtendedStandardLibrary::SetMousePositionInPercentages(const float X, const float Y) {
}

void ULowEntryExtendedStandardLibrary::SetMousePosition(const int32 X, const int32 Y) {
}

void ULowEntryExtendedStandardLibrary::SetMouseLockedToViewport(const bool Locked) {
}

void ULowEntryExtendedStandardLibrary::SetGenericTeamId(AActor* Target, const uint8 TeamID) {
}

void ULowEntryExtendedStandardLibrary::ServerChangeMap(UObject* WorldContextObject, const FString& Map, const FString& Args, APlayerController* SpecificPlayer) {
}

void ULowEntryExtendedStandardLibrary::SceneCaptureComponent2DToPixels(USceneCaptureComponent2D* SceneCaptureComponent2D, int32& Width, int32& Height, TArray<FColor>& Pixels) {
}

void ULowEntryExtendedStandardLibrary::SceneCaptureComponent2DToBytes(USceneCaptureComponent2D* SceneCaptureComponent2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality) {
}

void ULowEntryExtendedStandardLibrary::SceneCaptureComponent2D_SetFov(USceneCaptureComponent2D* SceneCaptureComponent2D, const float FOV) {
}

void ULowEntryExtendedStandardLibrary::SceneCaptureComponent2D_GetFov(USceneCaptureComponent2D* SceneCaptureComponent2D, float& FOV) {
}

void ULowEntryExtendedStandardLibrary::SceneCapture2DToPixels(ASceneCapture2D* SceneCapture2D, int32& Width, int32& Height, TArray<FColor>& Pixels) {
}

void ULowEntryExtendedStandardLibrary::SceneCapture2DToBytes(ASceneCapture2D* SceneCapture2D, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality) {
}

void ULowEntryExtendedStandardLibrary::SceneCapture2D_SetFov(ASceneCapture2D* SceneCapture2D, const float FOV) {
}

void ULowEntryExtendedStandardLibrary::SceneCapture2D_GetFov(ASceneCapture2D* SceneCapture2D, float& FOV) {
}

float ULowEntryExtendedStandardLibrary::RoundDecimals(float Number, int32 Decimals) {
    return 0.0f;
}

void ULowEntryExtendedStandardLibrary::RetriggerableRandomDelayFrames(UObject* WorldContextObject, int32 MinFrames, int32 MaxFrames, FLatentActionInfo LatentInfo) {
}

void ULowEntryExtendedStandardLibrary::RetriggerableRandomDelay(UObject* WorldContextObject, float MinDuration, float MaxDuration, FLatentActionInfo LatentInfo) {
}

void ULowEntryExtendedStandardLibrary::RetriggerableDelayFrames(UObject* WorldContextObject, int32 Frames, FLatentActionInfo LatentInfo) {
}

FString ULowEntryExtendedStandardLibrary::ReplaceCharactersExcept(const FString& string, const FString& ReplacementCharacter, const bool KeepLowercaseAZ, const bool KeepUppercaseAZ, const bool KeepNumbers, const FString& OtherCharactersToKeep) {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::RemoveCharactersExcept(const FString& string, const bool KeepLowercaseAZ, const bool KeepUppercaseAZ, const bool KeepNumbers, const FString& OtherCharactersToKeep) {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::RegexReplace(const FString& string, const FString& pattern, const FString& Replacement) {
    return TEXT("");
}

bool ULowEntryExtendedStandardLibrary::RegexMatch(const FString& string, const FString& pattern) {
    return false;
}

TArray<FLowEntryRegexMatch> ULowEntryExtendedStandardLibrary::RegexGetMatches(const FString& string, const FString& pattern) {
    return TArray<FLowEntryRegexMatch>();
}

int32 ULowEntryExtendedStandardLibrary::RegexCount(const FString& string, const FString& pattern) {
    return 0;
}

void ULowEntryExtendedStandardLibrary::RandomDelayFrames(UObject* WorldContextObject, int32 MinFrames, int32 MaxFrames, FLatentActionInfo LatentInfo) {
}

void ULowEntryExtendedStandardLibrary::RandomDelay(UObject* WorldContextObject, float MinDuration, float MaxDuration, FLatentActionInfo LatentInfo) {
}

void ULowEntryExtendedStandardLibrary::QueueExecutions(UObject* WorldContextObject, ULowEntryExecutionQueue*& Queue, FLatentActionInfo LatentInfo) {
}

bool ULowEntryExtendedStandardLibrary::Ps4Platform() {
    return false;
}

void ULowEntryExtendedStandardLibrary::PlayerControllerGetLocalPlayer(APlayerController* PlayerController, bool& Success, ULocalPlayer*& LocalPlayer) {
}

UTexture2D* ULowEntryExtendedStandardLibrary::PixelsToTexture2D(const int32 Width, const int32 Height, const TArray<FColor>& Pixels) {
    return NULL;
}

UTexture2D* ULowEntryExtendedStandardLibrary::PixelsToExistingTexture2D(bool& ReusedGivenTexture2D, UTexture2D* Texture2D, const int32 Width, const int32 Height, const TArray<FColor>& Pixels) {
    return NULL;
}

void ULowEntryExtendedStandardLibrary::PixelsToBytes(const int32 Width, const int32 Height, const TArray<FColor>& Pixels, const ELowEntryImageFormat ImageFormat, TArray<uint8>& ByteArray, const int32 CompressionQuality) {
}

TArray<uint8> ULowEntryExtendedStandardLibrary::Pearson(const TArray<uint8>& ByteArray, const int32 HashLength, int32 Index, int32 Length) {
    return TArray<uint8>();
}

ULowEntryLong* ULowEntryExtendedStandardLibrary::ParseStringIntoLongBytes(const FString& string) {
    return NULL;
}

ULowEntryDouble* ULowEntryExtendedStandardLibrary::ParseStringIntoDoubleBytes(const FString& string) {
    return NULL;
}

bool ULowEntryExtendedStandardLibrary::ParsedHashcashIsValid(ULowEntryParsedHashcash* Target) {
    return false;
}

void ULowEntryExtendedStandardLibrary::NextQueueExecution(ULowEntryExecutionQueue* Queue) {
}

FString ULowEntryExtendedStandardLibrary::NewlineCharacter() {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::MinString(const FString& A, const FString& B) {
    return TEXT("");
}

void ULowEntryExtendedStandardLibrary::MinOfTimespanArray(const TArray<FTimespan>& TimespanArray, int32& IndexOfMinValue, FTimespan& MinValue) {
}

void ULowEntryExtendedStandardLibrary::MinOfStringArray(const TArray<FString>& StringArray, int32& IndexOfMinValue, FString& MinValue) {
}

void ULowEntryExtendedStandardLibrary::MinOfDateTimeArray(const TArray<FDateTime>& DateTimeArray, int32& IndexOfMinValue, FDateTime& MinValue) {
}

TArray<uint8> ULowEntryExtendedStandardLibrary::MergeEncapsulatedByteArrays(const TArray<ULowEntryByteArray*>& ByteArrays) {
    return TArray<uint8>();
}

TArray<uint8> ULowEntryExtendedStandardLibrary::MergeBytes(TArray<uint8> A, TArray<uint8> B) {
    return TArray<uint8>();
}

TArray<uint8> ULowEntryExtendedStandardLibrary::Md5(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return TArray<uint8>();
}

FString ULowEntryExtendedStandardLibrary::MaxString(const FString& A, const FString& B) {
    return TEXT("");
}

void ULowEntryExtendedStandardLibrary::MaxOfTimespanArray(const TArray<FTimespan>& TimespanArray, int32& IndexOfMaxValue, FTimespan& MaxValue) {
}

void ULowEntryExtendedStandardLibrary::MaxOfStringArray(const TArray<FString>& StringArray, int32& IndexOfMaxValue, FString& MaxValue) {
}

void ULowEntryExtendedStandardLibrary::MaxOfDateTimeArray(const TArray<FDateTime>& DateTimeArray, int32& IndexOfMaxValue, FDateTime& MaxValue) {
}

bool ULowEntryExtendedStandardLibrary::MacPlatform() {
    return false;
}

ULowEntryLong* ULowEntryExtendedStandardLibrary::Long_CreateZero() {
    return NULL;
}

ULowEntryLong* ULowEntryExtendedStandardLibrary::Long_Create(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return NULL;
}

void ULowEntryExtendedStandardLibrary::LoadVideo(UMediaSoundComponent* MediaSoundComponent, const FString& URL, bool& Success, UMediaPlayer*& MediaPlayer, UMediaTexture*& MediaTexture, const bool PlayOnOpen, const bool Loop) {
}

bool ULowEntryExtendedStandardLibrary::LinuxPlatform() {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessStringString(const FString& A, const FString& B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessIntegerFloat(const int32 A, const float B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessIntegerByte(const int32 A, const uint8 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessFloatInteger(const float A, const int32 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessFloatByte(const float A, const uint8 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessEqualStringString(const FString& A, const FString& B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessEqualIntegerFloat(const int32 A, const float B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessEqualIntegerByte(const int32 A, const uint8 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessEqualFloatInteger(const float A, const int32 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessEqualFloatByte(const float A, const uint8 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessEqualByteInteger(const uint8 A, const int32 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessEqualByteFloat(const uint8 A, const float B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessByteInteger(const uint8 A, const int32 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::LessByteFloat(const uint8 A, const float B) {
    return false;
}

void ULowEntryExtendedStandardLibrary::LatentAction_Create_String(ULowEntryLatentActionString*& LatentAction) {
}

void ULowEntryExtendedStandardLibrary::LatentAction_Create_Object(ULowEntryLatentActionObject*& LatentAction) {
}

void ULowEntryExtendedStandardLibrary::LatentAction_Create_None(ULowEntryLatentActionNone*& LatentAction) {
}

void ULowEntryExtendedStandardLibrary::LatentAction_Create_Integer(ULowEntryLatentActionInteger*& LatentAction) {
}

void ULowEntryExtendedStandardLibrary::LatentAction_Create_Float(ULowEntryLatentActionFloat*& LatentAction) {
}

void ULowEntryExtendedStandardLibrary::LatentAction_Create_Boolean(ULowEntryLatentActionBoolean*& LatentAction) {
}

void ULowEntryExtendedStandardLibrary::JoinGame(UObject* WorldContextObject, const FString& ServerAddress, const FString& Args, APlayerController* SpecificPlayer) {
}

void ULowEntryExtendedStandardLibrary::IsWorldRenderingEnabled(bool& Success, bool& Enabled) {
}

bool ULowEntryExtendedStandardLibrary::IsBitSet(const uint8 B, const int32 Bit) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::IsAndroidDaydreamApplication() {
    return false;
}

bool ULowEntryExtendedStandardLibrary::IosPlatform() {
    return false;
}

TArray<uint8> ULowEntryExtendedStandardLibrary::IntegerToBytes(const int32 Value) {
    return TArray<uint8>();
}

bool ULowEntryExtendedStandardLibrary::Html5Platform() {
    return false;
}

void ULowEntryExtendedStandardLibrary::HostGame(UObject* WorldContextObject, const FString& Map, const FString& Args, APlayerController* SpecificPlayer) {
}

TArray<uint8> ULowEntryExtendedStandardLibrary::HMAC(const TArray<uint8>& ByteArray, const TArray<uint8>& Key, ELowEntryHmacAlgorithm Algorithm, int32 Index, int32 Length) {
    return TArray<uint8>();
}

TArray<uint8> ULowEntryExtendedStandardLibrary::HexToBytes(const FString& Hex) {
    return TArray<uint8>();
}

TArray<ULowEntryParsedHashcash*> ULowEntryExtendedStandardLibrary::HashcashParseArray(const TArray<FString>& Hashes) {
    return TArray<ULowEntryParsedHashcash*>();
}

ULowEntryParsedHashcash* ULowEntryExtendedStandardLibrary::HashcashParse(const FString& Hash) {
    return NULL;
}

FString ULowEntryExtendedStandardLibrary::HashcashCustomCreationDate(const FString& Resource, const FDateTime& UtcDate, const int32 Bits) {
    return TEXT("");
}

TArray<FString> ULowEntryExtendedStandardLibrary::HashcashArrayCustomCreationDate(const TArray<FString>& Resources, const FDateTime& UtcDate, const int32 Bits) {
    return TArray<FString>();
}

TArray<FString> ULowEntryExtendedStandardLibrary::HashcashArray(const TArray<FString>& Resources, const int32 Bits) {
    return TArray<FString>();
}

FString ULowEntryExtendedStandardLibrary::Hashcash(const FString& Resource, const int32 Bits) {
    return TEXT("");
}

bool ULowEntryExtendedStandardLibrary::GreaterStringString(const FString& A, const FString& B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterIntegerFloat(const int32 A, const float B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterIntegerByte(const int32 A, const uint8 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterFloatInteger(const float A, const int32 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterFloatByte(const float A, const uint8 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterEqualStringString(const FString& A, const FString& B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterEqualIntegerFloat(const int32 A, const float B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterEqualIntegerByte(const int32 A, const uint8 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterEqualFloatInteger(const float A, const int32 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterEqualFloatByte(const float A, const uint8 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterEqualByteInteger(const uint8 A, const int32 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterEqualByteFloat(const uint8 A, const float B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterByteInteger(const uint8 A, const int32 B) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::GreaterByteFloat(const uint8 A, const float B) {
    return false;
}

TArray<FColor> ULowEntryExtendedStandardLibrary::GrayscalePixels(const TArray<FColor>& Pixel) {
    return TArray<FColor>();
}

FColor ULowEntryExtendedStandardLibrary::GrayscalePixel(const FColor& Pixel) {
    return FColor{};
}

void ULowEntryExtendedStandardLibrary::GetWindowSize(bool& Success, int32& Width, int32& Height) {
}

void ULowEntryExtendedStandardLibrary::GetWindowPosition(bool& Success, int32& X, int32& Y) {
}

void ULowEntryExtendedStandardLibrary::GetWindowPositiomInPercentagesCentered(bool& Success, float& X, float& Y) {
}

void ULowEntryExtendedStandardLibrary::GetWindowMode(bool& Success, bool& Fullscreen, bool& IsFullscreenWindowed) {
}

void ULowEntryExtendedStandardLibrary::GetWindowBounds(bool& Success, int32& X, int32& Y, int32& Width, int32& Height) {
}

void ULowEntryExtendedStandardLibrary::GetWindowBorderSize(bool& Success, FMargin& Margin) {
}

FName ULowEntryExtendedStandardLibrary::GetUserFocusedWidgetType(const int32 UserIndex) {
    return NAME_None;
}

void ULowEntryExtendedStandardLibrary::GetSplitScreenType(ELowEntrySplitScreenType& Type) {
}

FString ULowEntryExtendedStandardLibrary::GetProjectVersion() {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::GetProjectName() {
    return TEXT("");
}

void ULowEntryExtendedStandardLibrary::GetPrimaryMonitorWorkArea(int32& X, int32& Y, int32& Width, int32& Height) {
}

void ULowEntryExtendedStandardLibrary::GetPrimaryMonitorResolution(int32& Width, int32& Height) {
}

void ULowEntryExtendedStandardLibrary::GetMousePositionInPercentages(bool& Success, float& X, float& Y) {
}

void ULowEntryExtendedStandardLibrary::GetMousePosition(bool& Success, int32& X, int32& Y) {
}

void ULowEntryExtendedStandardLibrary::GetMaximumVolume(int32& Volume, bool& Success) {
}

FVector2D ULowEntryExtendedStandardLibrary::GetLocalToAbsoluteScale(const FGeometry& Geometry) {
    return FVector2D{};
}

FName ULowEntryExtendedStandardLibrary::GetKeyboardFocusedWidgetType() {
    return NAME_None;
}

void ULowEntryExtendedStandardLibrary::GetGenericTeamId(AActor* Target, uint8& TeamID) {
}

void ULowEntryExtendedStandardLibrary::GetCurrentVolumePercentage(float& Percentage, bool& Success) {
}

void ULowEntryExtendedStandardLibrary::GetCurrentVolume(int32& Volume, bool& Success) {
}

void ULowEntryExtendedStandardLibrary::GetClassWithName(const FString& ClassName, UClass*& Class_, bool& Success) {
}

uint8 ULowEntryExtendedStandardLibrary::GetByteWithBitSet(const uint8 byte, const int32 Bit, const bool Value) {
    return 0;
}

void ULowEntryExtendedStandardLibrary::GetBatteryTemperature(float& Celsius, bool& Success) {
}

void ULowEntryExtendedStandardLibrary::GetBatteryState(ELowEntryBatteryState& State, bool& Success) {
}

void ULowEntryExtendedStandardLibrary::GetBatteryCharge(int32& Percentage, bool& Success) {
}

void ULowEntryExtendedStandardLibrary::GetAndroidVolume(int32& Volume) {
}

FString ULowEntryExtendedStandardLibrary::GetAndroidVersion() {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::GetAndroidOsLanguage() {
    return TEXT("");
}

int32 ULowEntryExtendedStandardLibrary::GetAndroidNumberOfCores() {
    return 0;
}

FString ULowEntryExtendedStandardLibrary::GetAndroidGpuFamily() {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::GetAndroidGlVersion() {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::GetAndroidDeviceModel() {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::GetAndroidDeviceMake() {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::GetAndroidDefaultLocale() {
    return TEXT("");
}

int32 ULowEntryExtendedStandardLibrary::GetAndroidBuildVersion() {
    return 0;
}

FVector2D ULowEntryExtendedStandardLibrary::GetAbsoluteToLocalScale(const FGeometry& Geometry) {
    return FVector2D{};
}

FVector2D ULowEntryExtendedStandardLibrary::GetAbsoluteSize(const FGeometry& Geometry) {
    return FVector2D{};
}

void ULowEntryExtendedStandardLibrary::GenerateRandomBytesRandomLength(int32 MinLength, int32 MaxLength, TArray<uint8>& ByteArray) {
}

void ULowEntryExtendedStandardLibrary::GenerateRandomBytes(const int32 Length, TArray<uint8>& ByteArray) {
}

float ULowEntryExtendedStandardLibrary::FloorDecimals(float Number, int32 Decimals) {
    return 0.0f;
}

TArray<uint8> ULowEntryExtendedStandardLibrary::FloatToBytes(const float Value) {
    return TArray<uint8>();
}

void ULowEntryExtendedStandardLibrary::ExecToInteger(const ELowEntryExtendedStandardLibrary0to9 Branch, int32& Value) {
}

void ULowEntryExtendedStandardLibrary::ExecToByte(const ELowEntryExtendedStandardLibrary0to9 Branch, uint8& Value) {
}

void ULowEntryExtendedStandardLibrary::ExecToBoolean(const ELowEntryExtendedStandardLibraryTrueOrFalse Branch, bool& Value) {
}

ULowEntryByteArray* ULowEntryExtendedStandardLibrary::EncapsulateByteArray(const TArray<uint8>& ByteArray) {
    return NULL;
}

ULowEntryDouble* ULowEntryExtendedStandardLibrary::Double_CreateZero() {
    return NULL;
}

ULowEntryDouble* ULowEntryExtendedStandardLibrary::Double_Create(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return NULL;
}

FVector2D ULowEntryExtendedStandardLibrary::Divide_Vector2dVector2d(const FVector2D& A, const FVector2D& B) {
    return FVector2D{};
}

bool ULowEntryExtendedStandardLibrary::DevelopmentBuild() {
    return false;
}

bool ULowEntryExtendedStandardLibrary::DesktopPlatform() {
    return false;
}

void ULowEntryExtendedStandardLibrary::DelayFrames(UObject* WorldContextObject, int32 Frames, FLatentActionInfo LatentInfo) {
}

bool ULowEntryExtendedStandardLibrary::DebugBuild() {
    return false;
}

void ULowEntryExtendedStandardLibrary::DateTime_ToUnixTimestamp(const FDateTime& DateTime, ULowEntryLong*& Timestamp) {
}

void ULowEntryExtendedStandardLibrary::DateTime_ToString(const FDateTime& DateTime, FString& string, const FString& Format) {
}

void ULowEntryExtendedStandardLibrary::DateTime_ToIso8601(const FDateTime& DateTime, FString& string) {
}

void ULowEntryExtendedStandardLibrary::DateTime_FromUnixTimestamp(ULowEntryLong* Timestamp, FDateTime& DateTime) {
}

FString ULowEntryExtendedStandardLibrary::CreateString(const int32 Length, const FString& Filler) {
    return TEXT("");
}

void ULowEntryExtendedStandardLibrary::CreateObject(UClass* Class, UObject*& Object) {
}

void ULowEntryExtendedStandardLibrary::Crash() {
}

void ULowEntryExtendedStandardLibrary::ConvertUtcDateToLocalDate(const FDateTime& Utc, FDateTime& Local) {
}

void ULowEntryExtendedStandardLibrary::ConvertLocalDateToUtcDate(const FDateTime& Local, FDateTime& Utc) {
}

void ULowEntryExtendedStandardLibrary::ClipboardSet(const FString& Value) {
}

FString ULowEntryExtendedStandardLibrary::ClipboardGet() {
    return TEXT("");
}

void ULowEntryExtendedStandardLibrary::ClearUserFocus(const int32 UserIndex) {
}

void ULowEntryExtendedStandardLibrary::ClearKeyboardFocus() {
}

void ULowEntryExtendedStandardLibrary::ClearAllUserFocus() {
}

void ULowEntryExtendedStandardLibrary::ChangeMap(UObject* WorldContextObject, const FString& Map, const FString& Args, APlayerController* SpecificPlayer) {
}

float ULowEntryExtendedStandardLibrary::CeilDecimals(float Number, int32 Decimals) {
    return 0.0f;
}

void ULowEntryExtendedStandardLibrary::CaseSwitchObject(const int32 OnlyCheckFirstX, const UObject* Value, const UObject* _1__, const UObject* _2__, const UObject* _3__, const UObject* _4__, const UObject* _5__, const UObject* _6__, const UObject* _7__, const UObject* _8__, const UObject* _9__, const UObject* _10__, ELowEntryExtendedStandardLibrary1to10other& Branch) {
}

void ULowEntryExtendedStandardLibrary::CaseSwitchInteger(const int32 OnlyCheckFirstX, const int32 Value, const int32 _1__, const int32 _2__, const int32 _3__, const int32 _4__, const int32 _5__, const int32 _6__, const int32 _7__, const int32 _8__, const int32 _9__, const int32 _10__, ELowEntryExtendedStandardLibrary1to10other& Branch) {
}

void ULowEntryExtendedStandardLibrary::CaseSwitchByte(const int32 OnlyCheckFirstX, const uint8 Value, const uint8 _1__, const uint8 _2__, const uint8 _3__, const uint8 _4__, const uint8 _5__, const uint8 _6__, const uint8 _7__, const uint8 _8__, const uint8 _9__, const uint8 _10__, ELowEntryExtendedStandardLibrary1to10other& Branch) {
}

FString ULowEntryExtendedStandardLibrary::CarriageReturnCharacter() {
    return TEXT("");
}

TArray<uint8> ULowEntryExtendedStandardLibrary::ByteToBytes(const uint8 Value) {
    return TArray<uint8>();
}

bool ULowEntryExtendedStandardLibrary::ByteToBoolean(const uint8 byte) {
    return false;
}

void ULowEntryExtendedStandardLibrary::ByteToBits(const uint8 byte, bool& Bit1, bool& Bit2, bool& Bit3, bool& Bit4, bool& Bit5, bool& Bit6, bool& Bit7, bool& Bit8) {
}

FString ULowEntryExtendedStandardLibrary::BytesToStringUtf8(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return TEXT("");
}

void ULowEntryExtendedStandardLibrary::BytesToPixels(const TArray<uint8>& ByteArray, const ELowEntryImageFormat ImageFormat, int32& Width, int32& Height, TArray<FColor>& Pixels, int32 Index, int32 Length) {
}

ULowEntryLong* ULowEntryExtendedStandardLibrary::BytesToLongBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return NULL;
}

int32 ULowEntryExtendedStandardLibrary::BytesToInteger(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return 0;
}

UTexture2D* ULowEntryExtendedStandardLibrary::BytesToImage(const TArray<uint8>& ByteArray, const ELowEntryImageFormat ImageFormat, int32 Index, int32 Length) {
    return NULL;
}

FString ULowEntryExtendedStandardLibrary::BytesToHex(const TArray<uint8>& ByteArray, const bool AddSpaces, int32 Index, int32 Length) {
    return TEXT("");
}

float ULowEntryExtendedStandardLibrary::BytesToFloat(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return 0.0f;
}

UTexture2D* ULowEntryExtendedStandardLibrary::BytesToExistingImage(bool& ReusedGivenTexture2D, UTexture2D* Texture2D, const TArray<uint8>& ByteArray, const ELowEntryImageFormat ImageFormat, int32 Index, int32 Length) {
    return NULL;
}

ULowEntryDouble* ULowEntryExtendedStandardLibrary::BytesToDoubleBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return NULL;
}

uint8 ULowEntryExtendedStandardLibrary::BytesToByte(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return 0;
}

bool ULowEntryExtendedStandardLibrary::BytesToBoolean(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return false;
}

FString ULowEntryExtendedStandardLibrary::BytesToBitString(const TArray<uint8>& ByteArray, const bool AddSpaces, int32 Index, int32 Length) {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::BytesToBinary(const TArray<uint8>& ByteArray, const bool AddSpaces, int32 Index, int32 Length) {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::BytesToBase64Url(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return TEXT("");
}

FString ULowEntryExtendedStandardLibrary::BytesToBase64(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return TEXT("");
}

TArray<uint8> ULowEntryExtendedStandardLibrary::BytesSubArray(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
    return TArray<uint8>();
}

TArray<uint8> ULowEntryExtendedStandardLibrary::ByteDataWriter_GetBytes(ULowEntryByteDataWriter* ByteDataWriter) {
    return TArray<uint8>();
}

ULowEntryByteDataWriter* ULowEntryExtendedStandardLibrary::ByteDataWriter_CreateFromEntryArrayPure(const TArray<ULowEntryByteDataEntry*>& Array) {
    return NULL;
}

ULowEntryByteDataWriter* ULowEntryExtendedStandardLibrary::ByteDataWriter_CreateFromEntryArray(const TArray<ULowEntryByteDataEntry*>& Array) {
    return NULL;
}

ULowEntryByteDataReader* ULowEntryExtendedStandardLibrary::ByteDataReader_Create(const TArray<uint8>& Bytes, int32 Index, int32 Length) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromStringUtf8Array(const TArray<FString>& Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromStringUtf8(const FString& Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger3Array(const TArray<int32>& Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger3(const int32 Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger2Array(const TArray<int32>& Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger2(const int32 Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger1Array(const TArray<int32>& Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger1(const int32 Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromLongBytesArray(const TArray<ULowEntryLong*>& Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromLongBytes(ULowEntryLong* Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromIntegerArray(const TArray<int32>& Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromInteger(const int32 Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromFloatArray(const TArray<float>& Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromFloat(const float Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromDoubleBytesArray(const TArray<ULowEntryDouble*>& Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromDoubleBytes(ULowEntryDouble* Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromByteArray(const TArray<uint8>& Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromByte(const uint8 Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromBooleanArray(const TArray<bool>& Value) {
    return NULL;
}

ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromBoolean(const bool Value) {
    return NULL;
}

TArray<uint8> ULowEntryExtendedStandardLibrary::BooleanToBytes(const bool Value) {
    return TArray<uint8>();
}

uint8 ULowEntryExtendedStandardLibrary::BooleanToByte(const bool Value) {
    return 0;
}

TArray<uint8> ULowEntryExtendedStandardLibrary::BitStringToBytes(const FString& Bits) {
    return TArray<uint8>();
}

void ULowEntryExtendedStandardLibrary::BitsToByte(const bool Bit1, const bool Bit2, const bool Bit3, const bool Bit4, const bool Bit5, const bool Bit6, const bool Bit7, const bool Bit8, uint8& byte) {
}

TArray<uint8> ULowEntryExtendedStandardLibrary::BitDataWriter_GetBytes(ULowEntryBitDataWriter* BitDataWriter) {
    return TArray<uint8>();
}

ULowEntryBitDataWriter* ULowEntryExtendedStandardLibrary::BitDataWriter_CreateFromEntryArrayPure(const TArray<ULowEntryBitDataEntry*>& Array) {
    return NULL;
}

ULowEntryBitDataWriter* ULowEntryExtendedStandardLibrary::BitDataWriter_CreateFromEntryArray(const TArray<ULowEntryBitDataEntry*>& Array) {
    return NULL;
}

ULowEntryBitDataReader* ULowEntryExtendedStandardLibrary::BitDataReader_Create(const TArray<uint8>& Bytes, int32 Index, int32 Length) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromStringUtf8Array(const TArray<FString>& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromStringUtf8(const FString& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger3Array(const TArray<int32>& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger3(const int32 Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger2Array(const TArray<int32>& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger2(const int32 Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger1Array(const TArray<int32>& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger1(const int32 Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromLongBytesArray(const TArray<ULowEntryLong*>& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromLongBytes(ULowEntryLong* Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromIntegerMostSignificantBits(const int32 Value, const int32 BitCount) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromIntegerLeastSignificantBits(const int32 Value, const int32 BitCount) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromIntegerArrayMostSignificantBits(const TArray<int32>& Value, const int32 BitCount) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromIntegerArrayLeastSignificantBits(const TArray<int32>& Value, const int32 BitCount) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromIntegerArray(const TArray<int32>& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromInteger(const int32 Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromFloatArray(const TArray<float>& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromFloat(const float Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromDoubleBytesArray(const TArray<ULowEntryDouble*>& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromDoubleBytes(ULowEntryDouble* Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByteMostSignificantBits(const uint8 Value, const int32 BitCount) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByteLeastSignificantBits(const uint8 Value, const int32 BitCount) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByteArrayMostSignificantBits(const TArray<uint8>& Value, const int32 BitCount) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByteArrayLeastSignificantBits(const TArray<uint8>& Value, const int32 BitCount) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByteArray(const TArray<uint8>& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByte(const uint8 Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromBooleanArray(const TArray<bool>& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromBoolean(const bool Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromBitArray(const TArray<bool>& Value) {
    return NULL;
}

ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromBit(const bool Value) {
    return NULL;
}

TArray<uint8> ULowEntryExtendedStandardLibrary::BinaryToBytes(const FString& Binary) {
    return TArray<uint8>();
}

TArray<uint8> ULowEntryExtendedStandardLibrary::BCrypt(const TArray<uint8>& ByteArray, const TArray<uint8>& Salt, int32 Strength, int32 Index, int32 Length) {
    return TArray<uint8>();
}

TArray<uint8> ULowEntryExtendedStandardLibrary::Base64UrlToBytes(const FString& Base64Url) {
    return TArray<uint8>();
}

FString ULowEntryExtendedStandardLibrary::Base64UrlToBase64(const FString& Base64Url) {
    return TEXT("");
}

TArray<uint8> ULowEntryExtendedStandardLibrary::Base64ToBytes(const FString& Base64) {
    return TArray<uint8>();
}

FString ULowEntryExtendedStandardLibrary::Base64ToBase64Url(const FString& Base64) {
    return TEXT("");
}

bool ULowEntryExtendedStandardLibrary::AreBytesEqual(const TArray<uint8>& A, const TArray<uint8>& B, int32 IndexA, int32 LengthA, int32 IndexB, int32 LengthB) {
    return false;
}

bool ULowEntryExtendedStandardLibrary::AreAndroidHeadphonesPluggedIn() {
    return false;
}

bool ULowEntryExtendedStandardLibrary::AndroidPlatform() {
    return false;
}


