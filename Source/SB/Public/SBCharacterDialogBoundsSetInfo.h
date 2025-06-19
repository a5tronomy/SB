#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBCharacterDialogBoundsSetInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterDialogBoundsSetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector BoneBoundsOffset;
    
    UPROPERTY(EditAnywhere)
    float BoneBoundRadius;
    
    SB_API FSBCharacterDialogBoundsSetInfo();
};

