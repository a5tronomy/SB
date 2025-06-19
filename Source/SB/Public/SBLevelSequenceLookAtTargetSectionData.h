#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "ESBLevelSequenceLookAtTargetType.h"
#include "SBLevelSequenceLookAtTargetSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceLookAtTargetSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelSequenceLookAtTargetType> ActionType;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneObjectBindingID TargetBinding;
    
    UPROPERTY(EditAnywhere)
    bool bCheckTrackingTarget;
    
    UPROPERTY(EditAnywhere)
    bool bClearDisableLookAtIK;
    
    UPROPERTY(EditAnywhere)
    FName TargetSocket;
    
    UPROPERTY(EditAnywhere)
    float LookAtZOffset;
    
    UPROPERTY(EditAnywhere)
    float RotationSpeed;
    
    SB_API FSBLevelSequenceLookAtTargetSectionData();
};

