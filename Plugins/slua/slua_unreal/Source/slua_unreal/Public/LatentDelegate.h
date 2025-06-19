#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LatentDelegate.generated.h"

UCLASS(BlueprintType)
class SLUA_UNREAL_API ULatentDelegate : public UObject {
    GENERATED_BODY()
public:
    ULatentDelegate();

    UFUNCTION(BlueprintCallable)
    void OnLatentCallback(int32 threadRef);
    
};

