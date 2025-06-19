#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "SBDataAsset.generated.h"

UCLASS()
class SB_API USBDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Guid;
    
    USBDataAsset();

};

