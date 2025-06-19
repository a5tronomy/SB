#pragma once
#include "CoreMinimal.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasEffect.h"
#include "SBAliasRewardGroup.h"
#include "SBAliasZoneEvent.h"
#include "SBTableIndexRewardGroup.h"
#include "SBZoneEnvTagProperty.generated.h"

class USBShowData;

USTRUCT(BlueprintType)
struct FSBZoneEnvTagProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TagName;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasEffect> EffectList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneEvent> ZoneEventList;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup ConditionGroup;
    
    UPROPERTY()
    FSBAliasRewardGroup RewardGroup;
    
    UPROPERTY(EditAnywhere)
    FSBTableIndexRewardGroup RewardGroupIndex;
    
    UPROPERTY(EditAnywhere)
    int32 ProgressCount;
    
    UPROPERTY(EditAnywhere)
    FName ProgressTargetTagName;
    
    UPROPERTY()
    USBShowData* CasterShowData;
    
    SB_API FSBZoneEnvTagProperty();
};

