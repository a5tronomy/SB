#pragma once
#include "CoreMinimal.h"
#include "SBWidgetNavigationEventData.h"
#include "SBCommonSideTabBtnData.generated.h"

USTRUCT(BlueprintType)
struct FSBCommonSideTabBtnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FocusEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBWidgetNavigationEventData NavigationEvent;
    
    SB_API FSBCommonSideTabBtnData();
};

