#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBCharacterBindingInfo.generated.h"

class UBlendSpaceBase;
class UPhysicsAsset;

USTRUCT(BlueprintType)
struct FSBCharacterBindingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CharacterBindingSocket;
    
    UPROPERTY(EditAnywhere)
    FVector CharacterBindingRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    UBlendSpaceBase* CharacterBindingIdleBlendSpace;
    
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* CharacterBindingPhysicsAsset;
    
    UPROPERTY(Transient)
    bool bBinding;
    
    SB_API FSBCharacterBindingInfo();
};

