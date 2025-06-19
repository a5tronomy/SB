#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "Engine/LatentActionManager.h"
#include "Curves/CurveFloat.h"
#include "InputCoreTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SBEventMoveIKData.h"
#include "StellarBladeCustom.h"
#include "Input/Events.h"
#include "ESBActorStatType.h"
#include "ESBGameOptionHUDSizeType.h"
#include "ESBGameOptionPuzzleTimeLimitType.h"
#include "ESBGameOptionReverseLRStickType.h"
#include "ESBGameOptionSwipeShortCutType.h"
#include "ESBKeyMappingAxisScaleType.h"
#include "ESBKeyboardType.h"
#include "ESBLocalize.h"
#include "ESBOnlineStoreType.h"
#include "ESBProjectileMovementType.h"
#include "ESBSkelMeshSlot.h"
#include "ESBSoundVolumeChannel.h"
#include "ESBUILoadingScreenTag.h"
#include "ESBUISettingRollingType.h"
#include "ESBWorldEnvCounterType.h"
#include "ESBWorldGlobalValueType.h"
#include "ESBZoneEventType.h"
#include "SBNiagaraSystemWithOverrideParam.h"
#include "SBProjectileUpdateInfo.h"
#include "SkeletalMeshMergeParams.h"
#include "Templates/SubclassOf.h"
#include "SBBlueprintLibrary.generated.h"

class AActor;
class AInstancedFoliageActor;
class ASBItem;
class UActorComponent;
class UFoliageType;
class ULevel;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UMeshComponent;
class UNiagaraSystem;
class UObject;
class UPrimitiveComponent;
class USBDeactiveMovingComponent;
class USBEnvSettingData;
class USBEventMoveDataComponent;
class USBShowData;
class USBUserWidget;
class USBVibrationComponent;
class USBVibrationSet;
class USceneCaptureComponent2D;
class USkeletalMesh;
class USoundAttenuation;
class USoundBase;
class USoundConcurrency;
class USplineComponent;
class UStaticMeshComponent;
class UTexture;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class USBBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WaterBodyUpdate(UObject* WorldContextObject, USceneCaptureComponent2D* SceneCaptureComponent2D, UTextureRenderTarget2D* CurrentHeightRenderTarget, UTextureRenderTarget2D* PreviousHeightRenderTarget0, UTextureRenderTarget2D* PreviousHeightRenderTarget1, UTextureRenderTarget2D* HeightFieldNormalRenderTarget, UMaterialInstanceDynamic* ForceSplatMaterial, UMaterialInstanceDynamic* ComputeNormalMaterial, UMaterialInstanceDynamic* HeightSimMaterial, UMaterialInstanceDynamic* DepthCaptureMaterial, UMaterialParameterCollection* InWaterSimParamMPC, UMaterialParameterCollection* InWaterFxMPC, float ActivatedWaterHeight, float PlayerCharacterWaterDepth, float UnderWaterPrecision, bool bIsOcean);
    
    UFUNCTION(BlueprintPure)
    static bool UseGroupingByCulture();
    
    UFUNCTION(BlueprintCallable)
    static void UpdateWaterSceneCaptureComponent(float InRange, TSubclassOf<UActorComponent> ComponentClass, FName ComponentTag, FName ForceUpdateComponentTag, float CheckVelocity, USceneCaptureComponent2D* SceneCaptureComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateWaterHeight(UObject* WorldContextObject, const TArray<FName>& ActiveSockets, UStaticMeshComponent* pFloatingMesh, float WaterHeightOffset, float AverageStrength, float MaxStrength, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateEventMoveInstance(USBEventMoveDataComponent* EventMoveDataComponent, FVector StartTargetLocation, FRotator StartTargetRotation, FVector StartLeaveLocation, FRotator StartLeaveRotation, FVector EndTargetLocation, FRotator EndTargetRotation, FVector EndLeaveLocation, FRotator EndLeaveRotation);
    
    UFUNCTION(BlueprintCallable)
    static void UnApplySBEnvSettingDataToScene();
    
    UFUNCTION(BlueprintCallable)
    static void TurntableRefreshMusic(bool bNoise);
    
    UFUNCTION(BlueprintCallable)
    static void TurntablePrevMusic(bool bNoise);
    
    UFUNCTION(BlueprintCallable)
    static void TurntableNextMusic(bool bNoise);
    
    UFUNCTION(BlueprintPure)
    static FText TimeSecondsToL10NTextWithHours(float InSeconds);
    
    UFUNCTION(BlueprintPure)
    static FText TimeSecondsToL10NText(float InSeconds);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> TextToStringArray(FText InText);
    
    UFUNCTION(BlueprintCallable)
    static void ShowHDRScene(UTexture* InTexture, bool bImageView);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldCompositionStreamPawnLocation(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetUMGSharedValue(const FName& InTag, float InValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetTurntableMusicIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetGamePuase(bool InIsPause);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceSubSteppingValue(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceMipLevelsToBeResidentFromSkeletalMesh(USkeletalMesh* inMeshComponent, float MipForceDuration);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceMipLevelsToBeResident(UMeshComponent* inMeshComponent, float MipForceDuration);
    
    UFUNCTION(BlueprintCallable)
    static void SetEventMoveInstanceEnableFlag(USBEventMoveDataComponent* EventMoveDataComponent, bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    static void SetEventDirectionToPlayer(FVector InDir);
    
    UFUNCTION(BlueprintCallable)
    static void SetDroneBodyMeshName(FName inBodyMeshName);
    
    UFUNCTION(BlueprintCallable)
    static void SetControllerLightColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveStringsToTextFile(const FString& Filename, const TArray<FString>& Strings);
    
    UFUNCTION(BlueprintCallable)
    static void ResetControllerLightColor();
    
    UFUNCTION(BlueprintCallable)
    static void RequestPlaySession(FVector inPlayLocation);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveUMGSharedValue(const FName& InTag);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveEventMoveInstance(USBEventMoveDataComponent* EventMoveDataComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveDeactiveMovingInstance(USBDeactiveMovingComponent* DeactiveMovingComponent);
    
    UFUNCTION(BlueprintCallable)
    static void PlayVibrationAtLocation(USBVibrationSet* InVibrationSet, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable)
    static void PlayVibration(USBVibrationSet* InVibrationSet);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySoundatLocation(USoundBase* InSound, FVector InLocation, FRotator InRotation, float InVolumeMultiplier, float InPitchMultiplier, float InStartTime, USoundAttenuation* InAttenuationSettings, USoundConcurrency* InConcurrencySettings, AActor* OwningActor);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySBShowToPlayerCharacter(USBShowData* InShow);
    
    UFUNCTION(BlueprintCallable)
    static USkeletalMesh* MergeMeshes(const FSkeletalMeshMergeParams& Params);
    
    UFUNCTION(BlueprintCallable)
    static FGuid LoadingScreenFadeAuto(float InLifeTime, float InStartDuration, float InStartAlphaFrom, float InStartAlphaEnd, float InEndDuration, float InEndAlphaFrom, float InEndAlphaEnd, ESBUILoadingScreenTag InScreenTag);
    
    UFUNCTION(BlueprintCallable)
    static bool LastInputDeviceGamepad();
    
    UFUNCTION(BlueprintPure)
    static bool IsUMGTargetReceiveWidget(USBUserWidget* InWidget);
    
    UFUNCTION(BlueprintPure)
    static bool IsThumbStickKeyName(const FName& InKeyName);
    
    UFUNCTION(BlueprintPure)
    static bool IsSBUMGCursorVisible();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSaving();
    
    UFUNCTION(BlueprintPure)
    static bool IsPortableGamingDevice();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayNewGamePlus();
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayerSwimming();
    
    UFUNCTION(BlueprintPure)
    static bool IsLastInputDeviceGamepad();
    
    UFUNCTION(BlueprintCallable)
    static bool IsKeymappingCombination(FInputActionKeyMapping InKeyMapping, bool bCheckStateKeyboard);
    
    UFUNCTION(BlueprintPure)
    static bool IsEnabledHDR();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCultureArab();
    
    UFUNCTION(BlueprintPure)
    static bool IsActiveSBEnvCounter(TEnumAsByte<ESBWorldEnvCounterType> InType);
    
    UFUNCTION(BlueprintPure)
    static bool IsActiveMinimizeUI();
    
    UFUNCTION(BlueprintCallable)
    static bool HUDAspectRatioGameOptionApply();
    
    UFUNCTION(BlueprintCallable)
    static void HideHDRScene();
    
    UFUNCTION(BlueprintCallable)
    static bool HasUMGSharedValue(const FName& InTag);
    
    UFUNCTION(BlueprintPure)
    static float GetWorldWaterHeight(FVector InLocation);
    
    UFUNCTION(BlueprintPure)
    static float GetWorldGlobalValue(TEnumAsByte<ESBWorldGlobalValueType> InType);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetWaterSimUpdateQuality();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UFoliageType*> GetUsedFoliageTypes(AInstancedFoliageActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static float GetUMGSharedValue(const FName& InTag);
    
    UFUNCTION(BlueprintPure)
    static int32 GetTurntableMusicIndex();
    
    UFUNCTION(BlueprintPure)
    static FVector GetTraceDirectionRigSpace(AActor* OwningActor, const FSBEventMoveIKData& InData);
    
    UFUNCTION(BlueprintPure)
    static FName GetThumbStickReverseKeyName(const FName& InKeyName);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetTextureFromUIKeyNameImageAsset(FName InKeyName, FName InInputDeviceType, FName InTag);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetTextureFromUIKeyImageAsset(FKey InKey, FName InInputDeviceType, FName InTag);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetTextureFromSwipeOption(ESBGameOptionSwipeShortCutType InSwipeOptionType, FName InInputDeviceType, FName InTag);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetTextureFromKeymappingCombination(FInputActionKeyMapping InKeyMapping, FName InInputDeviceType, FName InTag);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetTextureFromKeymapping(FInputActionKeyMapping InKeyMapping, FName InInputDeviceType, FName InTag);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetTextureFromAxisKeyMapping(FInputAxisKeyMapping InKeyMapping, FName InInputDeviceType, FName InTag);
    
    UFUNCTION(BlueprintPure)
    static float GetSplashScreenMinimumPlayTime();
    
    UFUNCTION(BlueprintPure)
    static float GetSoundVolume(ESBSoundVolumeChannel InChannel);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<ESlateBrushResourceType> GetSlateBrushResourceType();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetSettingRollingItemsValue(ESBUISettingRollingType InSettingRollingType);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FText> GetSettingRollingItemsDisplay(ESBUISettingRollingType InSettingRollingType);
    
    UFUNCTION(BlueprintPure)
    void GetRuntimeFloatCurveValueRange(const FRuntimeFloatCurve& RuntimeFloatCurve, float& MinValue, float& MaxValue) const;
    
    UFUNCTION(BlueprintPure)
    static float GetRuntimeFloatCurveValue(const FRuntimeFloatCurve& Curve, float Time);
    
    UFUNCTION(BlueprintPure)
    void GetRuntimeFloatCurveTimeRange(const FRuntimeFloatCurve& RuntimeFloatCurve, float& MinTime, float& MaxTime) const;
    
    UFUNCTION(BlueprintPure)
    static float GetRightInputYAxis();
    
    UFUNCTION(BlueprintPure)
    static float GetRightInputXAxis();
    
    UFUNCTION(BlueprintPure)
    static ESBGameOptionReverseLRStickType GetReverseLRStickOption();
    
    UFUNCTION(BlueprintPure)
    static ESBGameOptionPuzzleTimeLimitType GetPuzzleTimeLimitOption();
    
    UFUNCTION(BlueprintCallable)
    static FName GetPlayerMeshInfoTag(TEnumAsByte<ESBSkelMeshSlot> SlotType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetOptionReverseLRStick();
    
    UFUNCTION(BlueprintCallable)
    static FString GetOptionLanguageCode();
    
    UFUNCTION(BlueprintCallable)
    static bool GetOptionEnableEventContents();
    
    UFUNCTION(BlueprintPure)
    static ESBOnlineStoreType GetOnlineStoreStoreType();
    
    UFUNCTION(BlueprintCallable)
    static UNiagaraSystem* GetNiagaraSystem(FSBNiagaraSystemWithOverrideParam inNiagaraSystemWithOverrideParam);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNiagaraQualityLevel();
    
    UFUNCTION(BlueprintPure)
    static float GetMouseYAxis();
    
    UFUNCTION(BlueprintPure)
    static float GetMouseXAxis();
    
    UFUNCTION(BlueprintPure)
    static float GetMouseWheelAxis();
    
    UFUNCTION(BlueprintPure)
    static FName GetMouseButtonKeyName(const FPointerEvent& InPointerEvent);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EBlendMode> GetMaterialInterfaceBlendMode(UMaterialInterface* MaterialInterface);
    
    UFUNCTION(BlueprintPure)
    static FText GetLocalizeText(TEnumAsByte<ESBLocalize> LocalizeType, const FString& OriginString);
    
    UFUNCTION(BlueprintPure)
    static FText GetLocalizeActorStatValue(TEnumAsByte<ESBActorStatType> InStatType, float InValue);
    
    UFUNCTION(BlueprintPure)
    static FText GetLocalizeActorStatName(TEnumAsByte<ESBActorStatType> InStatType);
    
    UFUNCTION(BlueprintPure)
    static float GetLeftInputYAxis();
    
    UFUNCTION(BlueprintPure)
    static float GetLeftInputXAxis();
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<ESlateBrushResourceType> GetLastGamePadSlateBrushResourceType();
    
    UFUNCTION(BlueprintPure)
    static FText GetKeyTextLastGamePad(const FName& InKeyName);
    
    UFUNCTION(BlueprintPure)
    static FText GetKeyText(const FName& InKeyName);
    
    UFUNCTION(BlueprintPure)
    static FName GetKeyName(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FInputAxisKeyMapping> GetKeyMappingsFromInputAxis(FName InAxisName, ESBKeyMappingAxisScaleType InAxisScale, bool InMainKey, bool InInputDeviceGamepad);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FInputActionKeyMapping> GetKeyMappingsFromInputAction(FName InActionName, bool InMainKey, bool InInputDeviceGamepad);
    
    UFUNCTION(BlueprintCallable)
    static ESBKeyboardType GetKeyboardType();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FTransform> GetInstanceTransforms(AInstancedFoliageActor* Actor, UFoliageType* FoliageType, ULevel* InstancesLevel);
    
    UFUNCTION(BlueprintPure)
    static FName GetInputActionNameBack();
    
    UFUNCTION(BlueprintPure)
    static FName GetInputActionNameAccept();
    
    UFUNCTION(BlueprintPure)
    static ESBGameOptionHUDSizeType GetHUDSizeType();
    
    UFUNCTION(BlueprintPure)
    static float GetGamepadRightYAxis();
    
    UFUNCTION(BlueprintPure)
    static float GetGamepadRightXAxis();
    
    UFUNCTION(BlueprintPure)
    static float GetGamepadLeftYAxis();
    
    UFUNCTION(BlueprintPure)
    static float GetGamepadLeftXAxis();
    
    UFUNCTION(BlueprintPure)
    static FKey GetGamepadBackKey();
    
    UFUNCTION(BlueprintPure)
    static FKey GetGamepadAcceptKey();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFuidFluxQuality();
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<EPhysicalSurface> GetFootStepPhySurface(const FVector InLocation, TEnumAsByte<EPhysicalSurface> InDefaultSurface);
    
    UFUNCTION(BlueprintCallable)
    static FString GetEquipLilyMeshAssetPath();
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableSummerEventContents();
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableDLCContents();
    
    UFUNCTION(BlueprintCallable)
    static bool GetEnableChristmasEventContents();
    
    UFUNCTION(BlueprintCallable)
    static FName GetDroneBodyMeshName();
    
    UFUNCTION(BlueprintCallable)
    static float GetDisplayGamma();
    
    UFUNCTION(BlueprintCallable)
    static bool GetConfigBoolValue(const FString& InKey, bool inDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetCollisionProfileNames();
    
    UFUNCTION(BlueprintCallable)
    static TArray<ASBItem*> GetAllSBItemActors();
    
    UFUNCTION(BlueprintCallable)
    static bool GetActiveEnvControlSettings(TArray<FString>& outActiveEnvControlName, TArray<float>& outActiveEnvControlWeight);
    
    UFUNCTION(BlueprintCallable)
    static bool FocusLockFrameCount(int32 LockCount);
    
    UFUNCTION(BlueprintCallable)
    static void FindUserWidgetByTag(FName InTag, TArray<USBUserWidget*>& OutWidgets);
    
    UFUNCTION(BlueprintCallable)
    static USBUserWidget* FindFirstUserWidgetByTag(FName InTag);
    
    UFUNCTION(BlueprintCallable)
    static bool EntryNikkeStage();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void DelayFrames(UObject* WorldContextObject, int32 Frames, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintPure)
    static bool CurrentCultureArab();
    
    UFUNCTION(BlueprintCallable)
    static USBVibrationComponent* CreateVibration2D(USBVibrationSet* InVibrationSet, bool InAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static void CreateSBZoneEvent(TEnumAsByte<ESBZoneEventType> InType, FName ZoneActorEffectAlias);
    
    UFUNCTION(BlueprintCallable)
    static void CreateProjectile(UClass* ProjectileRes, FTransform StartTargetTransform, FTransform DestTargetTransform, TEnumAsByte<ESBProjectileMovementType::Type> MovementType, FSBProjectileUpdateInfo UpdateInfo, float DestroyWaitTime);
    
    UFUNCTION(BlueprintCallable)
    static void CopySBEnvSettingData(USBEnvSettingData* inCopyFromData, USBEnvSettingData* inCopyToData);
    
    UFUNCTION(BlueprintCallable)
    static UTextureRenderTarget2D* CopyBackBufferToRenderTarget();
    
    UFUNCTION(BlueprintPure)
    static uint8 ConvertTraceTypeToByte(const FSBEventMoveIKData& InData);
    
    UFUNCTION(BlueprintCallable)
    static bool ConvertOpaqueToMaksedDitherMaterialInstance(UMaterialInstance* MaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    static bool ConvertInvalidMaskedToOpaqueDitherMaterialInstance(UMaterialInstance* MaterialInstance);
    
    UFUNCTION(BlueprintPure)
    static bool ConsoleCommand(const FString& Command, bool WriteToLog);
    
    UFUNCTION(BlueprintCallable)
    static void CallMultithreadedFunction(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void ApplySBEnvSettingDataToScene(USBEnvSettingData* inEnvData);
    
    UFUNCTION(BlueprintCallable)
    static bool AddEventMoveInstance(USBEventMoveDataComponent* EventMoveDataComponent, FVector StartTargetLocation, FRotator StartTargetRotation, FVector StartLeaveLocation, FRotator StartLeaveRotation, FVector EndTargetLocation, FRotator EndTargetRotation, FVector EndLeaveLocation, FRotator EndLeaveRotation, UPrimitiveComponent* CollisionBoundComponent, AActor* EventMeshActor, USplineComponent* BalanceMovingSplineComponent, UPrimitiveComponent* CollisionAtFailedInteraction);
    
    UFUNCTION(BlueprintCallable)
    static bool AddDeactiveMovingInstance(USBDeactiveMovingComponent* DeactiveMovingComponent, UPrimitiveComponent* CollisionBoundComponent);
    
};

