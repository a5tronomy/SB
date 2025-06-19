#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBSequencerSkipWidget.generated.h"

UCLASS(EditInlineNew)
class USBSequencerSkipWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float SkipProgress;
    
    UPROPERTY(Transient)
    bool LastInputState;
    
    UPROPERTY(Transient)
    bool bRecordMode;
    
    UPROPERTY(Transient)
    float NextSkipAllowTime;
    
    UPROPERTY(Transient)
    bool bSkipOptionHide;
    
    UPROPERTY(Transient)
    bool bActiveSkipMouseCursor;
    
public:
    USBSequencerSkipWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateSkipHold(bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOptionVisibleSkipUI();
    
};

