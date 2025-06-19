#pragma once
#include "CoreMinimal.h"
#include "OptionalAnimationByAngle.generated.h"

USTRUCT(BlueprintType)
struct FOptionalAnimationByAngle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString AnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    float MinAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxAngle;
    
    SB_API FOptionalAnimationByAngle();
};

