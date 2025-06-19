#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBCommonCreditDataObject.generated.h"

UCLASS()
class SB_API USBCommonCreditDataObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    uint32 TableId;
    
    UPROPERTY(Transient)
    int32 VoiceIndex;
    
    USBCommonCreditDataObject();

};

