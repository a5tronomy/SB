#pragma once
#include "CoreMinimal.h"
#include "ESBLevelSequenceEventHUDActionType.h"
#include "SBLevelSequenceEventHUDActionSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventHUDActionSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelSequenceEventHUDActionType> ActionType;
    
    UPROPERTY(EditAnywhere)
    bool bControlHideUI;
    
    UPROPERTY(EditAnywhere)
    bool bClearVisible;
    
    UPROPERTY(EditAnywhere)
    bool bHUDInputLock;
    
    SB_API FSBLevelSequenceEventHUDActionSectionData();
};

