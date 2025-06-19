#pragma once
#include "CoreMinimal.h"
#include "SBAliasEventActorEffect.h"
#include "SBLevelSequenceEventActorEffectSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventActorEffectSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBAliasEventActorEffect EventAlias;
    
    UPROPERTY(EditAnywhere)
    FSBAliasEventActorEffect TeardownEventAlias;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreObserve;
    
    SB_API FSBLevelSequenceEventActorEffectSectionData();
};

