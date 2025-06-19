#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EStreamlineDLSSGMode.h"
#include "EStreamlineFeatureSupport.h"
#include "StreamlineLibraryDLSSG.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibraryDLSSG();

    UFUNCTION(BlueprintCallable)
    static void SetDLSSGMode(EStreamlineDLSSGMode DLSSGMode);
    
    UFUNCTION(BlueprintPure)
    static EStreamlineFeatureSupport QueryDLSSGSupport();
    
    UFUNCTION(BlueprintPure)
    static bool IsDLSSGSupported();
    
    UFUNCTION(BlueprintPure)
    static bool IsDLSSGModeSupported(EStreamlineDLSSGMode DLSSGMode);
    
    UFUNCTION(BlueprintPure)
    static TArray<EStreamlineDLSSGMode> GetSupportedDLSSGModes();
    
    UFUNCTION(BlueprintPure)
    static EStreamlineDLSSGMode GetDLSSGMode();
    
    UFUNCTION(BlueprintPure)
    static void GetDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented);
    
    UFUNCTION(BlueprintPure)
    static EStreamlineDLSSGMode GetDefaultDLSSGMode();
    
};

