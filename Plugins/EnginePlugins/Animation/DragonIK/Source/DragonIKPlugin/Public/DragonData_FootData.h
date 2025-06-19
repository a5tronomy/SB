#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DragonData_FootData.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_FootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Feet_Bone_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Knee_Bone_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Thigh_Bone_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Feet_Rotation_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Knee_Direction_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Feet_Trace_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feet_Rotation_Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Feet_Heights;
    
    DRAGONIKPLUGIN_API FDragonData_FootData();
};

