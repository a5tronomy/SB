#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "LowEntryLatentActionInteger.generated.h"

UCLASS(BlueprintType)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryLatentActionInteger : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Finished;
    
    UPROPERTY()
    int32 Result;
    
    UPROPERTY()
    int32 KeepAliveCount;
    
    ULowEntryLatentActionInteger();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32& Result_);
    
    UFUNCTION(BlueprintPure)
    bool IsDone();
    
    UFUNCTION(BlueprintPure)
    void GetResult(int32& Result_);
    
    UFUNCTION(BlueprintCallable)
    void Done(int32 Result_);
    
};

