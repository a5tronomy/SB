#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MoveInfo.generated.h"

USTRUCT(BlueprintType)
struct FMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector position;
    
    UPROPERTY(Transient)
    FRotator Rotation;
    
    UPROPERTY(Transient)
    float DeltaSecond;
    
    SB_API FMoveInfo();
};

