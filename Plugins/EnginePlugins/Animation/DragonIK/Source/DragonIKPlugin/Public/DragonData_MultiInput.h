#pragma once
#include "CoreMinimal.h"
#include "DragonData_FootData.h"
#include "DragonData_MultiInput.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_MultiInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Start_Spine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Pelvis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDragonData_FootData> FeetBones;
    
    DRAGONIKPLUGIN_API FDragonData_MultiInput();
};

