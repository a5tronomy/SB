#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBLevelSequenceTheaterQTEType.h"
#include "SBLevelSequenceEventQTESectionData.h"
#include "SBSequencerBaseWidget.h"
#include "SBSequencerQTEActorInfo.h"
#include "SBSequencerQTEBindInfo.h"
#include "SBSequencerQTEInputInfo.h"
#include "SBSequencerQTEWidget.generated.h"

class USBShowData;
class USBTextureStyleSetData;
class USBUserWidget;
class UTexture2D;

UCLASS(EditInlineNew)
class USBSequencerQTEWidget : public USBSequencerBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSBLevelSequenceEventQTESectionData SectionData;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterQTEType> InputType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName InputAction;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName UIInputAction;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SequencerStartTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SequencerEndTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SequencerCurrentTime;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<USBUserWidget*> ChildWidgets;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FSBSequencerQTEInputInfo> InputInfoArray;
    
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
    TArray<FSBSequencerQTEActorInfo> actorInfoArray;
    
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
    TMap<FName, FSBSequencerQTEBindInfo> BindCountMap;
    
    UPROPERTY(Transient)
    bool bForceSuccess;
    
    UPROPERTY(Transient)
    float LastHitAllowTime;
    
    UPROPERTY(Transient)
    USBShowData* HitShowData;
    
    UPROPERTY(Transient)
    FString HitEventName;
    
public:
    USBSequencerQTEWidget();

    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTextureInputType(USBTextureStyleSetData* InStyle, TEnumAsByte<ESBLevelSequenceTheaterQTEType> InInputType);
    
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

