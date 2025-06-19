#pragma once
#include "CoreMinimal.h"
#include "SBParticleSetInfo.h"
#include "SBParticleSetInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FSBParticleSetInfoArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBParticleSetInfo> Array;
    
    SB_API FSBParticleSetInfoArray();
};

