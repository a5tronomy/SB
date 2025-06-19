#pragma once
#include "CoreMinimal.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowActorEventNotificationKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowActorEventNotificationKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    USBShowActorEventNotificationKey();

};

