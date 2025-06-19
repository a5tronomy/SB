#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBEventMoveData_RopeTMInfo.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBEventMoveData_RopeTMInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector PendulumVelocity;
    
    UPROPERTY(Transient)
    FVector PendulumLocation;
    
    FSBEventMoveData_RopeTMInfo();
};

