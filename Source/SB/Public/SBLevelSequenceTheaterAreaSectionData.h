#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceSectionProperty.h"
#include "SBLevelSequenceTheaterAreaSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterAreaSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText MainText;
    
    UPROPERTY(EditAnywhere)
    FText SubText;
    
    UPROPERTY(VisibleAnywhere)
    FSBLevelSequenceSectionProperty Blank;
    
    SB_API FSBLevelSequenceTheaterAreaSectionData();
};

