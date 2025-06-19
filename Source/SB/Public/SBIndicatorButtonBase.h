#pragma once
#include "CoreMinimal.h"
#include "ESBUILogicType.h"
#include "SBUserWidget.h"
#include "SBIndicatorButtonBase.generated.h"

UCLASS(EditInlineNew)
class USBIndicatorButtonBase : public USBUserWidget {
    GENERATED_BODY()
public:
    USBIndicatorButtonBase();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetText(const FText& InText);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetTargetLogicType(TEnumAsByte<ESBUILogicType> InTargetLogicType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetResourceActionArray(FName InActionName, int32 Index);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetResourceAction2(FName InActionName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetResourceAction(FName InActionName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLockImage(bool InVisibleLock);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetLeftSpace(float InSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetIndicatorBtnProperties(FText InText, FName InAction1Name, FName InAction2Name, const TArray<FName>& InActionNameArray, bool InVisibleLock, TEnumAsByte<ESBUILogicType> InTargetLogicType, bool InClickable);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetButtonClickable(bool InClickable);
    
};

