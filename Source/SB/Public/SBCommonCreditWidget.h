#pragma once
#include "CoreMinimal.h"
#include "ESBCommonCreditState.h"
#include "SBUserWidget.h"
#include "SBCommonCreditWidget.generated.h"

class UCurveFloat;
class UListView;

UCLASS(EditInlineNew)
class USBCommonCreditWidget : public USBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ScrollSpeed;
    
    UPROPERTY(EditAnywhere)
    float HoldScrollSpeedStartFactor;
    
    UPROPERTY(EditAnywhere)
    float HoldScrollSpeedEndFactor;
    
    UPROPERTY(EditAnywhere)
    float ScrollHoldTimeMax;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ScrollSpeedHoldCurve;
    
    UPROPERTY(EditAnywhere)
    TArray<float> SpeedStepArray;
    
private:
    UPROPERTY(Transient)
    ESBCommonCreditState State;
    
    UPROPERTY(Instanced, Transient)
    UListView* ListView;
    
    UPROPERTY(Transient)
    bool bNotifyEndScroll;
    
    UPROPERTY(Transient)
    bool bAllowClose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModeScrollControl;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSpeedStep;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseHoldTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float CloseProgress;
    
    UPROPERTY(Transient)
    bool bClosePress;
    
    UPROPERTY(Transient)
    bool bInputPressDPadRight;
    
    UPROPERTY(Transient)
    bool bInputPressAccept;
    
    UPROPERTY(Transient)
    bool bInputPressFaceTop;
    
    UPROPERTY(Transient)
    bool bInputPressFaceLeft;
    
    UPROPERTY(Transient)
    bool bClosePressLast;
    
    UPROPERTY(Transient)
    float ClosePressTime;
    
    UPROPERTY(Transient)
    bool bDebugAllowClose;
    
    UPROPERTY(Transient)
    float ScrollHoldTime;
    
public:
    USBCommonCreditWidget();

private:
    UFUNCTION(BlueprintPure)
    bool IsAllowClose();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void EventStateExit(ESBCommonCreditState inState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventStateEnter(ESBCommonCreditState inState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventEndScroll();
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventChangeScrollSpeed(int32 SpeedStepIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventChangeCloseProgress(float Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventChangeCloseAllow(bool bCloseAllow);
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(ESBCommonCreditState inState);
    
};

