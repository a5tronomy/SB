#pragma once
#include "CoreMinimal.h"
#include "SBQuestNode.h"
#include "SBQuestPathNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestPathNode : public USBQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StartNodeAlias;
    
    UPROPERTY(EditAnywhere)
    FString WorldAlias;
    
    UPROPERTY(EditAnywhere)
    FString AreaAlias;
    
    UPROPERTY(EditAnywhere)
    int32 PathIndex;
    
    USBQuestPathNode();

};

