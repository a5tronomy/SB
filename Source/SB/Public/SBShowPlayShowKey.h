#pragma once
#include "CoreMinimal.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowPlayShowKey.generated.h"

class USBShowData;

UCLASS(EditInlineNew)
class SB_API USBShowPlayShowKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USBShowData* ShowData;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    bool bAbsoluteResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString ShowResourcePath;
    
    UPROPERTY(EditAnywhere)
    FString ShowResourcePathWhenFailedRelativeShow;
    
    USBShowPlayShowKey();

};

