#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "ESBEventMoveType.h"
#include "SBApplyIKInfo.h"
#include "SBEventMoveData.generated.h"

class UCurveFloat;

UCLASS(BlueprintType)
class SB_API USBEventMoveData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName IdleRunBlendSpaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SlideIdleRunBlendSpaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StartTransitAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTransitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EndTransitAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndTransitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MiddleTransitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MiddleTransitAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMovingUnitBySideToSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MovingUnitBySideToSideForwardAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MovingUnitBySideToSideBackwardAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MoveUnitAnimSequenceRepeatNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveUnitSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveFastUnitSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseMoveForwardVectorFromTargetPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MoveForwardVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveForwardApplyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MoveRightVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveRightApplyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseSphereRadiusCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BaseMoveAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseVolumeAxisForMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovingArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBEventMoveType> EventMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RodMoveDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RodMoveSwingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RodMoveFrontJumpDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RodMoveBackJumpDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RodMoveBackJumpLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RodMoveFallLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableSideRodUpJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableSideRodJumpLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableSideRodDownAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float JumpLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ApplyGravityMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GravityAccelSpeedForSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GravitiedMaxMoveSpeed;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* SlidingSpeedCurve;
    
    UPROPERTY(EditAnywhere)
    bool bEnableSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnableCancelJumpDirDegToCharDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CancelJumpXYPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CableLeaveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlockTimeAfterEventMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnableKneeIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KneeIK_SearchDistance_Forward_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KneeIK_SearchDistance_Backward_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KneeIK_SearchDistance_Forward_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KneeIK_SearchDistance_Backward_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveOffset_R_Knee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveOffset_L_Knee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveOffset_R_Toe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveOffset_L_Toe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StartLeaveAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartLeaveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EndLeaveAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndLeaveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MoveFastAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MoveJumpAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MoveJumpMoveAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MoveFallAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MoveTurnAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MoveTurnAnimDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MoveSlideStartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MoveSlideStopName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MoveSlideToNormalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MoveSlideToLandName;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreEventMoveIK;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBApplyIKInfo> UseIKBoneList;
    
    UPROPERTY(EditAnywhere)
    bool bBlockFBMoveInputDirAtFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BalanceMovingSplineAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BalanceMovingIgnoreDistanceAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BalanceMovingIgnoreDistanceAtEnd;
    
    UPROPERTY(EditAnywhere)
    float BalanceBeamMoveInputForwardDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BalanceMovingHoldStartFallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableHoldBalanceBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSaveActorStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bKeepEventMoveWhenDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DeadShowPath;
    
    USBEventMoveData();

};

