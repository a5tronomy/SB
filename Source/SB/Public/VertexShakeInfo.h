#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VertexShakeInfo.generated.h"

USTRUCT(BlueprintType)
struct FVertexShakeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector ShakeHitPosition;
    
    UPROPERTY(Transient)
    FVector ShakeHitDirection;
    
    UPROPERTY(Transient)
    float ShakeInterval;
    
    UPROPERTY(Transient)
    float ShakePower;
    
    UPROPERTY(Transient)
    float ShakeRange;
    
    UPROPERTY(Transient)
    float ShakeFallOff;
    
    UPROPERTY(Transient)
    float ShakeWeaknessPerSec;
    
    SB_API FVertexShakeInfo();
};

