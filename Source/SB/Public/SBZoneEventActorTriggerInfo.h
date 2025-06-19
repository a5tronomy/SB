#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBDestructionFromActorAttackTriggerInfo.h"
#include "SBDestructionFromActorMoveTriggerInfo.h"
#include "SBDestructionFromActorRangedAttackTriggerInfo.h"
#include "SBDestructionFromActorRuleMoveTriggerInfo.h"
#include "SBZoneEventActorTriggerInfo.generated.h"

UCLASS()
class USBZoneEventActorTriggerInfo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBDestructionFromActorAttackTriggerInfo ActorAttackTriggerInfo;
    
    UPROPERTY(EditAnywhere)
    FSBDestructionFromActorRangedAttackTriggerInfo ActorRangedAttackTriggerInfo;
    
    UPROPERTY(EditAnywhere)
    FSBDestructionFromActorMoveTriggerInfo ActorMoveTriggerInfo;
    
    UPROPERTY(EditAnywhere)
    FSBDestructionFromActorRuleMoveTriggerInfo ActorRuleMoveTriggerInfo;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TriggerTagArray;
    
    UPROPERTY(EditAnywhere)
    bool bNotDestructionByRadialForce;
    
    USBZoneEventActorTriggerInfo();

};

