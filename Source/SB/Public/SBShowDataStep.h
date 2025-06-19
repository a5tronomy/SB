#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBShowDataStep.generated.h"

UCLASS(DefaultToInstanced, EditInlineNew)
class SB_API USBShowDataStep : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartTime;
    
    USBShowDataStep();

};

