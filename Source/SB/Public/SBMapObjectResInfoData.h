#pragma once
#include "CoreMinimal.h"
#include "ESBOObjectDensityType.h"
#include "SBMapObjectResInfoData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSBMapObjectResInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBOObjectDensityType> DensityType;
    
    UPROPERTY(EditAnywhere)
    FName ObjectName;
    
    UPROPERTY(EditAnywhere)
    UObject* RefMeshObject;
    
    UPROPERTY(EditAnywhere)
    float FrequencyValue;
    
    SB_API FSBMapObjectResInfoData();
};

