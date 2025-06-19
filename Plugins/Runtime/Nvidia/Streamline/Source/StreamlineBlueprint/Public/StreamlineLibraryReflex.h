#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EStreamlineFeatureSupport.h"
#include "EStreamlineReflexMode.h"
#include "StreamlineLibraryReflex.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibraryReflex();

    UFUNCTION(BlueprintCallable)
    static void SetReflexMode(const EStreamlineReflexMode Mode);
    
    UFUNCTION(BlueprintPure)
    static EStreamlineFeatureSupport QueryReflexSupport();
    
    UFUNCTION(BlueprintPure)
    static bool IsReflexSupported();
    
    UFUNCTION(BlueprintPure)
    static bool IsReflexModeSupported(EStreamlineReflexMode ReflexMode);
    
    UFUNCTION(BlueprintPure)
    static TArray<EStreamlineReflexMode> GetSupportedReflexModes();
    
    UFUNCTION(BlueprintPure)
    static float GetRenderLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static EStreamlineReflexMode GetReflexMode();
    
    UFUNCTION(BlueprintPure)
    static float GetGameToRenderLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static float GetGameLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static EStreamlineReflexMode GetDefaultReflexMode();
    
};

