#pragma once
#include "CoreMinimal.h"
#include "SBCharacterSplineExtraData.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterSplineExtraData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BlendDuration;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideBlendDuration;
    
    UPROPERTY(EditAnywhere)
    float OverrideProbeSize;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideProbeSize;
    
    SB_API FSBCharacterSplineExtraData();
};

