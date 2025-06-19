#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBBehaviorPositionInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBBehaviorPositionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(EditAnywhere)
    int32 ShowOtherActorIndex;
    
    SB_API FSBBehaviorPositionInfo();
};

