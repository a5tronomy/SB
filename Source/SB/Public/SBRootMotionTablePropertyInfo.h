#pragma once
#include "CoreMinimal.h"
#include "SBRootMotionTablePropertyInfo.generated.h"

USTRUCT()
struct SB_API FSBRootMotionTablePropertyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString CharacterMoveAlias;
    
    UPROPERTY(EditAnywhere)
    float StartTime;
    
    UPROPERTY(EditAnywhere)
    float EndTime;
    
    FSBRootMotionTablePropertyInfo();
};

