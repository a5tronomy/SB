#pragma once
#include "CoreMinimal.h"
#include "ESBItemBucketType.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ActionRewardGroup.generated.h"

class USBRewardGroupSpawnFormation;

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ActionRewardGroup : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DelayTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBInteractionExecPinInfo> RetrunValue;
    
    UPROPERTY(EditAnywhere)
    USBRewardGroupSpawnFormation* RewardGroupSpawnFormation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> SpawnTargetType;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    USBInteractionNode_ActionRewardGroup();

};

