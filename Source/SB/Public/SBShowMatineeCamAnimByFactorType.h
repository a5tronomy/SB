#pragma once
#include "CoreMinimal.h"
#include "SBShowMatineeCamAnimByFactorType.generated.h"

class UCameraAnim;

USTRUCT(BlueprintType)
struct FSBShowMatineeCamAnimByFactorType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CharacterFactorTypeName;
    
    UPROPERTY(EditAnywhere)
    UCameraAnim* MatineeCameraAnim;
    
    SB_API FSBShowMatineeCamAnimByFactorType();
};

