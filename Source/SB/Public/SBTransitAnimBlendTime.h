#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterTransitAnim.h"
#include "SBTransitAnimBlendTime.generated.h"

USTRUCT(BlueprintType)
struct FSBTransitAnimBlendTime {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterTransitAnim> TransitID;
    
    UPROPERTY(EditAnywhere)
    float BlendInSec;
    
    UPROPERTY(EditAnywhere)
    float BlendOutSec;
    
    SB_API FSBTransitAnimBlendTime();
};

