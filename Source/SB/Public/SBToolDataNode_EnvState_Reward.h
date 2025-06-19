#pragma once
#include "CoreMinimal.h"
#include "SBAliasRewardGroup.h"
#include "SBDataNodeBase.h"
#include "SBTableIndexRewardGroup.h"
#include "SBToolDataNode_EnvState_Reward.generated.h"

class USBRewardGroupSpawnFormation;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EnvState_Reward : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    USBRewardGroupSpawnFormation* RewardGroupSpawnFormation;
    
    UPROPERTY()
    FSBAliasRewardGroup RewardGroupAlias;
    
    UPROPERTY(EditAnywhere)
    FSBTableIndexRewardGroup RewardGroupIndex;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EnvState_Reward();

};

