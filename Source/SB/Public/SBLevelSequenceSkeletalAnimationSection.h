#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceSkeletalAnimationParams.h"
#include "SBLevelSequenceSkeletalAnimationSection.generated.h"

UCLASS(MinimalAPI)
class USBLevelSequenceSkeletalAnimationSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBLevelSequenceSkeletalAnimationParams Params;
    
    USBLevelSequenceSkeletalAnimationSection();

};

