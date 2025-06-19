#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESBPhotoModeSelfieDirection.h"
#include "SBAutomationBlueprintFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class USBAutomationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBAutomationBlueprintFunctionLibrary();

private:
    UFUNCTION(BlueprintPure)
    static bool IsSelfieMode();
    
    UFUNCTION(BlueprintPure)
    static bool IsPhotoMode();
    
    UFUNCTION(BlueprintPure)
    static bool IsEnableHitStopIK();
    
    UFUNCTION(BlueprintPure)
    static bool IsEnableFootIKWhenSequence();
    
    UFUNCTION(BlueprintPure)
    static FVector GetSelfieHeadLookAtTarget();
    
    UFUNCTION(BlueprintPure)
    static FRotator GetSelfieCameraRotation();
    
    UFUNCTION(BlueprintPure)
    static FVector GetSelfieCameraLocation();
    
    UFUNCTION(BlueprintPure)
    static ESBPhotoModeSelfieDirection GetSelfieCameraDirection();
    
};

