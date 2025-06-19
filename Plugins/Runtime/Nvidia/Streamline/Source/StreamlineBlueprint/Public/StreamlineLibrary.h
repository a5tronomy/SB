#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EStreamlineFeature.h"
#include "EStreamlineFeatureRequirementsFlags.h"
#include "EStreamlineFeatureSupport.h"
#include "StreamlineFeatureRequirements.h"
#include "StreamlineLibrary.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UStreamlineLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStreamlineLibrary();

    UFUNCTION(BlueprintPure)
    static EStreamlineFeatureSupport QueryStreamlineFeatureSupport(EStreamlineFeature Feature);
    
    UFUNCTION(BlueprintPure)
    static bool IsStreamlineFeatureSupported(EStreamlineFeature Feature);
    
    UFUNCTION(BlueprintPure)
    static FStreamlineFeatureRequirements GetStreamlineFeatureInformation(EStreamlineFeature Feature);
    
    UFUNCTION(BlueprintPure)
    static void BreakStreamlineFeatureRequirements(EStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired);
    
};

