#pragma once
#include "CoreMinimal.h"
#include "SBWidgetNavigationInfo.generated.h"

class USBUserWidget;

USTRUCT(BlueprintType)
struct FSBWidgetNavigationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USBUserWidget* LeftTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USBUserWidget* RightTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USBUserWidget* UpTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USBUserWidget* DownTarget;
    
    SB_API FSBWidgetNavigationInfo();
};

