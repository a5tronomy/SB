#pragma once
#include "CoreMinimal.h"
#include "ESBUIFillCurve.h"
#include "ESBUIHoldButtonStateType.h"
#include "SBHoldButtonCompleteDelegateDelegate.h"
#include "SBUserWidget.h"
#include "SBHoldButton.generated.h"

class UImage;
class UTextBlock;

UCLASS(EditInlineNew)
class USBHoldButton : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UImage* ProgressImage;
    
    UPROPERTY(BlueprintReadOnly, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReleaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseTime;
    
    UPROPERTY(EditAnywhere)
    ESBUIFillCurve FillType;
    
    UPROPERTY(BlueprintAssignable)
    FSBHoldButtonCompleteDelegate CompleteEvent;
    
public:
    USBHoldButton();

    UFUNCTION(BlueprintCallable)
    void ResetProgress();
    
    UFUNCTION(BlueprintPure)
    float GetProgress() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    ESBUIHoldButtonStateType GetPrevState();
    
    UFUNCTION(BlueprintCallable)
    ESBUIHoldButtonStateType GetCurrnetState();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeState(ESBUIHoldButtonStateType InStateType);
    
};

