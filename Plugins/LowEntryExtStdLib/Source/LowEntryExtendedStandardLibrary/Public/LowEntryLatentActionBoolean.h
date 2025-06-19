#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "LowEntryLatentActionBoolean.generated.h"

UCLASS(BlueprintType)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryLatentActionBoolean : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Finished;
    
    UPROPERTY()
    bool Result;
    
    UPROPERTY()
    int32 KeepAliveCount;
    
    ULowEntryLatentActionBoolean();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool& Result_);
    
    UFUNCTION(BlueprintPure)
    bool IsDone();
    
    UFUNCTION(BlueprintPure)
    void GetResult(bool& Result_);
    
    UFUNCTION(BlueprintCallable)
    void Done(bool Result_);
    
};

