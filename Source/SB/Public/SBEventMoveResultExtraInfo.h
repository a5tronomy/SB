#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBEventMoveResultExtraInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBEventMoveResultExtraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 EventMoveHitCollisionIndex;
    
    UPROPERTY(Transient)
    float DistanceToPoint;
    
    UPROPERTY(Transient)
    FVector EventMoveHitLocation;
    
    SB_API FSBEventMoveResultExtraInfo();
};

