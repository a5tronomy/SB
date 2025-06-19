#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBInteractionBreakPoint.generated.h"

class USBInteractionNode_Base;

UCLASS()
class SB_API USBInteractionBreakPoint : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint8 bEnabled: 1;
    
    UPROPERTY()
    USBInteractionNode_Base* Node;
    
public:
    USBInteractionBreakPoint();

};

