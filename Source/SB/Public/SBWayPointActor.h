#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "ESBMoveState.h"
#include "ESBPathWayEntryType.h"
#include "ESBWayInterpType.h"
#include "ESBWayPointTurnType.h"
#include "SBAliasZoneEvent.h"
#include "SBWayPointEventInfo.h"
#include "SBWayPointActor.generated.h"

class ASBWayPointActor;
class USplineComponent;

UCLASS()
class SB_API ASBWayPointActor : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneEvent> ZoneEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBMoveState> MoveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBMoveState> ReturnMoveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBWayInterpType> InterpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBPathWayEntryType> EntryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AmplitudePerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SinCircleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName NextPathWayAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRepeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCheckObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRetryOffPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisableBlockDetectionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CancelPausePendingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSBWayPointEventInfo> StopToMoveRandEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PathWayAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinRoundRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRoundRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestinationMinDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestinationMaxDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NearEntryDestinationLength;
    
    UPROPERTY(Instanced, Transient)
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurnDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeginTurnDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndTurnDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBWayPointTurnType> TurnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PathWayAdjustDirRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PathWayAdjustDirByObjectRadiusMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PathWayAdjustDirByObjectRadiusMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PathWayAdjustDirInterpSpeed_Walk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PathWayAdjustDirInterpSpeed_Run;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PathWayOutPathPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ASBWayPointActor* PreWayPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ASBWayPointActor* NextWayPoint;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWarpToStartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyBezierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMoveToStartCheckNearBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyRotationAtSequence;
    
    ASBWayPointActor(const FObjectInitializer& ObjectInitializer);

};

