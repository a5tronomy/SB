#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowAnimNodeGroundCollisionKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowAnimNodeGroundCollisionKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StartBone;
    
    UPROPERTY(EditAnywhere)
    FName EndBone;
    
    USBShowAnimNodeGroundCollisionKey();

};

