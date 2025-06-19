#pragma once
#include "CoreMinimal.h"
#include "SBAliasEffect.h"
#include "SBEffectVolumeDeadCountInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBEffectVolumeDeadCountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasEffect> DeadCountEffectAliasList;
    
    SB_API FSBEffectVolumeDeadCountInfo();
};

