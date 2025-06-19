#pragma once
#include "CoreMinimal.h"
#include "ESBSequenceContentType.h"
#include "ESBTheaterInteractionDesignType.h"
#include "SBLevelSequenceTheaterInteractionSelectSectionData.h"
#include "SBSequencerBaseWidget.h"
#include "SBTheaterInteractionLineData.h"
#include "SBSequencerInteractionSelectWidget.generated.h"

UCLASS(EditInlineNew)
class USBSequencerInteractionSelectWidget : public USBSequencerBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 FocusIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBTheaterInteractionDesignType> DesignType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FSBTheaterInteractionLineData> DataArray;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bUseInputCancel;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText Message;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBSequenceContentType> ContentType;
    
    UPROPERTY(Transient)
    FSBLevelSequenceTheaterInteractionSelectSectionData SectionData;
    
    UPROPERTY(Transient)
    bool bModeWaitInput;
    
    UPROPERTY(Transient)
    bool bSkipTaked;
    
    UPROPERTY(Transient)
    bool bInputComplete;
    
    UPROPERTY(Transient)
    int32 SelectIndex;
    
    UPROPERTY(Transient)
    int32 TheaterSceneID;
    
    UPROPERTY(Transient)
    float RemainInputBlockTime;
    
public:
    USBSequencerInteractionSelectWidget();

    UFUNCTION(BlueprintCallable)
    void SetSelectAndFocusIndex(int32 InIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RequestSlotFocusChange(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsSelect();
    
    UFUNCTION(BlueprintCallable)
    void ClickSelect(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ClickInputAcceptYesNoPositive();
    
    UFUNCTION(BlueprintCallable)
    void ClickInputAcceptYesNoNegative();
    
    UFUNCTION(BlueprintCallable)
    void ClickInputAcceptAdamFusionPositive();
    
    UFUNCTION(BlueprintCallable)
    void ClickInputAcceptAdamFusionNegative();
    
};

