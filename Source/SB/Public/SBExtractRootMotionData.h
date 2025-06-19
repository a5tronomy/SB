#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBExtractRootMotionData.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBExtractRootMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CharacterMoveAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FTransform> TransformArray;
    
    UPROPERTY(EditAnywhere)
    float StartTime;
    
    UPROPERTY(EditAnywhere)
    float EndTime;
    
    FSBExtractRootMotionData();
};

