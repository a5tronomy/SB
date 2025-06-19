#pragma once
#include "CoreMinimal.h"
#include "ESBShowUIStudioSequenceType.h"
#include "SBShowKey.h"
#include "SBShowUIStudioSequenceKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowUIStudioSequenceKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowUIStudioSequenceType> ActionType;
    
    UPROPERTY(EditAnywhere)
    FName SequenceTag;
    
    UPROPERTY(EditAnywhere)
    bool bSamePlayThenStop;
    
    USBShowUIStudioSequenceKey();

};

