#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceSkeletalAnimMoveStateParams.h"
#include "SBLevelSequenceSkeletalAnimMoveStateSection.generated.h"

UCLASS(MinimalAPI)
class USBLevelSequenceSkeletalAnimMoveStateSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBLevelSequenceSkeletalAnimMoveStateParams Params;
    
    USBLevelSequenceSkeletalAnimMoveStateSection();

};

