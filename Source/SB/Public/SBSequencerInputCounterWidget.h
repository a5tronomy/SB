#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBLevelSequenceTheaterInputCounterActionType.h"
#include "ESBLevelSequenceTheaterInputCounterType.h"
#include "SBLevelSequenceEventInputCounterSectionData.h"
#include "SBSequencerBaseWidget.h"
#include "SBSequencerInputCounterActorInfo.h"
#include "SBSequencerInputCounterBindInfo.h"
#include "SBSequencerInputCounterInputInfo.h"
#include "SBSequencerInputCounterWidget.generated.h"

class USBShowData;
class USBTextureStyleSetData;
class USBUserWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class USBSequencerInputCounterWidget : public USBSequencerBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBLevelSequenceEventInputCounterSectionData SectionData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterInputCounterActionType> ActionKey;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterInputCounterType> InputType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SequencerStartTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SequencerEndTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SequencerCurrentTime;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<USBUserWidget*> ChildWidgets;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FSBSequencerInputCounterInputInfo> InputInfoArray;
    
private:
    UPROPERTY(Transient)
    TArray<FName> CheckInputActionArray;
    
    UPROPERTY(Transient)
    bool CheckLeftStickHit;
    
    UPROPERTY(Transient)
    bool CheckRightStickHit;
    
    UPROPERTY(Transient)
    int32 InputCurrentCount;
    
    UPROPERTY(Transient)
    bool ShowResult;
    
    UPROPERTY(Instanced, Transient)
    USBUserWidget* targetWidget;
    
    UPROPERTY(Transient)
    TArray<FSBSequencerInputCounterActorInfo> actorInfoArray;
    
    UPROPERTY(Transient)
    FFrameRate FrameRate;
    
    UPROPERTY(Transient)
    bool bSkipTaked;
    
    UPROPERTY(Transient)
    bool bModeWaitInput;
    
    UPROPERTY(Transient)
    bool bUpdatedTakeNext;
    
    UPROPERTY(Transient)
    bool bBindInput;
    
    UPROPERTY(Transient)
    int32 BindIndex;
    
    UPROPERTY(Transient)
    TMap<FName, FSBSequencerInputCounterBindInfo> BindCountMap;
    
    UPROPERTY(Transient)
    bool bForceSuccess;
    
    UPROPERTY(Transient)
    float LastHitAllowTime;
    
    UPROPERTY(Transient)
    USBShowData* HitShowData;
    
    UPROPERTY(Transient)
    FString HitEventName;
    
public:
    USBSequencerInputCounterWidget();

    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTextureInputType(USBTextureStyleSetData* InStyle, TEnumAsByte<ESBLevelSequenceTheaterInputCounterType> InInputType);
    
    UFUNCTION(BlueprintCallable)
    bool GetResult(bool bForceCheck);
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetProgressPercent();
    
    UFUNCTION(BlueprintCallable)
    bool GetInputInfoResult(int32 idx);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearWidget();
    
};

