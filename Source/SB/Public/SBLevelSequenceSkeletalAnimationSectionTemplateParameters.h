#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBLevelSequenceSkeletalAnimationParams.h"
#include "SBLevelSequenceSkeletalAnimationSectionTemplateParameters.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceSkeletalAnimationSectionTemplateParameters : public FSBLevelSequenceSkeletalAnimationParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
    UPROPERTY()
    FFrameNumber SectionEndTime;
    
    SB_API FSBLevelSequenceSkeletalAnimationSectionTemplateParameters();
};

