#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "DragonData_ArmsData.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_ArmsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference Shoulder_Bone_Name;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Elbow_Bone_Name;
    
    UPROPERTY(EditAnywhere)
    FBoneReference Hand_Bone_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Local_Direction_Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool accurate_hand_rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float overridden_limb_clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool relative_axis;
    
    DRAGONIKPLUGIN_API FDragonData_ArmsData();
};

