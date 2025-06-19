#pragma once
#include "CoreMinimal.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_LevelSequence.generated.h"

class ULevelSequence;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_LevelSequence : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY()
    FString LevelSeqAlias;
    
    USBToolDataNode_LevelSequence();

};

