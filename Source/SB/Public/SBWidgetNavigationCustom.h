#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Types/SlateEnums.h"
#include "SBWidgetNavigationInfo.h"
#include "SBWidgetNavigationCustom.generated.h"

class USBUserWidget;
class UWidget;

UINTERFACE(Blueprintable)
class USBWidgetNavigationCustom : public UInterface {
    GENERATED_BODY()
};

class ISBWidgetNavigationCustom : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    TMap<USBUserWidget*, FSBWidgetNavigationInfo> GetNavigationTargetMap();
    
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetNavigationRelay(EUINavigation InNavigation, USBUserWidget* InChildSBWidget, USBUserWidget* InPrevFocusSBWidget);
    
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* GetNavigation(EUINavigation InNavigation);
    
};

