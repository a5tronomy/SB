#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "ACLVisualFidelity.h"
#include "ACLVisualFidelityChangeResult.h"
#include "AnimationCompressionLibraryDatabase.generated.h"

class UAnimationCompressionLibraryDatabase;

UCLASS(BlueprintType, MinimalAPI)
class UAnimationCompressionLibraryDatabase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<uint8> CookedCompressedBytes;
    
    UPROPERTY()
    TArray<uint64> CookedAnimSequenceMappings;
    
    UPROPERTY(EditAnywhere)
    uint32 MaxStreamRequestSizeKB;
    
public:
    UAnimationCompressionLibraryDatabase();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetVisualFidelity(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UAnimationCompressionLibraryDatabase* DatabaseAsset, ACLVisualFidelityChangeResult& Result, ACLVisualFidelity VisualFidelity);
    
    UFUNCTION(BlueprintCallable)
    static ACLVisualFidelity GetVisualFidelity(UAnimationCompressionLibraryDatabase* DatabaseAsset);
    
};

