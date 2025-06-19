#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "ESBLevelSequenceTheaterInputCounterActionType.h"
#include "ESBLevelSequenceTheaterInputCounterType.h"
#include "SBLevelSequenceTheaterInputCounterFlowData.h"
#include "SBLevelSequenceTheaterInputCounterLocationData.h"
#include "SBLevelSequenceEventInputCounterSectionData.generated.h"

class USBDualSenseTriggerEffectData;
class USBShowData;

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventInputCounterSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterInputCounterActionType> ActionKey;
    
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
    
    UPROPERTY()
    uint8 visibleSinglePress: 1;
    
    UPROPERTY()
    uint8 visibleDoublePress: 1;
    
    UPROPERTY()
    uint8 visibleFlowPress: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterInputCounterType> SingleInputKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SingleGoalInputCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SingleCustomWidgetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBLevelSequenceTheaterInputCounterLocationData SingleLocationData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USBShowData* SingleHitShowData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMovieSceneObjectBindingID SingleHitShowMainActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMovieSceneObjectBindingID> SingleHitShowOtherActorArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USBDualSenseTriggerEffectData* SingleDualSenseData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TEnumAsByte<ESBLevelSequenceTheaterInputCounterType>> DoubleInputKeyArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DoubleGoalInputCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DoubleCustomWidgetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBLevelSequenceTheaterInputCounterLocationData DoubleLocationData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSBLevelSequenceTheaterInputCounterFlowData> FlowInputKeyArray;
    
    SB_API FSBLevelSequenceEventInputCounterSectionData();
};

