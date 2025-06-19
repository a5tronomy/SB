#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SpringArmComponent.h"
#include "CameraDollySplineBlend.h"
#include "CameraDollySplineExtra.h"
#include "SBSpringArmComponent.generated.h"

class UCurveFloat;
class USBCameraDollyTrackData;
class USplineComponent;

UCLASS(ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class SB_API USBSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float CameraDollyAlpha;
    
    UPROPERTY(EditAnywhere)
    bool bUseCameraDolly;
    
    UPROPERTY(EditAnywhere)
    USBCameraDollyTrackData* CameraDollyTrackData;
    
    UPROPERTY(Instanced, Transient)
    USplineComponent* CameraDollyPositionSpline;
    
    UPROPERTY(Transient)
    TArray<FCameraDollySplineExtra> CameraDollyPositionSplineExtra;
    
    UPROPERTY(Transient)
    FVector CurrentArmLocation;
    
    UPROPERTY(Transient)
    FVector CurrentDollyDirection;
    
    UPROPERTY(Transient)
    float CurrentDollyFov;
    
    UPROPERTY(Transient)
    float CurrentArmLength;
    
    UPROPERTY(Transient)
    float CurrentUpdateArmLengthSpeed;
    
    UPROPERTY(Transient)
    bool bNeedUpdateArmLength;
    
    UPROPERTY(Transient)
    FVector PreviousCamLoc;
    
    UPROPERTY(Transient)
    float CurrentCamRotateByCharAccelRatio;
    
    UPROPERTY(Transient)
    float CurrentCamRotateByCharAccelRotAddPer10Degree;
    
    UPROPERTY(Transient)
    FVector CustomOffset;
    
    UPROPERTY(Transient)
    float CustomOffsetBlendTime;
    
    UPROPERTY(Transient)
    FVector CurrentCustomOffset;
    
    UPROPERTY(Transient)
    bool bLastUseCharacterControllerRot;
    
    UPROPERTY(Transient)
    float RemainBlendCamera;
    
    UPROPERTY(Transient)
    float TotalBlendCameraDuration;
    
    UPROPERTY(Transient)
    float RemainBlockRotateByCharacterAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableCameraLagByCharControl: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableCameraRotationLagByCharControl: 1;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* PostZOffsetCurveByArmLength;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* YawAutoRotateSpeedByDirDiff;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* YawAutoRotateSpeedByDirDiffAtSwim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraMaxClampAtInteraction;
    
    UPROPERTY(Transient)
    float CurrentCameraMaxClampAtInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LockOnProbeSize;
    
    UPROPERTY(Transient)
    float CurrentPostZOffset;
    
    UPROPERTY(Transient)
    float CollisionBoundHeightUp;
    
    UPROPERTY(Transient)
    float CollisionBoundHeightDown;
    
    UPROPERTY(Transient)
    int32 CollisionBoundTypeUp;
    
    UPROPERTY(Transient)
    int32 CollisionBoundTypeDown;
    
    UPROPERTY(Transient)
    float RemainBlendDollyAlpha;
    
    UPROPERTY(Transient)
    float BlendDollyAlphaDuration;
    
    UPROPERTY(Transient)
    float BlendTargetDollyAlpha;
    
    UPROPERTY(Transient)
    TArray<FCameraDollySplineBlend> DollyBlends;
    
    UPROPERTY(Transient)
    int32 CurrentDollyMode;
    
    UPROPERTY(Transient)
    bool bResetThisFrame;
    
    USBSpringArmComponent(const FObjectInitializer& ObjectInitializer);

};

