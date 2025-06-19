#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceLevelStreamingWaitSectionData.h"
#include "SBLevelSequenceLevelStreamingWaitSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceLevelStreamingWaitSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceLevelStreamingWaitSectionData Data;
    
    USBLevelSequenceLevelStreamingWaitSection();

};

