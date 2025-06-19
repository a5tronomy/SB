#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowFlyKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowFlyKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bFlyOnOff;
    
    USBShowFlyKey();

};

