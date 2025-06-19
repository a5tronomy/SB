#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceTheaterPlayerChoiceSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterPlayerChoiceSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FText> MessageArray;
    
    UPROPERTY(EditAnywhere)
    bool RequireWaitInput;
    
    UPROPERTY(EditAnywhere)
    bool ImmidateTakeSkip;
    
    SB_API FSBLevelSequenceTheaterPlayerChoiceSectionData();
};

