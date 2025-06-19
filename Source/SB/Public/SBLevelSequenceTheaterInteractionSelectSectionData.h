#pragma once
#include "CoreMinimal.h"
#include "ESBSequenceContentType.h"
#include "SBLevelSequenceTheaterInteractionSelectSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterInteractionSelectSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Tag;
    
    UPROPERTY(EditAnywhere)
    bool RequireWaitInput;
    
    UPROPERTY(EditAnywhere)
    bool ImmidateTakeSkip;
    
    UPROPERTY(EditAnywhere)
    bool ImmidateInteractionReceive;
    
    UPROPERTY(EditAnywhere)
    float BGDeactiveDelayTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequenceContentType> ContentType;
    
    SB_API FSBLevelSequenceTheaterInteractionSelectSectionData();
};

