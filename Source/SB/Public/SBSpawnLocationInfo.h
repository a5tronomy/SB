#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBSpawnLocationInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSpawnLocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LocalDistance;
    
    UPROPERTY(EditAnywhere)
    FRotator LocalRotation;
    
    UPROPERTY(EditAnywhere)
    FVector LocalDirForDistance;
    
    SB_API FSBSpawnLocationInfo();
};

