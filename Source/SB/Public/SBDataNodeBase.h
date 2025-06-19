#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBDataNodeBase.generated.h"

class USBDataNodeBase;

UCLASS(EditInlineNew)
class SB_API USBDataNodeBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<USBDataNodeBase*> RefParentDataNodes;
    
    UPROPERTY()
    TArray<USBDataNodeBase*> ChildDataNodes;
    
    USBDataNodeBase();

};

