#pragma once
#include "CoreMinimal.h"
#include "SBAliasEventUIAction.h"
#include "SBLevelSequenceEventUIActionSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventUIActionSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBAliasEventUIAction EventAlias;
    
    UPROPERTY(EditAnywhere)
    float DelayTime;
    
    UPROPERTY(EditAnywhere)
    FSBAliasEventUIAction EventAlias2;
    
    UPROPERTY(EditAnywhere)
    float DelayTime2;
    
    SB_API FSBLevelSequenceEventUIActionSectionData();
};

