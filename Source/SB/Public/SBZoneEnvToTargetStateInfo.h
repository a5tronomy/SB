#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZoneEnvToTargetStateInfo.generated.h"

class ALevelSequenceActor;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FSBZoneEnvToTargetStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TargetTagName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AttachTagNames;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> ToTransitLevelSequence;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALevelSequenceActor> SequenceActorTemplate;
    
    SB_API FSBZoneEnvToTargetStateInfo();
};

