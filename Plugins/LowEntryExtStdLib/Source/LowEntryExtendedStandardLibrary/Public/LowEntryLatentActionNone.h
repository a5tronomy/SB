#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "LowEntryLatentActionNone.generated.h"

UCLASS(BlueprintType)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryLatentActionNone : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Finished;
    
    UPROPERTY()
    int32 KeepAliveCount;
    
    ULowEntryLatentActionNone();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintPure)
    bool IsDone();
    
    UFUNCTION(BlueprintCallable)
    void Done();
    
};

