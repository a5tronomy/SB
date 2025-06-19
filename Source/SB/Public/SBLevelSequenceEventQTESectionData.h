#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "SBLevelSequenceTheaterQTELocationData.h"
#include "SBLevelSequenceEventQTESectionData.generated.h"

class USBDualSenseTriggerEffectData;
class USBShowData;

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventQTESectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseTakeSelectNext;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> TakeSelectPercentArray;
    
    UPROPERTY()
    bool RequireWaitInput;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool VisibleProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseSuccessFinishTakeSkip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseFailFinishTakeSkip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ImmediateSuccessTakeSkip;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ImmediateSuccessNoWaitWidgetAnimFinish;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseSuccessTimeSpeedChange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SuccessTimeSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseSectionFinishShowResult;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HitDelayTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString HitEventName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIgnoreOptionSuccess;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SingleInputAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SingleGoalInputCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SingleCustomWidgetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBLevelSequenceTheaterQTELocationData SingleLocationData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USBShowData* SingleHitShowData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMovieSceneObjectBindingID SingleHitShowMainActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMovieSceneObjectBindingID> SingleHitShowOtherActorArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USBDualSenseTriggerEffectData* SingleDualSenseData;
    
    SB_API FSBLevelSequenceEventQTESectionData();
};

