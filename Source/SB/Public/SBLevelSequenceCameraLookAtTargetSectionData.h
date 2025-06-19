#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "SBLevelSequenceCameraLookAtTargetSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceCameraLookAtTargetSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneObjectBindingID SourceBinding;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneObjectBindingID TargetBinding;
    
    UPROPERTY(EditAnywhere)
    bool bEveryTrackingSource;
    
    UPROPERTY(EditAnywhere)
    bool bEveryTrackingTarget;
    
    SB_API FSBLevelSequenceCameraLookAtTargetSectionData();
};

