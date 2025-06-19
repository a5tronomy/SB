#pragma once
#include "CoreMinimal.h"
#include "SBEffectDataList.generated.h"

USTRUCT(BlueprintType)
struct FSBEffectDataList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectList;
    
    SB_API FSBEffectDataList();
};

