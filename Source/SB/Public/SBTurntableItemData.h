#pragma once
#include "CoreMinimal.h"
#include "ESBUIRedDotState.h"
#include "SBTurntableItemData.generated.h"

USTRUCT(BlueprintType)
struct FSBTurntableItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText TitleText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPlaying;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> RedDotState;
    
    SB_API FSBTurntableItemData();
};

