#pragma once
#include "CoreMinimal.h"
#include "SBAliasEventActorActive.h"
#include "SBLevelSequenceEventActorActiveSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventActorActiveSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBAliasEventActorActive EventAlias;
    
    SB_API FSBLevelSequenceEventActorActiveSectionData();
};

