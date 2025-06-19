#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBObjectMaterialData.generated.h"

UCLASS()
class SB_API USBObjectMaterialData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Categorys;
    
    USBObjectMaterialData();

};

