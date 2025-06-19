#pragma once
#include "CoreMinimal.h"
#include "ESBIndicatorButtonType.h"
#include "SBIndicatorButtonDataWrapper.h"
#include "SBUserWidget.h"
#include "Templates/SubclassOf.h"
#include "SBIndicator.generated.h"

class UHorizontalBox;
class USBIndicatorButtonBase;

UCLASS(EditInlineNew)
class USBIndicator : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UHorizontalBox* ButtonHorizontalBox;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBIndicatorButtonDataWrapper> IndicatorDataMap;
    
    UPROPERTY(EditAnywhere)
    TMap<ESBIndicatorButtonType, TSubclassOf<USBIndicatorButtonBase>> IndicatorButtonMap;
    
    UPROPERTY(EditAnywhere)
    FName IndicatorType;
    
    UPROPERTY(EditAnywhere)
    int32 IndicatorLockChannel;
    
    UPROPERTY(EditAnywhere)
    int32 IndicatorHiddenChannel;
    
    UPROPERTY(EditAnywhere)
    float WidthSpace;
    
    UPROPERTY(Instanced)
    TArray<USBIndicatorButtonBase*> ButtonWidgetPool;
    
public:
    USBIndicator();

    UFUNCTION(BlueprintCallable)
    void UpdateLockChannel(int32 InLockChannel);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIndicatorType(FName InIndicatorType, int32 InLockChannel);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHiddenChannel(int32 InHiddenChannel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshIndicator();
    
};

