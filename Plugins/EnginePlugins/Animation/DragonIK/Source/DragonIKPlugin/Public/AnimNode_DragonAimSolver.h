#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "Curves/CurveFloat.h"
#include "AnimNode_DragonControlBase.h"
#include "DragonData_ArmsData.h"
#include "DragonData_MultiInput.h"
#include "EInterpoLocation_Type_Plugin.h"
#include "AnimNode_DragonAimSolver.generated.h"

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonAimSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference EndSplineBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference StartSplineBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_MultiInput dragon_input_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDragonData_ArmsData> Aiming_Hand_Limbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Lookat_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Lookat_Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Limbs_Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Downward_Dip_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Side_Move_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Side_Down_Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Up_Rot_Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Verticle_Range_Angles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Horizontal_Range_Angles;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Look_Bending_Curve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Look_Multiplier_Curve;
    
    UPROPERTY(EditAnywhere)
    bool Lock_Legs;
    
    UPROPERTY(EditAnywhere)
    bool ignore_elbow_modification;
    
    UPROPERTY(EditAnywhere)
    bool ignore_separate_hand_solving;
    
    UPROPERTY(EditAnywhere)
    bool Use_Natural_Method;
    
    UPROPERTY(EditAnywhere)
    bool Head_Use_Separate_Clamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool automatic_leg_make;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_solver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterpoLocation_Type_Plugin loc_interp_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Interpolation_Speed;
    
    UPROPERTY(EditAnywhere)
    FVector LookAt_Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TargetOffset;
    
    UPROPERTY(EditAnywhere)
    FTransform Debug_LookAtLocation;
    
    FAnimNode_DragonAimSolver();
};

