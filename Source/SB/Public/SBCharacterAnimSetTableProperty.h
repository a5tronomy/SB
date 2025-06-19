#pragma once
#include "CoreMinimal.h"
#include "ESBIdleAnimType.h"
#include "SBTablePropertyBase.h"
#include "SBCharacterAnimSetTableProperty.generated.h"

USTRUCT()
struct FSBCharacterAnimSetTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString RunBlendSpace;
    
    UPROPERTY(EditAnywhere)
    FString RunTiltBlendSpace;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBIdleAnimType> IdleAnimType;
    
    UPROPERTY(EditAnywhere)
    FString LockOnSprintBlendSpace;
    
    UPROPERTY(EditAnywhere)
    FString BlockMoveBlendSpace;
    
    UPROPERTY(EditAnywhere)
    FString AimOffsetBlendSpace;
    
    UPROPERTY(EditAnywhere)
    FString SelfieBlendSpace;
    
    UPROPERTY(EditAnywhere)
    FString WallRun;
    
    UPROPERTY(EditAnywhere)
    FString LockOnFall;
    
    UPROPERTY(EditAnywhere)
    FString LockOnRunBlendSpace;
    
    UPROPERTY(EditAnywhere)
    FString FlyingBlendSpace;
    
    UPROPERTY(EditAnywhere)
    FString FlyingStart;
    
    UPROPERTY(EditAnywhere)
    FString FlyingToFall;
    
    UPROPERTY(EditAnywhere)
    FString FlyingToIdle;
    
    UPROPERTY(EditAnywhere)
    FString Fall;
    
    UPROPERTY(EditAnywhere)
    FString Sprint;
    
    UPROPERTY(EditAnywhere)
    FString Jump;
    
    UPROPERTY(EditAnywhere)
    FString Jump2;
    
    UPROPERTY(EditAnywhere)
    FString Jump3;
    
    UPROPERTY(EditAnywhere)
    FString JumpFront;
    
    UPROPERTY(EditAnywhere)
    FString JumpFront2;
    
    UPROPERTY(EditAnywhere)
    FString JumpFront3;
    
    UPROPERTY(EditAnywhere)
    FString WallJump;
    
    UPROPERTY(EditAnywhere)
    FString WallRunJump;
    
    UPROPERTY(EditAnywhere)
    FString DoubleJump;
    
    UPROPERTY(EditAnywhere)
    FString DoubleJump2;
    
    UPROPERTY(EditAnywhere)
    FString DoubleJump3;
    
    UPROPERTY(EditAnywhere)
    FString DoubleJumpFront;
    
    UPROPERTY(EditAnywhere)
    FString DoubleJumpFront2;
    
    UPROPERTY(EditAnywhere)
    FString DoubleJumpFront3;
    
    UPROPERTY(EditAnywhere)
    FString JumpToIdle;
    
    UPROPERTY(EditAnywhere)
    FString JumpToSprint;
    
    UPROPERTY(EditAnywhere)
    FString JumpToSprintShort;
    
    UPROPERTY(EditAnywhere)
    FString JumpToWalk;
    
    UPROPERTY(EditAnywhere)
    FString JumpToRun;
    
    UPROPERTY(EditAnywhere)
    FString JumpHighToRun;
    
    UPROPERTY(EditAnywhere)
    FString JumpHighToIdle;
    
    UPROPERTY(EditAnywhere)
    FString JumpHighToWalk;
    
    UPROPERTY(EditAnywhere)
    FString RunToIdle_L;
    
    UPROPERTY(EditAnywhere)
    FString RunToIdle_R;
    
    UPROPERTY(EditAnywhere)
    FString RunToIdle;
    
    UPROPERTY(EditAnywhere)
    FString WalkToIdle_L;
    
    UPROPERTY(EditAnywhere)
    FString WalkToIdle_R;
    
    UPROPERTY(EditAnywhere)
    FString WalkToIdle;
    
    UPROPERTY(EditAnywhere)
    FString ShortMoveToIdle_L;
    
    UPROPERTY(EditAnywhere)
    FString ShortMoveToIdle_R;
    
    UPROPERTY(EditAnywhere)
    FString ShortMoveToIdle;
    
    UPROPERTY(EditAnywhere)
    FString StartSprint;
    
    UPROPERTY(EditAnywhere)
    FString SprintToIdle;
    
    UPROPERTY(EditAnywhere)
    FString SprintToRun;
    
    UPROPERTY(EditAnywhere)
    FString RunStart;
    
    UPROPERTY(EditAnywhere)
    FString RunStartAfterEvade;
    
    UPROPERTY(EditAnywhere)
    FString RunTurn_L;
    
    UPROPERTY(EditAnywhere)
    FString RunTurn_R;
    
    UPROPERTY(EditAnywhere)
    FString WalkTurn_L;
    
    UPROPERTY(EditAnywhere)
    FString WalkTurn_R;
    
    UPROPERTY(EditAnywhere)
    FString IdleTurn_L;
    
    UPROPERTY(EditAnywhere)
    FString IdleTurn_R;
    
    UPROPERTY(EditAnywhere)
    FString IdleTurnToWalk_L;
    
    UPROPERTY(EditAnywhere)
    FString IdleTurnToWalk_R;
    
    UPROPERTY(EditAnywhere)
    FString SprintTurn;
    
    UPROPERTY(EditAnywhere)
    FString SprintTurn_L;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpNoMoving;
    
    UPROPERTY(EditAnywhere)
    FString LockOnDoubleJumpNoMoving;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpLeft;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpRight;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpBack;
    
    UPROPERTY(EditAnywhere)
    FString LockOnDoubleJumpFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnDoubleJumpLeft;
    
    UPROPERTY(EditAnywhere)
    FString LockOnDoubleJumpRight;
    
    UPROPERTY(EditAnywhere)
    FString LockOnDoubleJumpBack;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpToIdleFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpToIdleBack;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpToIdleLeft;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpToIdleRight;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpToRunFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpToRunBack;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpToRunLeft;
    
    UPROPERTY(EditAnywhere)
    FString LockOnJumpToRunRight;
    
    UPROPERTY(EditAnywhere)
    FString LockOnStartSprintFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnStartSprintBack;
    
    UPROPERTY(EditAnywhere)
    FString LockOnStartSprintLeft;
    
    UPROPERTY(EditAnywhere)
    FString LockOnStartSprintRight;
    
    UPROPERTY(EditAnywhere)
    FString LockOnGuardRotationR;
    
    UPROPERTY(EditAnywhere)
    FString LockOnGuardRotationL;
    
    UPROPERTY(EditAnywhere)
    FString LockOnRotationR;
    
    UPROPERTY(EditAnywhere)
    FString LockOnRotationL;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatRotationR;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatRotationL;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatTurn_L;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatTurn_R;
    
    UPROPERTY(EditAnywhere)
    FString UnLockOnAtChat;
    
    UPROPERTY(EditAnywhere)
    FString LockOnStartRunFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnStartRunBack;
    
    UPROPERTY(EditAnywhere)
    FString LockOnStartRunLeft;
    
    UPROPERTY(EditAnywhere)
    FString LockOnStartRunRight;
    
    UPROPERTY(EditAnywhere)
    FString LockOnRunToIdleFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnRunToIdleBack;
    
    UPROPERTY(EditAnywhere)
    FString LockOnRunToIdleLeft;
    
    UPROPERTY(EditAnywhere)
    FString LockOnRunToIdleRight;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatMoveToIdleFrontRFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatMoveToIdleBackRFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatMoveToIdleLeftRFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatMoveToIdleRightRFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatMoveToIdleFrontLFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatMoveToIdleBackLFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatMoveToIdleLeftLFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnAtChatMoveToIdleRightLFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnSprintToIdleFront;
    
    UPROPERTY(EditAnywhere)
    FString LockOnSprintToIdleBack;
    
    UPROPERTY(EditAnywhere)
    FString LockOnSprintToIdleLeft;
    
    UPROPERTY(EditAnywhere)
    FString LockOnSprintToIdleRight;
    
    UPROPERTY(EditAnywhere)
    FString CliffReaction;
    
    UPROPERTY(EditAnywhere)
    FString BlockWallFrontRun;
    
    UPROPERTY(EditAnywhere)
    FString BlockWallFrontWalk;
    
    UPROPERTY(EditAnywhere)
    FString BlockWallFrontSprint;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpGround;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpGroundHigh;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpFalling;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpGroundToLow;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpGroundHighToLow;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpFallingHigh;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpSideRod;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpSideRodWallless;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpGroundType2ToLow;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpGroundType2;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpGroundType3ToLow;
    
    UPROPERTY(EditAnywhere)
    FString HuddleUpGroundType3;
    
    UPROPERTY(EditAnywhere)
    FString StartFallToLowDist;
    
    UPROPERTY(EditAnywhere)
    FString FallToLowDistToRun;
    
    UPROPERTY(EditAnywhere)
    FString FallToLowDistToIdle;
    
    UPROPERTY(EditAnywhere)
    FString FallToSwim;
    
    UPROPERTY(EditAnywhere)
    FString GroundToSwim;
    
    UPROPERTY(EditAnywhere)
    FString UnderWaterToWaterLine;
    
    UPROPERTY(EditAnywhere)
    FString WaterLineToUnderWater;
    
    UPROPERTY(EditAnywhere)
    FString WaterLineToUnderWaterFail;
    
    UPROPERTY(EditAnywhere)
    FString SwimToGround;
    
    UPROPERTY(EditAnywhere)
    FString SwimJump;
    
    UPROPERTY(EditAnywhere)
    FString SwimTurn;
    
    UPROPERTY(EditAnywhere)
    FString UnderWaterSwimTurn;
    
    UPROPERTY(EditAnywhere)
    FString GroundToSlope;
    
    UPROPERTY(EditAnywhere)
    FString FallToSlope;
    
    UPROPERTY(EditAnywhere)
    FString SlopeJump;
    
    UPROPERTY(EditAnywhere)
    FString SlopeDoubleJump;
    
    UPROPERTY(EditAnywhere)
    FString SlopeToGround;
    
    UPROPERTY(EditAnywhere)
    FString SlopeToFall;
    
    UPROPERTY(EditAnywhere)
    FString SlopeJumpToLand;
    
    UPROPERTY(EditAnywhere)
    FString StartWalkSlidingSlip;
    
    UPROPERTY(EditAnywhere)
    FString EndWalkSlidingSlip;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandLight1Left;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandLight1Right;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandLight1Back;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandLight1Front;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandLight2Left;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandLight2Right;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandLight2Back;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandLight2Front;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandStrong1Left;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandStrong1Right;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandStrong1Back;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandStrong1Front;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandStrong2Left;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandStrong2Right;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandStrong2Back;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitStandStrong2Front;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Groggy_Start;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Groggy_Loop;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Groggy_End;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Airborne_Loop;
    
    UPROPERTY(EditAnywhere)
    FString Custom_KnockDown_Start_Front;
    
    UPROPERTY(EditAnywhere)
    FString Custom_KnockDown_Start_Back;
    
    UPROPERTY(EditAnywhere)
    FString Custom_KnockDown_Loop;
    
    UPROPERTY(EditAnywhere)
    FString Custom_KnockDown_End;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Caution_LeftToIdle;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Caution_RightToIdle;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitSwordNormalLinkAttack1;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitSwordNormalFinishLinkAttack1;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitSwordAirDropAttack1;
    
    UPROPERTY(EditAnywhere)
    FString Custom_HitSwordNormalBackStab1;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim1;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim2;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim3;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim4;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim5;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim6;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim7;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim8;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim9;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim10;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim11;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim12;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim13;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim14;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim15;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim16;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim17;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim18;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim19;
    
    UPROPERTY(EditAnywhere)
    FString Custom_Anim20;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCharacterAnimSetTableProperty();
};

