#pragma once
#include "CoreMinimal.h"
#include "ESBItemBucketType.h"
#include "SBAliasEffect.h"
#include "SBAliasRewardGroup.h"
#include "SBAliasZoneEvent.h"
#include "SBTableIndexRewardGroup.h"
#include "SBZoneEventActorProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEventActorProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 EventStep;
    
    UPROPERTY()
    FSBAliasRewardGroup RewardGroupAlias;
    
    UPROPERTY(EditAnywhere)
    FSBTableIndexRewardGroup RewardGroupIndex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> RewardBucketType;
    
    UPROPERTY(EditAnywhere)
    FSBAliasEffect EffectAlias;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZoneEvent ZoneEventAlias;
    
    SB_API FSBZoneEventActorProperty();
};

