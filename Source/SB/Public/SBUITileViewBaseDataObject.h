#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBUITileViewBaseDataObject.generated.h"

UCLASS()
class SB_API USBUITileViewBaseDataObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsEnableSelect;
    
    USBUITileViewBaseDataObject();

};

