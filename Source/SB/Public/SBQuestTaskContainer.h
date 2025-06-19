#pragma once
#include "CoreMinimal.h"
#include "SBQuestTaskContainer.generated.h"

USTRUCT(BlueprintType)
struct FSBQuestTaskContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> TaskAliasArray;
    
    SB_API FSBQuestTaskContainer();
};

