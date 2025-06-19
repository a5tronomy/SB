#pragma once
#include "CoreMinimal.h"
#include "SBAliasEventActorBattleState.h"
#include "SBLevelSequenceEventActorBattleStateSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventActorBattleStateSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBAliasEventActorBattleState EventAlias;
    
    SB_API FSBLevelSequenceEventActorBattleStateSectionData();
};

