#pragma once
#include "CoreMinimal.h"
#include "ESBMoveState.h"
#include "SBAliasCharacterStance.h"
#include "SBAliasQuestGroupTask.h"
#include "SBAliasZoneEvent.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_GuideAction.generated.h"

class ULevelSequence;
class USBShowData;
class USBTheaterData;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_GuideAction : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString PathWayName;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> ZoneEventsWhenStart;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> ZoneEventsWhenArrive;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> ZoneEventsWhenComplete;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBTheaterData> TheaterWhenStart;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBTheaterData> TheaterWhenArrive;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBTheaterData> TheaterWhenComplete;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBTheaterData> TheaterWhenMovePause;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> LevelSequenceWhenStart;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> LevelSequenceWhenArrive;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> LevelSequenceWhenComplete;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> LevelSequenceWhenMovePause;
    
    UPROPERTY(EditAnywhere)
    FSBAliasQuestGroupTask QuestTaskGroupAlias;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCharacterStance StanceAlias;
    
    UPROPERTY(EditAnywhere)
    bool bFixedTargetRotation;
    
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
    float MoveDelayTime;
    
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
    float StopDistanceToPlayer;
    
    UPROPERTY(EditAnywhere)
    float MovePauseDistanceToPlayer;
    
    UPROPERTY(EditAnywhere)
    float MoveResumeDistanceToPlayer;
    
    UPROPERTY(EditAnywhere)
    bool bMovePauseLookAtPlayer;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBShowData> MovePauseShow;
    
    UPROPERTY(EditAnywhere)
    bool bLoopMovePauseShow;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBShowData> ArriveShow;
    
    UPROPERTY(EditAnywhere)
    float ArriveShowDelayTime;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBShowData> StartShow;
    
    UPROPERTY(EditAnywhere)
    float StartShowDelayTime;
    
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
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_GuideAction();

};

