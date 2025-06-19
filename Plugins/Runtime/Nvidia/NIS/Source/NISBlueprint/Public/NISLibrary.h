#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UNISMode.h"
#include "NISLibrary.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UNISLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNISLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetNISSharpness(float Sharpness);
    
    UFUNCTION(BlueprintCallable)
    static void SetNISMode(UNISMode NISMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetNISCustomScreenPercentage(float CustomScreenPercentage);
    
    UFUNCTION(BlueprintPure)
    static bool IsNISSupported();
    
    UFUNCTION(BlueprintPure)
    static bool IsNISModeSupported(UNISMode NISMode);
    
    UFUNCTION(BlueprintPure)
    static TArray<UNISMode> GetSupportedNISModes();
    
    UFUNCTION(BlueprintPure)
    static void GetNISScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);
    
    UFUNCTION(BlueprintPure)
    static float GetNISRecommendedScreenPercentage(UNISMode NISMode);
    
    UFUNCTION(BlueprintPure)
    static UNISMode GetDefaultNISMode();
    
};

