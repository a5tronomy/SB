#pragma once
#include "CoreMinimal.h"
#include "ESBLevelSequenceTheaterReactionTriggerType.h"
#include "SBLevelSequenceTheaterReactionTriggerSectionData.h"
#include "SBSequencerBaseWidget.h"
#include "SBSequencerReactionTriggerBindInfo.h"
#include "SBSequencerReactionTriggerWidget.generated.h"

class USBTextureStyleSetData;
class UTexture2D;

UCLASS(EditInlineNew)
class USBSequencerReactionTriggerWidget : public USBSequencerBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBLevelSequenceTheaterReactionTriggerSectionData SectionData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterReactionTriggerType> InputType;
    
    UPROPERTY(Transient)
    bool bBindInput;
    
    UPROPERTY(Transient)
    float PressTime;
    
    UPROPERTY(Transient)
    bool bInputPress;
    
    UPROPERTY(Transient)
    bool bInputComplete;
    
    UPROPERTY(Transient)
    TArray<FName> CheckInputActionArray;
    
    UPROPERTY(Transient)
    TMap<FName, FSBSequencerReactionTriggerBindInfo> BindCountMap;
    
public:
    USBSequencerReactionTriggerWidget();

    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTextureInputType(USBTextureStyleSetData* InStyle, TEnumAsByte<ESBLevelSequenceTheaterReactionTriggerType> InInputType);
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetProgressPercent();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void EventVisibleProgress(bool bVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventCompleteProgress();
    
    UFUNCTION(BlueprintCallable)
    void ClearWidget();
    
};

