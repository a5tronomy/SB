#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceSetAnimBPPropertySectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceSetAnimBPPropertySectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    SB_API FSBLevelSequenceSetAnimBPPropertySectionData();
};

