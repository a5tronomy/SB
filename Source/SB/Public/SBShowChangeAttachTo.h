#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowChangeAttachTo.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowChangeAttachTo : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventTagName;
    
    UPROPERTY(EditAnywhere)
    FName EventCustomNameValue;
    
    UPROPERTY(EditAnywhere)
    bool bForceApplyKeyWhenStoped;
    
    USBShowChangeAttachTo();

};

