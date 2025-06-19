#pragma once
#include "CoreMinimal.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowAnimBPSetValueKey_String.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowAnimBPSetValueKey_String : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FName Value;
    
    UPROPERTY(EditAnywhere)
    FName RecoverValue;
    
    USBShowAnimBPSetValueKey_String();

};

