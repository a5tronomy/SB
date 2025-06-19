#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBCharacterSelfiePoseData.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterSelfiePoseData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath BlendSpace;
    
    SB_API FSBCharacterSelfiePoseData();
};

