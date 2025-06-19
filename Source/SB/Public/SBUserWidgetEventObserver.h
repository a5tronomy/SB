#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBUserWidgetEventObserver.generated.h"

UCLASS(BlueprintType)
class SB_API USBUserWidgetEventObserver : public UObject {
    GENERATED_BODY()
public:
    USBUserWidgetEventObserver();

private:
    UFUNCTION()
    void OnWidgetListViewEvent(UObject* InData);
    
    UFUNCTION()
    void OnWidgetEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyListViewRelease(UObject* InData);
    
    UFUNCTION(BlueprintCallable)
    void NotifyListViewPress(UObject* InData);
    
    UFUNCTION(BlueprintCallable)
    void NotifyListViewDoubleClick(UObject* InData);
    
    UFUNCTION(BlueprintCallable)
    void NotifyListViewClick(UObject* InData);
    
};

