#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Types/SlateEnums.h"
#include "SBWidgetNavigationCustomLibrary.generated.h"

class ISBWidgetNavigationCustom;
class USBWidgetNavigationCustom;
class USBUserWidget;
class UWidget;

UCLASS(BlueprintType)
class USBWidgetNavigationCustomLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBWidgetNavigationCustomLibrary();

    UFUNCTION(BlueprintPure)
    static UWidget* GetNavigationRelayDefault(TScriptInterface<ISBWidgetNavigationCustom> WidgetNavigationCustom, EUINavigation InNavigation, USBUserWidget* InChildSBWidget, USBUserWidget* InPrevFocusSBWidget);
    
};

