#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "LowEntryLatentActionFloat.generated.h"

UCLASS(BlueprintType)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryLatentActionFloat : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Finished;
    
    UPROPERTY()
    float Result;
    
    UPROPERTY()
    int32 KeepAliveCount;
    
    ULowEntryLatentActionFloat();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float& Result_);
    
    UFUNCTION(BlueprintPure)
    bool IsDone();
    
    UFUNCTION(BlueprintPure)
    void GetResult(float& Result_);
    
    UFUNCTION(BlueprintCallable)
    void Done(float Result_);
    
};

