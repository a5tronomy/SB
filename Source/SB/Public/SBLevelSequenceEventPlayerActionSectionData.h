#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBLevelSequenceEventPlayerActionType.h"
#include "SBLevelSequenceEventPlayerActionSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventPlayerActionSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelSequenceEventPlayerActionType> ActionType;
    
    UPROPERTY(EditAnywhere)
    bool bEveryUpdate;
    
    UPROPERTY(EditAnywhere)
    float RemainMoveAnimSpeedInterpolAfterAction;
    
    UPROPERTY(EditAnywhere)
    bool bUseFinishMovement;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> FinishMovement;
    
    UPROPERTY(EditAnywhere)
    bool bUseFinishSetPlayerCam;
    
    UPROPERTY(EditAnywhere)
    bool bUseFinishSetPlayerCamReset;
    
    UPROPERTY(EditAnywhere)
    bool FinishSetPlayerCamResetPitchBaseAlpha;
    
    UPROPERTY(EditAnywhere)
    bool FinishSetPlayerCamResetYawReset;
    
    UPROPERTY(EditAnywhere)
    bool FinishSetPlayerCamResetForceSetBoom;
    
    UPROPERTY(EditAnywhere)
    bool bUseFinishStopActiveMovement;
    
    UPROPERTY(EditAnywhere)
    bool bUseDisableCommand;
    
    UPROPERTY(EditAnywhere)
    bool bDisableCommandValue;
    
    UPROPERTY(EditAnywhere)
    bool bUseIgnoreMoveInput;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreMoveInputValue;
    
    UPROPERTY(EditAnywhere)
    bool bUseIgnoreLockInput;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreMoveLockValue;
    
    UPROPERTY(EditAnywhere)
    bool bUseJumpLock;
    
    UPROPERTY(EditAnywhere)
    bool bJumpLockReset;
    
    UPROPERTY(EditAnywhere)
    bool bJumpLockValue;
    
    UPROPERTY(EditAnywhere)
    bool bUseForceFoldWeapon;
    
    UPROPERTY(EditAnywhere)
    bool bForceFoldWeaponValue;
    
    UPROPERTY(EditAnywhere)
    bool bUsePlayableLevelSeq;
    
    UPROPERTY(EditAnywhere)
    bool bPlayableLevelSeqValue;
    
    UPROPERTY(EditAnywhere)
    bool bUseChangeMovement;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> ChangeMovement;
    
    UPROPERTY(EditAnywhere)
    bool bUseForceWalk;
    
    UPROPERTY(EditAnywhere)
    bool bUseForceUnLockOn;
    
    UPROPERTY(EditAnywhere)
    bool bUseCameraLock;
    
    UPROPERTY(EditAnywhere)
    bool bCameraLockState;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateVolumeForceMoving;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateVolumeIgnoreTransitAnim;
    
    UPROPERTY(EditAnywhere)
    FName UpdateVolumeEnvVolumeTag;
    
    UPROPERTY(EditAnywhere)
    bool bUseViewTargetPlayerCamReset;
    
    UPROPERTY(EditAnywhere)
    bool ViewTargetPlayerCamResetPitchBaseAlpha;
    
    UPROPERTY(EditAnywhere)
    bool ViewTargetPlayerCamResetYawReset;
    
    UPROPERTY(EditAnywhere)
    bool ViewTargetPlayerCamResetForceSetBoom;
    
    UPROPERTY(EditAnywhere)
    float ValidLandingLocationZOffset;
    
    UPROPERTY(EditAnywhere)
    bool bApplyForceLOD;
    
    UPROPERTY(EditAnywhere)
    bool bCreditAllowClose;
    
    SB_API FSBLevelSequenceEventPlayerActionSectionData();
};

