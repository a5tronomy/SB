#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraComponent.h"
#include "CameraStampInfo.h"
#include "ESBFishingCameraModeType.h"
#include "ESBFishingModeType.h"
#include "ESBTPSModeType.h"
#include "SBAttachParticleInfo.h"
#include "SBCameraMoveData.h"
#include "SBPostProcessWeightedBlendables.h"
#include "SBCameraComponent.generated.h"

class UCurveFloat;
class USceneComponent;

UCLASS(ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class SB_API USBCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* ParticleAttachComponent;
    
    UPROPERTY(Config)
    float CameraFov;
    
    UPROPERTY(Config)
    int32 MaxStampInfosNum;
    
    UPROPERTY(Transient)
    bool bManualCameraFovMode;
    
    UPROPERTY(Transient)
    float ManualCameraFov;
    
    UPROPERTY(Transient)
    int32 CurrentStampInfoIndex;
    
    UPROPERTY(Config)
    float InterpolHistoryDuration;
    
    UPROPERTY(Config)
    int32 InterpolHistoryByFrame;
    
    UPROPERTY(Config)
    float CameraLeftRightControlMinDist;
    
    UPROPERTY(Config)
    float CameraLeftRightControlMaxDist;
    
    UPROPERTY(Transient)
    TArray<FCameraStampInfo> CameraStampInfos;
    
    UPROPERTY(Transient)
    float PlayInterpolHistoryDuration;
    
    UPROPERTY(Transient)
    float PlayInterpolHistoryFadeInSec;
    
    UPROPERTY(Transient)
    float PlayInterpolHistoryFadeOutSec;
    
    UPROPERTY(Transient)
    float PlayInterpolHistoryPlaySec;
    
    UPROPERTY(Transient)
    bool bPlayInterpolHistory;
    
    UPROPERTY(Transient)
    bool bPlayInterpolHistoryInfinite;
    
    UPROPERTY(Transient)
    TArray<FSBAttachParticleInfo> AttachedParticles;
    
    UPROPERTY(Transient)
    bool bPlayInterpolHistoryCalcNewTargetDir;
    
    UPROPERTY(Transient)
    float CurrentPlayInterpolHistorySec;
    
    UPROPERTY(Transient)
    FVector DesiredViewLocFromLegacy;
    
    UPROPERTY(Transient)
    FVector DesiredViewLocDirFromLegacy;
    
    UPROPERTY(Transient)
    float DesiredViewLocLengthFromLegacy;
    
    UPROPERTY(Transient)
    FVector DesiredBeforeViewLocFromNew;
    
    UPROPERTY(Transient)
    FRotator DesiredViewRotFromLegacy;
    
    UPROPERTY(Transient)
    int32 LastDesiredViewMode;
    
    UPROPERTY(Transient)
    float CurrentHistoryFadeValue;
    
    UPROPERTY(Transient)
    float CameraFovOverride;
    
    UPROPERTY(Transient)
    float CameraFovOverrideBlendTime;
    
    UPROPERTY(Transient)
    float CurrentArmLength;
    
    UPROPERTY(Transient)
    float CurrentUpdateArmLengthSpeed;
    
    UPROPERTY(Transient)
    bool bNeedUpdateArmLength;
    
    UPROPERTY(Transient)
    float CurrentFov;
    
    UPROPERTY(Transient)
    float CameraShakingOverride;
    
    UPROPERTY(Transient)
    float CameraShakingOverrideBlendTime;
    
    UPROPERTY(Transient)
    float CurrentShaking;
    
    UPROPERTY(Transient)
    float CameraRollTargetValue;
    
    UPROPERTY(Transient)
    float CameraRollCurrentValue;
    
    UPROPERTY(Transient)
    float CameraPitchTargetValue;
    
    UPROPERTY(Transient)
    float CameraPitchCurrentValue;
    
    UPROPERTY(Transient)
    FTransform CurrentCameraTM;
    
    UPROPERTY(Transient)
    FVector CurrentCameraLocation;
    
    UPROPERTY(Transient)
    FRotator CurrentCameraRotation;
    
    UPROPERTY(Transient)
    float CurrentAspectRatio;
    
    UPROPERTY(Transient)
    float OverrideCameraBlendDuration;
    
    UPROPERTY(Transient)
    float RemainOverrideCameraBlendDuration;
    
    UPROPERTY(Transient)
    TArray<FSBCameraMoveData> ActiveCameraMoveData;
    
    UPROPERTY(Transient)
    float OrientTime;
    
    UPROPERTY(Transient)
    float OrientCurrentTime;
    
    UPROPERTY(Transient)
    FRotator OrientStartRot;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* OriginParentComponent;
    
    UPROPERTY(Transient)
    TMap<FGuid, FSBPostProcessWeightedBlendables> PostProcessWeightedBlendablesMap;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LockOnCamBlendScaleCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* PlayerSlopeControlAlphaBlendCurve;
    
    UPROPERTY(Transient)
    FVector CurrentDesiredViewLocation;
    
    UPROPERTY(Transient)
    FRotator CurrentDesiredViewRotation;
    
    UPROPERTY(Transient)
    bool bCurrentCameraTPSMode;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBTPSModeType> CurrentCameraTPSModeType;
    
    UPROPERTY(Transient)
    bool bCurrentCameraTPSZoomIn;
    
    UPROPERTY(Transient)
    float TSPCameraDisableViewTime;
    
    UPROPERTY(Transient)
    FVector TSPStartCameraLocation;
    
    UPROPERTY(Transient)
    FRotator TSPStartCameraRotation;
    
    UPROPERTY(Transient)
    float TSPCameraSwitchCurrentBlendTime;
    
    UPROPERTY(Transient)
    float TSPCameraSwitchMaxBlendTime;
    
    UPROPERTY(Transient)
    bool bTPSCameraCollisionHit;
    
    UPROPERTY(Transient)
    FVector TPSCameraCollisionHitLocation;
    
    UPROPERTY(Transient)
    float TPSCameraCollisionHitBlendTime;
    
    UPROPERTY(Transient)
    float TPSCameraCollisionHitCurrentBlendTime;
    
    UPROPERTY(Transient)
    uint64 TPSCameraStopFrameCounter;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBFishingModeType> CurrentFishingMode;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBFishingCameraModeType> PrevFishingCameraMode;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBFishingCameraModeType> CurrentFishingCameraMode;
    
    UPROPERTY(Transient)
    float ConfigFishingAimCameraSwitchBlendTime;
    
    UPROPERTY(Transient)
    float FishingCameraSwitchCurrentBlendTime;
    
    UPROPERTY(Transient)
    FVector FishingCameraStartLocation;
    
    UPROPERTY(Transient)
    FRotator FishingCameraStartRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSBPlayerCamera;
    
public:
    USBCameraComponent(const FObjectInitializer& ObjectInitializer);

};

