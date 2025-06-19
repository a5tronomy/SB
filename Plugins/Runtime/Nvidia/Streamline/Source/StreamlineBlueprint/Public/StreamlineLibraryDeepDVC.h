#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EStreamlineDeepDVCMode.h"
#include "EStreamlineFeatureSupport.h"
#include "StreamlineLibraryDeepDVC.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UStreamlineLibraryDeepDVC : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibraryDeepDVC();

    UFUNCTION(BlueprintCallable)
    static void SetDeepDVCSaturationBoost(float Intensity);
    
    UFUNCTION(BlueprintCallable)
    static void SetDeepDVCMode(EStreamlineDeepDVCMode DeepDVCMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetDeepDVCIntensity(float Intensity);
    
    UFUNCTION(BlueprintPure)
    static EStreamlineFeatureSupport QueryDeepDVCSupport();
    
    UFUNCTION(BlueprintPure)
    static bool IsDeepDVCSupported();
    
    UFUNCTION(BlueprintPure)
    static bool IsDeepDVCModeSupported(EStreamlineDeepDVCMode DeepDVCMode);
    
    UFUNCTION(BlueprintPure)
    static TArray<EStreamlineDeepDVCMode> GetSupportedDeepDVCModes();
    
    UFUNCTION(BlueprintPure)
    static EStreamlineDeepDVCMode GetDefaultDeepDVCMode();
    
    UFUNCTION(BlueprintPure)
    static float GetDeepDVCSaturationBoost();
    
    UFUNCTION(BlueprintPure)
    static EStreamlineDeepDVCMode GetDeepDVCMode();
    
    UFUNCTION(BlueprintPure)
    static float GetDeepDVCIntensity();
    
};

