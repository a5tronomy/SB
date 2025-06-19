#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBLevelSequenceSkeletalAnimMoveStateParams.h"
#include "SBLevelSequenceSkeletalAnimMoveStateSectionTemplateParameters.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceSkeletalAnimMoveStateSectionTemplateParameters : public FSBLevelSequenceSkeletalAnimMoveStateParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
    UPROPERTY()
    FFrameNumber SectionEndTime;
    
    SB_API FSBLevelSequenceSkeletalAnimMoveStateSectionTemplateParameters();
};

