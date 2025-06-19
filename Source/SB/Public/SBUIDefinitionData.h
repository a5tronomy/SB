#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBUILogicType.h"
#include "SBUIDefinitionData.generated.h"

class UObject;

UCLASS()
class SB_API USBUIDefinitionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 Version;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UObject> WidgetPath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUILogicType> LogicType;
    
    USBUIDefinitionData();

};

