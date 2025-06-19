#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowAnimBPSetValueKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowAnimBPSetValueKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Value;
    
    UPROPERTY(EditAnywhere)
    float RecoverValue;
    
    UPROPERTY(EditAnywhere)
    float RecoverWaitTime;
    
    UPROPERTY(EditAnywhere)
    float RecoverTime;
    
    USBShowAnimBPSetValueKey();

};

