#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNodeBase.h"
#include "Engine/EngineTypes.h"
#include "AnimNode_DragonControlBase.h"
#include "DragonData_MultiInput.h"
#include "EIKTrace_Type_Plugin.h"
#include "EIK_Type_Plugin.h"
#include "EInterpoLocation_Type_Plugin.h"
#include "EInterpoRotation_Type_Plugin.h"
#include "AnimNode_DragonFeetSolver.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonFeetSolver : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_MultiInput dragon_input_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIK_Type_Plugin ik_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIKTrace_Type_Plugin trace_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Trace_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterpoLocation_Type_Plugin loc_interp_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInterpoRotation_Type_Plugin rot_interp_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotInterp_DifferenceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator JointLimitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator UpperLimitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> KneeJointTargetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool automatic_leg_make;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_OptionalRef_Feet_As_Ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_solver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentSpacePoseLink OptionalRefPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float shift_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Location_Lerp_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float feet_rotation_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Trace_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Anti_Trace_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float line_trace_upper_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float line_trace_down_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Anti_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ignore_Lerping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ignore_Location_Lerping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Should_Rotate_Feet;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* OwnerBaseComponent;
    
    UPROPERTY(Transient)
    FVector OwnerBaseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool show_trace_in_game;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enable_Roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector character_direction_vector_CS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Foot_01_Height_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Foot_02_Height_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Foot_03_Height_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Foot_04_Height_Offset;
    
    FAnimNode_DragonFeetSolver();
};

