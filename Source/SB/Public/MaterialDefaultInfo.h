#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialLayersFunctions.h"
#include "ESBMaterialParamType.h"
#include "MaterialDefaultInfo.generated.h"

USTRUCT(BlueprintType)
struct FMaterialDefaultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 MaterialSlotIndex;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBMaterialParamType> ParamType;
    
    UPROPERTY(Transient)
    FMaterialParameterInfo ParamInfo;
    
    UPROPERTY(Transient)
    FLinearColor Value;
    
    SB_API FMaterialDefaultInfo();
};

