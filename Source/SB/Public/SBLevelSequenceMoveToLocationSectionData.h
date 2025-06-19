#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneObjectBindingID.h"
#include "ESBLevelSequenceMoveToLocationType.h"
#include "ESBMoveInputType.h"
#include "SBLevelSequenceMoveToLocationSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceMoveToLocationSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelSequenceMoveToLocationType> Type;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLocation;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneObjectBindingID TargetPoint;
    
    UPROPERTY(EditAnywhere)
    bool CheckLocation;
    
    UPROPERTY(EditAnywhere)
    bool UseBraking;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveInputType> OverrideBrakingInputType;
    
    UPROPERTY(EditAnywhere)
    float OverrideBrakingDistStart;
    
    UPROPERTY(EditAnywhere)
    float OverrideBrakingDistEnd;
    
    UPROPERTY(EditAnywhere)
    float EndAnimRetentionSpeedTime;
    
    UPROPERTY(EditAnywhere)
    bool UseSpeedAnimGraph;
    
    UPROPERTY(EditAnywhere)
    bool UseManualStop;
    
    UPROPERTY(EditAnywhere)
    bool UseTargetRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator TargetRotation;
    
    UPROPERTY(EditAnywhere)
    bool FinishOrStopMovementOff;
    
    UPROPERTY(EditAnywhere)
    bool FinishOrStopDroneMovementOff;
    
    UPROPERTY(EditAnywhere)
    bool PlayUsePlayerBattleStateChange;
    
    UPROPERTY(EditAnywhere)
    bool PlayPlayerBattleState;
    
    UPROPERTY(EditAnywhere)
    bool FinishFrameJumpToEndSection;
    
    UPROPERTY(EditAnywhere)
    bool FinishUseDroneAIControl;
    
    UPROPERTY(EditAnywhere)
    bool FinishDroneAIState;
    
    UPROPERTY(EditAnywhere)
    bool bCheckImprovedPlaySeqTime;
    
    UPROPERTY()
    FString EndToMark;
    
    SB_API FSBLevelSequenceMoveToLocationSectionData();
};

