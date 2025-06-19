#pragma once
#include "CoreMinimal.h"
#include "ESBMetaAIThink.h"
#include "SBSaveGameData_MetaAI.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_MetaAI {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SpecialBehaviorTag;
    
    UPROPERTY(EditAnywhere)
    ESBMetaAIThink ForceThink;
    
    UPROPERTY(EditAnywhere)
    FName ForceThink_BehaviorAlias;
    
    UPROPERTY(EditAnywhere)
    float Tiredness;
    
    UPROPERTY(EditAnywhere)
    float TalkWatingTime;
    
    UPROPERTY(EditAnywhere)
    float AINodeGroupIndex;
    
    SB_API FSBSaveGameData_MetaAI();
};

