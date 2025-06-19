#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBDevCommonMessageBoxWidget.generated.h"

UCLASS(EditInlineNew)
class USBDevCommonMessageBoxWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FString prefixName;
    
public:
    USBDevCommonMessageBoxWidget();

protected:
    UFUNCTION()
    void OnClickPositive();
    
    UFUNCTION()
    void OnClickNegative();
    
};

