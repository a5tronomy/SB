#pragma once
#include "CoreMinimal.h"
#include "SBJsonCollisionGroup.generated.h"

USTRUCT(BlueprintType)
struct FSBJsonCollisionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    float DelayTime;
    
    UPROPERTY(EditAnywhere, Transient)
    FName CollisionGroupName;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bCheckJustActionTime;
    
    SB_API FSBJsonCollisionGroup();
};

