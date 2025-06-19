#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBEventMoveType.h"
#include "SBCharacterEventMoveInfo.generated.h"

class AActor;
class USBEventMoveDataComponent;

USTRUCT(BlueprintType)
struct FSBCharacterEventMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector MoveForwardWS;
    
    UPROPERTY(Transient)
    float MoveForwardApplyValue;
    
    UPROPERTY(Transient)
    FVector MoveRightWS;
    
    UPROPERTY(Transient)
    float MoveRightApplyValue;
    
    UPROPERTY(Transient)
    FName IdleRunBlendSpaceName;
    
    UPROPERTY(Transient)
    float JumpLength;
    
    UPROPERTY(Transient)
    FRotator StartPointRotation;
    
    UPROPERTY(Transient)
    FVector StartPointLocation;
    
    UPROPERTY(Transient)
    FRotator EndPointRotation;
    
    UPROPERTY(Transient)
    FVector EndPointLocation;
    
    UPROPERTY(Transient)
    FRotator StartLeaveRotation;
    
    UPROPERTY(Transient)
    FVector StartLeaveLocation;
    
    UPROPERTY(Transient)
    FRotator EndLeaveRotation;
    
    UPROPERTY(Transient)
    FVector EndLeaveLocation;
    
    UPROPERTY(Transient)
    float SlidingTime;
    
    UPROPERTY(Transient)
    bool bRequestStopSliding;
    
    UPROPERTY(Transient)
    bool bEnableSliding;
    
    UPROPERTY(Transient)
    bool SlidingStopping;
    
    UPROPERTY(Transient)
    AActor* CollisionControlActor;
    
    UPROPERTY(Transient)
    float EnableCancelJumpDirDegToCharDir;
    
    UPROPERTY(Transient)
    float CancelJumpXYPower;
    
    UPROPERTY(Transient)
    bool bJumping;
    
    UPROPERTY(Transient)
    bool bSideRodUpJumping;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBEventMoveType> EventMoveType;
    
    UPROPERTY(Transient)
    float RodMoveDamping;
    
    UPROPERTY(Transient)
    float RodMoveJumpRadian;
    
    UPROPERTY(Transient)
    float RodMoveBackJumpRadian;
    
    UPROPERTY(Transient)
    float RodMoveBackJumpLength;
    
    UPROPERTY(Transient)
    bool bRequestRodMoveJump;
    
    UPROPERTY(Transient)
    bool bCanRodMoveJump;
    
    UPROPERTY(Transient)
    float RodMoveSwingSpeed;
    
    UPROPERTY(Transient)
    float RodFallLength;
    
    UPROPERTY(Transient)
    FString EventMoveTurnAnimName;
    
    UPROPERTY(Transient)
    float EventMoveTurnDuration;
    
    UPROPERTY(Transient)
    float SideRodeForwardRadian;
    
    UPROPERTY(Transient)
    FVector CurrentSideRodCamOffsetSpeed;
    
    UPROPERTY(Transient)
    float SideRodeRightRadian;
    
    UPROPERTY(Transient)
    float SideRodeBackSearchRadian;
    
    UPROPERTY(Transient)
    FName SideRodeSearchBoneName;
    
    UPROPERTY(Transient)
    float SideRodCrossDistance;
    
    UPROPERTY(Transient)
    FName SideRodCrossAnimTagName;
    
    UPROPERTY(Transient)
    FName SideRodJumpAnimTagName;
    
    UPROPERTY(Transient)
    bool bEnableSideRodUpJump;
    
    UPROPERTY(Transient)
    bool bEnableSideRodDownAttach;
    
    UPROPERTY(Transient)
    bool bDisableSideRodJumpLanding;
    
    UPROPERTY(Transient)
    float SideRodSearchDistance;
    
    UPROPERTY(Transient)
    float SideRodSearchRightDistance;
    
    UPROPERTY(Transient)
    float SideRodeBackSearchDistance;
    
    UPROPERTY(Transient)
    float SideRodSearchFrontBackDistance;
    
    UPROPERTY(Transient)
    bool bSideRodWallless;
    
    UPROPERTY(Transient)
    bool bBlockForwardInputAtFirst;
    
    UPROPERTY(Transient)
    bool bBlockBackwardInputAtFirst;
    
    UPROPERTY(Transient)
    int32 LastSideRodZeroDirAnimIndex;
    
    UPROPERTY(Transient)
    int32 LastSideToSideUnitMoveAnimIndex;
    
    UPROPERTY(Transient)
    int32 LastSideToSideUnitMoveSideValue;
    
    UPROPERTY(Transient)
    bool bHoldBalanceBeam;
    
    UPROPERTY(Transient)
    bool bPendingHoldUpBalanceBeam;
    
    UPROPERTY(Transient)
    bool bRequestRodTurn;
    
    UPROPERTY(Transient)
    float RemainDelayHoldBalanceBeam;
    
    UPROPERTY(Transient)
    int32 BalanceBeamForwardValue;
    
    UPROPERTY(Transient)
    int32 LastNormalBalanceBeamForwardValue;
    
    UPROPERTY(Transient)
    float BalanceBeamMoveInputForwardDegree;
    
    UPROPERTY(Transient)
    float BalanceBeamSplineLength;
    
    UPROPERTY(Transient)
    bool bDisableHoldBalanceBeam;
    
    UPROPERTY(Transient)
    float BalanceBeamCurrentMoveLength;
    
    UPROPERTY(Transient)
    int32 TargetCableSegmentIndex;
    
    UPROPERTY(Transient)
    int32 CurrentCableSegmentIndex;
    
    UPROPERTY(Transient)
    float CurrentCablePerSegment;
    
    UPROPERTY(Transient)
    float LastCableForwardValue;
    
    UPROPERTY(Transient)
    bool bPendingStopAnimAtChangedMovementMode;
    
    UPROPERTY(Transient)
    float RopeDetachDelayTime;
    
    UPROPERTY(Transient)
    float CurrentRopeSwingStartForceKeepTime;
    
    UPROPERTY(Instanced, Transient)
    USBEventMoveDataComponent* PendingDetachMoveDataComp;
    
    UPROPERTY(Transient)
    bool bRopeForwardSwing;
    
    UPROPERTY(Transient)
    bool bRopeTruning;
    
    UPROPERTY(Transient)
    bool bRopeSwingIgnorePhysic;
    
    UPROPERTY(Transient)
    bool bCanRopeTrun;
    
    UPROPERTY(Transient)
    bool bRopeForwardMoving;
    
    UPROPERTY(Transient)
    FQuat LastRopeSwingRotation;
    
    UPROPERTY(Transient)
    float BlockTimeAfterEventMove;
    
    UPROPERTY(Transient)
    bool bKeepEventMoveWhenDead;
    
    UPROPERTY(Transient)
    FString DeadShowPath;
    
    SB_API FSBCharacterEventMoveInfo();
};

