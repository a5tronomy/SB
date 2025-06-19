#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UObject/NoExportTypes.h"
#include "ESBAIActorType.h"
#include "ESBDroneFollowLocationType.h"
#include "ESBMoveState.h"
#include "SBBTTask_SbFollowTarget.generated.h"

UCLASS()
class SB_API USBBTTask_SbFollowTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveState> MoveState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIActorType::Type> TargetType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDroneFollowLocationType> DroneFollowLocationType;
    
    UPROPERTY(EditAnywhere)
    FString SystemTypeKey;
    
    UPROPERTY(EditAnywhere)
    float LocationHoldingTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseNavMesh;
    
    UPROPERTY(EditAnywhere)
    float DistanceOfApproach;
    
    UPROPERTY(EditAnywhere)
    float ExecutableDistanceToTarget;
    
    UPROPERTY(EditAnywhere)
    float TeleportDistance;
    
    UPROPERTY(EditAnywhere)
    FVector LocalRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FVector LookAtRelativeLocation;
    
    USBBTTask_SbFollowTarget();

};

