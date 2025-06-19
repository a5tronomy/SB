#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraStampInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraStampInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DeltaTime;
    
    UPROPERTY(EditAnywhere)
    FVector position;
    
    UPROPERTY(EditAnywhere)
    FVector Direction;
    
    SB_API FCameraStampInfo();
};

