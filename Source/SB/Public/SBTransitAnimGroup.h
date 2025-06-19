#pragma once
#include "CoreMinimal.h"
#include "ESBCharacterTransitAnim.h"
#include "SBTransitAnimGroup.generated.h"

USTRUCT(BlueprintType)
struct FSBTransitAnimGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBCharacterTransitAnim>> TransitAnimArray;
    
    SB_API FSBTransitAnimGroup();
};

