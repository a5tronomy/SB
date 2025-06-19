#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBSequencerBaseWidget.generated.h"

class UPlayerInput;
class USBPlayerInput;

UCLASS(EditInlineNew)
class USBSequencerBaseWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool RequireInput;
    
    UPROPERTY()
    UPlayerInput* Input;
    
    UPROPERTY()
    USBPlayerInput* inputSB;
    
    UPROPERTY()
    int32 StartFrame;
    
    UPROPERTY()
    int32 SectionStartFrame;
    
public:
    USBSequencerBaseWidget();

    UFUNCTION(BlueprintCallable)
    void FinishBlock(int32 InSelect);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void EventStartBlock();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventResetBlock();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventFinishBlock(int32 InSelect);
    
};

