#include "SBBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

USBBlueprintLibrary::USBBlueprintLibrary() {
}

void USBBlueprintLibrary::WaterBodyUpdate(UObject* WorldContextObject, USceneCaptureComponent2D* SceneCaptureComponent2D, UTextureRenderTarget2D* CurrentHeightRenderTarget, UTextureRenderTarget2D* PreviousHeightRenderTarget0, UTextureRenderTarget2D* PreviousHeightRenderTarget1, UTextureRenderTarget2D* HeightFieldNormalRenderTarget, UMaterialInstanceDynamic* ForceSplatMaterial, UMaterialInstanceDynamic* ComputeNormalMaterial, UMaterialInstanceDynamic* HeightSimMaterial, UMaterialInstanceDynamic* DepthCaptureMaterial, UMaterialParameterCollection* InWaterSimParamMPC, UMaterialParameterCollection* InWaterFxMPC, float ActivatedWaterHeight, float PlayerCharacterWaterDepth, float UnderWaterPrecision, bool bIsOcean) {
}

bool USBBlueprintLibrary::UseGroupingByCulture() {
    return false;
}

void USBBlueprintLibrary::UpdateWaterSceneCaptureComponent(float InRange, TSubclassOf<UActorComponent> ComponentClass, FName ComponentTag, FName ForceUpdateComponentTag, float CheckVelocity, USceneCaptureComponent2D* SceneCaptureComponent) {
}

void USBBlueprintLibrary::UpdateWaterHeight(UObject* WorldContextObject, const TArray<FName>& ActiveSockets, UStaticMeshComponent* pFloatingMesh, float WaterHeightOffset, float AverageStrength, float MaxStrength, bool bDebug) {
}

void USBBlueprintLibrary::UpdateEventMoveInstance(USBEventMoveDataComponent* EventMoveDataComponent, FVector StartTargetLocation, FRotator StartTargetRotation, FVector StartLeaveLocation, FRotator StartLeaveRotation, FVector EndTargetLocation, FRotator EndTargetRotation, FVector EndLeaveLocation, FRotator EndLeaveRotation) {
}

void USBBlueprintLibrary::UnApplySBEnvSettingDataToScene() {
}

void USBBlueprintLibrary::TurntableRefreshMusic(bool bNoise) {
}

void USBBlueprintLibrary::TurntablePrevMusic(bool bNoise) {
}

void USBBlueprintLibrary::TurntableNextMusic(bool bNoise) {
}

FText USBBlueprintLibrary::TimeSecondsToL10NTextWithHours(float InSeconds) {
    return FText::GetEmpty();
}

FText USBBlueprintLibrary::TimeSecondsToL10NText(float InSeconds) {
    return FText::GetEmpty();
}

TArray<FString> USBBlueprintLibrary::TextToStringArray(FText InText) {
    return TArray<FString>();
}

void USBBlueprintLibrary::ShowHDRScene(UTexture* InTexture, bool bImageView) {
}

void USBBlueprintLibrary::SetWorldCompositionStreamPawnLocation(bool bEnable) {
}

void USBBlueprintLibrary::SetUMGSharedValue(const FName& InTag, float InValue) {
}

void USBBlueprintLibrary::SetTurntableMusicIndex(int32 InIndex) {
}

void USBBlueprintLibrary::SetGamePuase(bool InIsPause) {
}

void USBBlueprintLibrary::SetForceSubSteppingValue(bool bEnable) {
}

void USBBlueprintLibrary::SetForceMipLevelsToBeResidentFromSkeletalMesh(USkeletalMesh* inMeshComponent, float MipForceDuration) {
}

void USBBlueprintLibrary::SetForceMipLevelsToBeResident(UMeshComponent* inMeshComponent, float MipForceDuration) {
}

void USBBlueprintLibrary::SetEventMoveInstanceEnableFlag(USBEventMoveDataComponent* EventMoveDataComponent, bool bFlag) {
}

void USBBlueprintLibrary::SetEventDirectionToPlayer(FVector InDir) {
}

void USBBlueprintLibrary::SetDroneBodyMeshName(FName inBodyMeshName) {
}

void USBBlueprintLibrary::SetControllerLightColor(FColor Color) {
}

bool USBBlueprintLibrary::SaveStringsToTextFile(const FString& Filename, const TArray<FString>& Strings) {
    return false;
}

void USBBlueprintLibrary::ResetControllerLightColor() {
}

void USBBlueprintLibrary::RequestPlaySession(FVector inPlayLocation) {
}

void USBBlueprintLibrary::RemoveUMGSharedValue(const FName& InTag) {
}

bool USBBlueprintLibrary::RemoveEventMoveInstance(USBEventMoveDataComponent* EventMoveDataComponent) {
    return false;
}

bool USBBlueprintLibrary::RemoveDeactiveMovingInstance(USBDeactiveMovingComponent* DeactiveMovingComponent) {
    return false;
}

void USBBlueprintLibrary::PlayVibrationAtLocation(USBVibrationSet* InVibrationSet, const FVector& InLocation) {
}

void USBBlueprintLibrary::PlayVibration(USBVibrationSet* InVibrationSet) {
}

void USBBlueprintLibrary::PlaySoundatLocation(USoundBase* InSound, FVector InLocation, FRotator InRotation, float InVolumeMultiplier, float InPitchMultiplier, float InStartTime, USoundAttenuation* InAttenuationSettings, USoundConcurrency* InConcurrencySettings, AActor* OwningActor) {
}

void USBBlueprintLibrary::PlaySBShowToPlayerCharacter(USBShowData* InShow) {
}

USkeletalMesh* USBBlueprintLibrary::MergeMeshes(const FSkeletalMeshMergeParams& Params) {
    return NULL;
}

FGuid USBBlueprintLibrary::LoadingScreenFadeAuto(float InLifeTime, float InStartDuration, float InStartAlphaFrom, float InStartAlphaEnd, float InEndDuration, float InEndAlphaFrom, float InEndAlphaEnd, ESBUILoadingScreenTag InScreenTag) {
    return FGuid{};
}

bool USBBlueprintLibrary::LastInputDeviceGamepad() {
    return false;
}

bool USBBlueprintLibrary::IsUMGTargetReceiveWidget(USBUserWidget* InWidget) {
    return false;
}

bool USBBlueprintLibrary::IsThumbStickKeyName(const FName& InKeyName) {
    return false;
}

bool USBBlueprintLibrary::IsSBUMGCursorVisible() {
    return false;
}

bool USBBlueprintLibrary::IsSaving() {
    return false;
}

bool USBBlueprintLibrary::IsPortableGamingDevice() {
    return false;
}

bool USBBlueprintLibrary::IsPlayNewGamePlus() {
    return false;
}

bool USBBlueprintLibrary::IsPlayerSwimming() {
    return false;
}

bool USBBlueprintLibrary::IsLastInputDeviceGamepad() {
    return false;
}

bool USBBlueprintLibrary::IsKeymappingCombination(FInputActionKeyMapping InKeyMapping, bool bCheckStateKeyboard) {
    return false;
}

bool USBBlueprintLibrary::IsEnabledHDR() {
    return false;
}

bool USBBlueprintLibrary::IsCultureArab() {
    return false;
}

bool USBBlueprintLibrary::IsActiveSBEnvCounter(TEnumAsByte<ESBWorldEnvCounterType> InType) {
    return false;
}

bool USBBlueprintLibrary::IsActiveMinimizeUI() {
    return false;
}

bool USBBlueprintLibrary::HUDAspectRatioGameOptionApply() {
    return false;
}

void USBBlueprintLibrary::HideHDRScene() {
}

bool USBBlueprintLibrary::HasUMGSharedValue(const FName& InTag) {
    return false;
}

float USBBlueprintLibrary::GetWorldWaterHeight(FVector InLocation) {
    return 0.0f;
}

float USBBlueprintLibrary::GetWorldGlobalValue(TEnumAsByte<ESBWorldGlobalValueType> InType) {
    return 0.0f;
}

int32 USBBlueprintLibrary::GetWaterSimUpdateQuality() {
    return 0;
}

TArray<UFoliageType*> USBBlueprintLibrary::GetUsedFoliageTypes(AInstancedFoliageActor* Actor) {
    return TArray<UFoliageType*>();
}

float USBBlueprintLibrary::GetUMGSharedValue(const FName& InTag) {
    return 0.0f;
}

int32 USBBlueprintLibrary::GetTurntableMusicIndex() {
    return 0;
}

FVector USBBlueprintLibrary::GetTraceDirectionRigSpace(AActor* OwningActor, const FSBEventMoveIKData& InData) {
    return FVector{};
}

FName USBBlueprintLibrary::GetThumbStickReverseKeyName(const FName& InKeyName) {
    return NAME_None;
}

UTexture2D* USBBlueprintLibrary::GetTextureFromUIKeyNameImageAsset(FName InKeyName, FName InInputDeviceType, FName InTag) {
    return NULL;
}

UTexture2D* USBBlueprintLibrary::GetTextureFromUIKeyImageAsset(FKey InKey, FName InInputDeviceType, FName InTag) {
    return NULL;
}

UTexture2D* USBBlueprintLibrary::GetTextureFromSwipeOption(ESBGameOptionSwipeShortCutType InSwipeOptionType, FName InInputDeviceType, FName InTag) {
    return NULL;
}

UTexture2D* USBBlueprintLibrary::GetTextureFromKeymappingCombination(FInputActionKeyMapping InKeyMapping, FName InInputDeviceType, FName InTag) {
    return NULL;
}

UTexture2D* USBBlueprintLibrary::GetTextureFromKeymapping(FInputActionKeyMapping InKeyMapping, FName InInputDeviceType, FName InTag) {
    return NULL;
}

UTexture2D* USBBlueprintLibrary::GetTextureFromAxisKeyMapping(FInputAxisKeyMapping InKeyMapping, FName InInputDeviceType, FName InTag) {
    return NULL;
}

float USBBlueprintLibrary::GetSplashScreenMinimumPlayTime() {
    return 0.0f;
}

float USBBlueprintLibrary::GetSoundVolume(ESBSoundVolumeChannel InChannel) {
    return 0.0f;
}

TEnumAsByte<ESlateBrushResourceType> USBBlueprintLibrary::GetSlateBrushResourceType() {
    return ESlateBrushResourceType_Default;
}

TArray<FString> USBBlueprintLibrary::GetSettingRollingItemsValue(ESBUISettingRollingType InSettingRollingType) {
    return TArray<FString>();
}

TArray<FText> USBBlueprintLibrary::GetSettingRollingItemsDisplay(ESBUISettingRollingType InSettingRollingType) {
    return TArray<FText>();
}

void USBBlueprintLibrary::GetRuntimeFloatCurveValueRange(const FRuntimeFloatCurve& RuntimeFloatCurve, float& MinValue, float& MaxValue) const {
}

float USBBlueprintLibrary::GetRuntimeFloatCurveValue(const FRuntimeFloatCurve& Curve, float Time) {
    return 0.0f;
}

void USBBlueprintLibrary::GetRuntimeFloatCurveTimeRange(const FRuntimeFloatCurve& RuntimeFloatCurve, float& MinTime, float& MaxTime) const {
}

float USBBlueprintLibrary::GetRightInputYAxis() {
    return 0.0f;
}

float USBBlueprintLibrary::GetRightInputXAxis() {
    return 0.0f;
}

ESBGameOptionReverseLRStickType USBBlueprintLibrary::GetReverseLRStickOption() {
    return ESBGameOptionReverseLRStickType::Disable;
}

ESBGameOptionPuzzleTimeLimitType USBBlueprintLibrary::GetPuzzleTimeLimitOption() {
    return ESBGameOptionPuzzleTimeLimitType::Normal;
}

FName USBBlueprintLibrary::GetPlayerMeshInfoTag(TEnumAsByte<ESBSkelMeshSlot> SlotType) {
    return NAME_None;
}

bool USBBlueprintLibrary::GetOptionReverseLRStick() {
    return false;
}

FString USBBlueprintLibrary::GetOptionLanguageCode() {
    return TEXT("");
}

bool USBBlueprintLibrary::GetOptionEnableEventContents() {
    return false;
}

ESBOnlineStoreType USBBlueprintLibrary::GetOnlineStoreStoreType() {
    return ESBOnlineStoreType::None;
}

UNiagaraSystem* USBBlueprintLibrary::GetNiagaraSystem(FSBNiagaraSystemWithOverrideParam inNiagaraSystemWithOverrideParam) {
    return NULL;
}

int32 USBBlueprintLibrary::GetNiagaraQualityLevel() {
    return 0;
}

float USBBlueprintLibrary::GetMouseYAxis() {
    return 0.0f;
}

float USBBlueprintLibrary::GetMouseXAxis() {
    return 0.0f;
}

float USBBlueprintLibrary::GetMouseWheelAxis() {
    return 0.0f;
}

FName USBBlueprintLibrary::GetMouseButtonKeyName(const FPointerEvent& InPointerEvent) {
    return NAME_None;
}

TEnumAsByte<EBlendMode> USBBlueprintLibrary::GetMaterialInterfaceBlendMode(UMaterialInterface* MaterialInterface) {
    return BLEND_Opaque;
}

FText USBBlueprintLibrary::GetLocalizeText(TEnumAsByte<ESBLocalize> LocalizeType, const FString& OriginString) {
    return FText::GetEmpty();
}

FText USBBlueprintLibrary::GetLocalizeActorStatValue(TEnumAsByte<ESBActorStatType> InStatType, float InValue) {
    return FText::GetEmpty();
}

FText USBBlueprintLibrary::GetLocalizeActorStatName(TEnumAsByte<ESBActorStatType> InStatType) {
    return FText::GetEmpty();
}

float USBBlueprintLibrary::GetLeftInputYAxis() {
    return 0.0f;
}

float USBBlueprintLibrary::GetLeftInputXAxis() {
    return 0.0f;
}

TEnumAsByte<ESlateBrushResourceType> USBBlueprintLibrary::GetLastGamePadSlateBrushResourceType() {
    return ESlateBrushResourceType_Default;
}

FText USBBlueprintLibrary::GetKeyTextLastGamePad(const FName& InKeyName) {
    return FText::GetEmpty();
}

FText USBBlueprintLibrary::GetKeyText(const FName& InKeyName) {
    return FText::GetEmpty();
}

FName USBBlueprintLibrary::GetKeyName(const FKey& InKey) {
    return NAME_None;
}

TArray<FInputAxisKeyMapping> USBBlueprintLibrary::GetKeyMappingsFromInputAxis(FName InAxisName, ESBKeyMappingAxisScaleType InAxisScale, bool InMainKey, bool InInputDeviceGamepad) {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FInputActionKeyMapping> USBBlueprintLibrary::GetKeyMappingsFromInputAction(FName InActionName, bool InMainKey, bool InInputDeviceGamepad) {
    return TArray<FInputActionKeyMapping>();
}

ESBKeyboardType USBBlueprintLibrary::GetKeyboardType() {
    return ESBKeyboardType::QWERTY;
}

TArray<FTransform> USBBlueprintLibrary::GetInstanceTransforms(AInstancedFoliageActor* Actor, UFoliageType* FoliageType, ULevel* InstancesLevel) {
    return TArray<FTransform>();
}

FName USBBlueprintLibrary::GetInputActionNameBack() {
    return NAME_None;
}

FName USBBlueprintLibrary::GetInputActionNameAccept() {
    return NAME_None;
}

ESBGameOptionHUDSizeType USBBlueprintLibrary::GetHUDSizeType() {
    return ESBGameOptionHUDSizeType::Large;
}

float USBBlueprintLibrary::GetGamepadRightYAxis() {
    return 0.0f;
}

float USBBlueprintLibrary::GetGamepadRightXAxis() {
    return 0.0f;
}

float USBBlueprintLibrary::GetGamepadLeftYAxis() {
    return 0.0f;
}

float USBBlueprintLibrary::GetGamepadLeftXAxis() {
    return 0.0f;
}

FKey USBBlueprintLibrary::GetGamepadBackKey() {
    return FKey{};
}

FKey USBBlueprintLibrary::GetGamepadAcceptKey() {
    return FKey{};
}

int32 USBBlueprintLibrary::GetFuidFluxQuality() {
    return 0;
}

TEnumAsByte<EPhysicalSurface> USBBlueprintLibrary::GetFootStepPhySurface(const FVector InLocation, TEnumAsByte<EPhysicalSurface> InDefaultSurface) {
    return SurfaceType_Default;
}

FString USBBlueprintLibrary::GetEquipLilyMeshAssetPath() {
    return TEXT("");
}

bool USBBlueprintLibrary::GetEnableSummerEventContents() {
    return false;
}

bool USBBlueprintLibrary::GetEnableDLCContents() {
    return false;
}

bool USBBlueprintLibrary::GetEnableChristmasEventContents() {
    return false;
}

FName USBBlueprintLibrary::GetDroneBodyMeshName() {
    return NAME_None;
}

float USBBlueprintLibrary::GetDisplayGamma() {
    return 0.0f;
}

bool USBBlueprintLibrary::GetConfigBoolValue(const FString& InKey, bool inDefaultValue) {
    return false;
}

TArray<FName> USBBlueprintLibrary::GetCollisionProfileNames() {
    return TArray<FName>();
}

TArray<ASBItem*> USBBlueprintLibrary::GetAllSBItemActors() {
    return TArray<ASBItem*>();
}

bool USBBlueprintLibrary::GetActiveEnvControlSettings(TArray<FString>& outActiveEnvControlName, TArray<float>& outActiveEnvControlWeight) {
    return false;
}

bool USBBlueprintLibrary::FocusLockFrameCount(int32 LockCount) {
    return false;
}

void USBBlueprintLibrary::FindUserWidgetByTag(FName InTag, TArray<USBUserWidget*>& OutWidgets) {
}

USBUserWidget* USBBlueprintLibrary::FindFirstUserWidgetByTag(FName InTag) {
    return NULL;
}

bool USBBlueprintLibrary::EntryNikkeStage() {
    return false;
}

void USBBlueprintLibrary::DelayFrames(UObject* WorldContextObject, int32 Frames, FLatentActionInfo LatentInfo) {
}

bool USBBlueprintLibrary::CurrentCultureArab() {
    return false;
}

USBVibrationComponent* USBBlueprintLibrary::CreateVibration2D(USBVibrationSet* InVibrationSet, bool InAutoDestroy) {
    return NULL;
}

void USBBlueprintLibrary::CreateSBZoneEvent(TEnumAsByte<ESBZoneEventType> InType, FName ZoneActorEffectAlias) {
}

void USBBlueprintLibrary::CreateProjectile(UClass* ProjectileRes, FTransform StartTargetTransform, FTransform DestTargetTransform, TEnumAsByte<ESBProjectileMovementType::Type> MovementType, FSBProjectileUpdateInfo UpdateInfo, float DestroyWaitTime) {
}

void USBBlueprintLibrary::CopySBEnvSettingData(USBEnvSettingData* inCopyFromData, USBEnvSettingData* inCopyToData) {
}

UTextureRenderTarget2D* USBBlueprintLibrary::CopyBackBufferToRenderTarget() {
    return NULL;
}

uint8 USBBlueprintLibrary::ConvertTraceTypeToByte(const FSBEventMoveIKData& InData) {
    return 0;
}

bool USBBlueprintLibrary::ConvertOpaqueToMaksedDitherMaterialInstance(UMaterialInstance* MaterialInstance) {
    return false;
}

bool USBBlueprintLibrary::ConvertInvalidMaskedToOpaqueDitherMaterialInstance(UMaterialInstance* MaterialInstance) {
    return false;
}

bool USBBlueprintLibrary::ConsoleCommand(const FString& Command, bool WriteToLog) {
    return false;
}

void USBBlueprintLibrary::CallMultithreadedFunction(UObject* Object) {
}

void USBBlueprintLibrary::ApplySBEnvSettingDataToScene(USBEnvSettingData* inEnvData) {
}

bool USBBlueprintLibrary::AddEventMoveInstance(USBEventMoveDataComponent* EventMoveDataComponent, FVector StartTargetLocation, FRotator StartTargetRotation, FVector StartLeaveLocation, FRotator StartLeaveRotation, FVector EndTargetLocation, FRotator EndTargetRotation, FVector EndLeaveLocation, FRotator EndLeaveRotation, UPrimitiveComponent* CollisionBoundComponent, AActor* EventMeshActor, USplineComponent* BalanceMovingSplineComponent, UPrimitiveComponent* CollisionAtFailedInteraction) {
    return false;
}

bool USBBlueprintLibrary::AddDeactiveMovingInstance(USBDeactiveMovingComponent* DeactiveMovingComponent, UPrimitiveComponent* CollisionBoundComponent) {
    return false;
}


