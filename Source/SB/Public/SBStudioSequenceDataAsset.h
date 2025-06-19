#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBStudioSequenceResourceData.h"
#include "SBStudioSequenceDataAsset.generated.h"

UCLASS(BlueprintType)
class SB_API USBStudioSequenceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FSBStudioSequenceResourceData> SequenceResourceMap;
    
    USBStudioSequenceDataAsset();

};

