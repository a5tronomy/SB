#pragma once
#include "CoreMinimal.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowNotifyEventKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowNotifyEventKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StartEventTagName;
    
    UPROPERTY(EditAnywhere)
    FName StartEventCustomNameValue;
    
    UPROPERTY(EditAnywhere)
    FName EndEventTagName;
    
    UPROPERTY(EditAnywhere)
    FName EndEventCustomNameValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    USBShowNotifyEventKey();

};

