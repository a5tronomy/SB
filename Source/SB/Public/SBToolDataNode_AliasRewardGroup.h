#pragma once
#include "CoreMinimal.h"
#include "SBAliasRewardGroup.h"
#include "SBDataNodeBase.h"
#include "SBTableIndexRewardGroup.h"
#include "SBToolDataNode_AliasRewardGroup.generated.h"

class USBTableIndexController;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_AliasRewardGroup : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Alias;
    
    UPROPERTY()
    FSBAliasRewardGroup RewardGroupAlias;
    
    UPROPERTY(EditAnywhere)
    FSBTableIndexRewardGroup RewardGroupIndex;
    
    UPROPERTY(Transient)
    USBTableIndexController* TableIndexController;
    
    USBToolDataNode_AliasRewardGroup();

};

