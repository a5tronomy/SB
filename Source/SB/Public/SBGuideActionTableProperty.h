#pragma once
#include "CoreMinimal.h"
#include "ESBMoveState.h"
#include "SBTablePropertyBase.h"
#include "SBGuideActionTableProperty.generated.h"

USTRUCT()
struct FSBGuideActionTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString PathWayName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ZoneEventsWhenStart;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ZoneEventsWhenArrive;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ZoneEventsWhenComplete;
    
    UPROPERTY(EditAnywhere)
    FString TheaterWhenStart;
    
    UPROPERTY(EditAnywhere)
    FString TheaterWhenArrive;
    
    UPROPERTY(EditAnywhere)
    FString TheaterWhenComplete;
    
    UPROPERTY(EditAnywhere)
    FString TheaterWhenMovePause;
    
    UPROPERTY(EditAnywhere)
    FString LevelSequenceWhenStart;
    
    UPROPERTY(EditAnywhere)
    FString LevelSequenceWhenArrive;
    
    UPROPERTY(EditAnywhere)
    FString LevelSequenceWhenComplete;
    
    UPROPERTY(EditAnywhere)
    FString LevelSequenceWhenMovePause;
    
    UPROPERTY(EditAnywhere)
    FName QuestTaskGroupAlias;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerAggroCheck;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerMoveControl;
    
    UPROPERTY(EditAnywhere)
    float PlayerMoveAreaLimitDistance;
    
    UPROPERTY(EditAnywhere)
    float PlayerRunLimitDistance;
    
    UPROPERTY(EditAnywhere)
    float PlayerSprintLimitDistance;
    
    UPROPERTY(EditAnywhere)
    bool bMoveStateControlByPlayer;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveState> MoveStateFromForwardPlayer;
    
    UPROPERTY(EditAnywhere)
    float MinDistanceFromForwardPlayer;
    
    UPROPERTY(EditAnywhere)
    float MaxDistanceFromForwardPlayer;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveState> MoveStateFromBackwardPlayer;
    
    UPROPERTY(EditAnywhere)
    float MinDistanceFromBackwardPlayer;
    
    UPROPERTY(EditAnywhere)
    float MaxDistanceFromBackwardPlayer;
    
    UPROPERTY(EditAnywhere)
    bool bFixedTargetRotation;
    
    UPROPERTY(EditAnywhere)
    float StopDistanceToPlayer;
    
    UPROPERTY(EditAnywhere)
    float MovePauseDistanceToPlayer;
    
    UPROPERTY(EditAnywhere)
    bool bMovePauseLookAtPlayer;
    
    UPROPERTY(EditAnywhere)
    FString MovePauseShow;
    
    UPROPERTY(EditAnywhere)
    bool bLoopMovePauseShow;
    
    UPROPERTY(EditAnywhere)
    float MoveResumeDistanceToPlayer;
    
    UPROPERTY(EditAnywhere)
    FString StartShow;
    
    UPROPERTY(EditAnywhere)
    float StartShowDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString ArriveShow;
    
    UPROPERTY(EditAnywhere)
    float ArriveShowDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool bLoopArriveShow;
    
    UPROPERTY(EditAnywhere)
    bool bLookAtPlayerWhenArrive;
    
    UPROPERTY(EditAnywhere)
    float OverrideMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bCompleteLookAtPlayer;
    
    UPROPERTY(EditAnywhere)
    float CompleteWaitTime;
    
    UPROPERTY(EditAnywhere)
    float MoveDelayTime;
    
    UPROPERTY(EditAnywhere)
    FName StanceAlias;
    
    UPROPERTY(EditAnywhere)
    bool bUsePathfinding;
    
    UPROPERTY(EditAnywhere)
    float CompletedTimerWhenArrive;
    
    UPROPERTY(EditAnywhere)
    float CompletedDistanceToPlayerWhenArrive;
    
    UPROPERTY(EditAnywhere)
    bool bFly;
    
    UPROPERTY(EditAnywhere)
    float FlyMoveSpeedPow;
    
    UPROPERTY(EditAnywhere)
    FName FormationType;
    
    UPROPERTY(EditAnywhere)
    bool bDisableDroneUIIndicator;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBGuideActionTableProperty();
};

