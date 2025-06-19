#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowWorldMatineeKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowWorldMatineeKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PlayMatineeActorTagName;
    
    USBShowWorldMatineeKey();

};

