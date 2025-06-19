#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowLockOnTargetKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowLockOnTargetKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 LockOnTargetIndex;
    
    USBShowLockOnTargetKey();

};

