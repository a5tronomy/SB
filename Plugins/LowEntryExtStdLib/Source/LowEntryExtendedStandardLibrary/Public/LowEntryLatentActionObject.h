#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "LowEntryLatentActionObject.generated.h"

UCLASS(BlueprintType)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryLatentActionObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Finished;
    
    UPROPERTY()
    UObject* Result;
    
    UPROPERTY()
    int32 KeepAliveCount;
    
    ULowEntryLatentActionObject();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UObject*& Result_);
    
    UFUNCTION(BlueprintPure)
    bool IsDone();
    
    UFUNCTION(BlueprintPure)
    void GetResult(UObject*& Result_);
    
    UFUNCTION(BlueprintCallable)
    void Done(UObject* Result_);
    
};

