#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBShowCamAnimCheckTarget.h"
#include "SBShowKey.h"
#include "SBShowMatineeCamAnimByFactorType.h"
#include "SBShowCamAnimKey.generated.h"

class UCameraAnim;
class UCurveFloat;

UCLASS(EditInlineNew)
class SB_API USBShowCamAnimKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    bool bPlayToMainCharacter;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowCamAnimCheckTarget> CheckTarget;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerCharacterOnlyByCheckTarget;
    
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    bool bUseAttachCharacterToCameraAnim;
    
    UPROPERTY(EditAnywhere)
    bool bUseManualFocalTarget;
    
    UPROPERTY(EditAnywhere)
    int32 ManualFocalTargetIndex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowCamAnimCheckTarget> ManualFocalTarget;
    
    UPROPERTY(EditAnywhere)
    FName ManualFocalBoneName;
    
    UPROPERTY(EditAnywhere)
    float ManualFocalStartTime;
    
    UPROPERTY(EditAnywhere)
    float ManualFocalDuration;
    
    UPROPERTY(EditAnywhere)
    float ManualFocalFStop;
    
    UPROPERTY(EditAnywhere)
    bool bPlayBasedCustomAnim;
    
    UPROPERTY(EditAnywhere)
    FName BasedCustomAnimName;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRot;
    
    UPROPERTY(EditAnywhere)
    bool bUseMatineeCameraAnim;
    
    UPROPERTY(EditAnywhere)
    UCameraAnim* MatineeCameraAnim;
    
    UPROPERTY(EditAnywhere)
    int32 MatineeCameraAnimPriority;
    
    UPROPERTY(EditAnywhere)
    float MatineeCameraAnimScale;
    
    UPROPERTY(EditAnywhere)
    bool bUseMoveLinkLastPosition;
    
    UPROPERTY(EditAnywhere)
    bool bUpdatePlayBaseOriginZInTick;
    
    UPROPERTY(EditAnywhere)
    bool bUpdatePlayBaseOriginZInTickByMainCharacter;
    
    UPROPERTY(EditAnywhere)
    bool bUseAttachCharacterFirstRotation;
    
    UPROPERTY(EditAnywhere)
    float OverrideInitialFOV;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndexPlayBaseOriginZInTick;
    
    UPROPERTY(EditAnywhere)
    bool bUseRuleMoveLastRotation;
    
    UPROPERTY(EditAnywhere)
    bool bResetCamFromCamAnimAtFinished;
    
    UPROPERTY(EditAnywhere)
    bool bResetCamAtUnlockPitch;
    
    UPROPERTY(EditAnywhere)
    float ResetCamAtUnlockPitchValue;
    
    UPROPERTY(EditAnywhere)
    bool bUseCharacterUECamScale;
    
    UPROPERTY(EditAnywhere)
    bool bCharacterUECamToMainCharacter;
    
    UPROPERTY(EditAnywhere)
    int32 CharacterUECamTargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bUseCharacterUECamExtraAnim;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBShowMatineeCamAnimByFactorType> ExtraCameraAnimsByFactorType;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* FovCurve;
    
    UPROPERTY(EditAnywhere)
    bool bStopTPSView;
    
    UPROPERTY(EditAnywhere)
    bool bBlcokControllerInput;
    
    USBShowCamAnimKey();

};

