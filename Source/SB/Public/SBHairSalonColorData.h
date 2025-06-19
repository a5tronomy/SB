#pragma once
#include "CoreMinimal.h"
#include "SBHairSalonColorData.generated.h"

USTRUCT(BlueprintType)
struct FSBHairSalonColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 VariationCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> VarAssetPathArray;
    
    SB_API FSBHairSalonColorData();
};

