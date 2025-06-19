#pragma once
#include "CoreMinimal.h"
#include "ESBLevelSequenceTheaterInputCounterType.h"
#include "SBSequencerInputCounterInputInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSequencerInputCounterInputInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterInputCounterType> InputType;
    
    UPROPERTY(Transient)
    TArray<FName> CheckInputActionArray;
    
    UPROPERTY(Transient)
    int32 InputGoalCount;
    
    UPROPERTY(Transient)
    int32 InputCurrentCount;
    
    UPROPERTY(Transient)
    bool CheckLeftStickHit;
    
    UPROPERTY(Transient)
    bool CheckRightStickHit;
    
    UPROPERTY(Transient)
    bool ShowResult;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float StartSequenceTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float EndSequenceTime;
    
    UPROPERTY(Transient)
    bool bFireFadeIn;
    
    UPROPERTY(Transient)
    bool bFireFadeOut;
    
    UPROPERTY(Transient)
    bool bResult;
    
    UPROPERTY(Transient)
    bool bFireResult;
    
    UPROPERTY(Transient)
    bool bBindInput;
    
    SB_API FSBSequencerInputCounterInputInfo();
};

