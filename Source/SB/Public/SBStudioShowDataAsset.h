#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBStudioShowResourceData.h"
#include "SBStudioShowDataAsset.generated.h"

UCLASS(BlueprintType)
class SB_API USBStudioShowDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FSBStudioShowResourceData> ShowResourceMap;
    
    USBStudioShowDataAsset();

};

