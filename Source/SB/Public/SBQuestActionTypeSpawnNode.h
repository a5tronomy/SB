#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBQuestActionNode.h"
#include "SBQuestActionTypeSpawnNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestActionTypeSpawnNode : public USBQuestActionNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAlias EventSpawn;
    
    USBQuestActionTypeSpawnNode();

};

