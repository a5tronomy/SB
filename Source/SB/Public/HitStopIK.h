#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "HitStopIK.generated.h"

USTRUCT(BlueprintType)
struct FHitStopIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsHitStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform RecordRootTransform0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform RecordRootTransform1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RecordPositionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CollisionGroupName;
    
    SB_API FHitStopIK();
};

