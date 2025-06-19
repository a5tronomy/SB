#pragma once
#include "CoreMinimal.h"
#include "SBAliasEventActorEffect.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeAttachActorEffectNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeAttachActorEffectNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasEventActorEffect EventActorEffect;
    
    USBQuestActionTypeAttachActorEffectNode();

};

