#pragma once
#include "CoreMinimal.h"
#include "SBAliasRewardGroup.h"
#include "SBTableIndexRewardGroup.h"
#include "SBZoneEnvRewardGroupInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEnvRewardGroupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EnvStateTagName;
    
    UPROPERTY()
    FSBAliasRewardGroup RewardGroupAlias;
    
    UPROPERTY(EditAnywhere)
    FSBTableIndexRewardGroup RewardGroupIndex;
    
    SB_API FSBZoneEnvRewardGroupInfo();
};

