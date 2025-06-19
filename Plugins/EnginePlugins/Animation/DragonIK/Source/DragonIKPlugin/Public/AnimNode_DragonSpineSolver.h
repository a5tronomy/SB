#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNodeBase.h"
#include "BoneContainer.h"
#include "Animation/AnimNodeBase.h"
#include "Engine/EngineTypes.h"
#include "DragonData_MultiInput.h"
#include "EIKTrace_Type_Plugin.h"
#include "ERefPosePluginEnum.h"
#include "AnimNode_DragonSpineSolver.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonSpineSolver : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDragonData_MultiInput dragon_input_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Precision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinimumRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComponentSpacePoseLink ComponentPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceFixedFootLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoChangeApplyFeetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseActorCharacterDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseFowardAixsHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SlantAngleForFixFeetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChangeHitCheckInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebugDrawInGame;
    
    UPROPERTY(Transient)
    float CurrentChangeHitCheckInterpTime;
    
    UPROPERTY(Transient)
    bool bStairsMoving;
    
    UPROPERTY(Transient)
    bool bFirstAdjustHeight;
    
    UPROPERTY(Transient)
    FVector OwnerBaseLocation;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* OwnerBaseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHappenedHandleImpact;
    
    UPROPERTY(Transient)
    FVector OwnerLastInputVelocity;
    
    UPROPERTY(Transient)
    bool bBuryCylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float shift_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Trace_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Anti_Trace_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIKTrace_Type_Plugin trace_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Trace_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIKTrace_Type_Plugin Spine_Trace_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Spine_Trace_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseDynamicCheckBySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Dest_Spine_TraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Dest_Location_Lerp_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChangeLerpSpeedSlopeDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Location_Slope_Lerp_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InterpSpeedBlendTime;
    
    UPROPERTY(Transient)
    float Cached_Spine_TraceRadius;
    
    UPROPERTY(Transient)
    float Cached_Location_Lerp_Speed;
    
    UPROPERTY(Transient)
    float Max_WalkSpeed;
    
    UPROPERTY(Transient)
    float Max_RunSpeed;
    
    UPROPERTY(Transient)
    float CharacterSpeedScale;
    
    UPROPERTY(Transient)
    bool bSlantFloorBySamplePoints;
    
    UPROPERTY(Transient)
    float StartInterpSpeedValueByTime;
    
    UPROPERTY(Transient)
    float TargetInterpSpeedValueByTime;
    
    UPROPERTY(Transient)
    float CurrentInterpSpeedBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Trace_Trace_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float dip_multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Rotate_Around_Translate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Ignore_Lerping;
    
    UPROPERTY(Transient)
    float ActualAlpha;
    
    UPROPERTY(Transient)
    float PreActualAlpha;
    
    UPROPERTY(Transient)
    bool bResetEvaluate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float line_trace_downward_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float line_trace_upper_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Anti_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Slanted_Height_Up_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Slanted_Height_Down_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool reverse_fabrik;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Calculation_To_RefPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_Slanted_Height_Up_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_Slanted_Height_Down_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_Base_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pelvis_Base_Offset;
    
    UPROPERTY(EditAnywhere)
    FBoneReference ExtraPelvisBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float virtual_leg_width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Maximum_Dip_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Maximum_Dip_Height_Chest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Pelvis_Flat_Slope_Detection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Chest_Flat_Slope_Detection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float rotation_power_between;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Automatic_Fabrik_Selection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Location_Lerp_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Rotation_Lerp_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_Influence_Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pelvis_ForwardRotation_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Body_Rotation_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pelvis_Rotation_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_ForwardRotation_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_SidewardRotation_Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chest_Rotation_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Full_Extended_Spine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float max_extension_ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float min_extension_ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float extension_switch_speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool enable_solver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Fake_Chest_Rotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Use_Fake_Pelvis_Rotations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Force_Activation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool accurate_feet_placement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool use_crosshair_trace_also_for_fail_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Only_Root_Solve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Smooth_Factor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Max_Smooth_Factor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChangeSmoothTriggerHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinSmoothBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSmoothBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SmoothBlendKeepDuration;
    
    UPROPERTY(Transient)
    float TagetSteppedAlphaVlaue;
    
    UPROPERTY(Transient)
    float PreTagetSteppedAlphaVlaue;
    
    UPROPERTY(Transient)
    float CurrentSmoothBlendTime;
    
    UPROPERTY(Transient)
    float InterpSmoothAlpha;
    
    UPROPERTY(Transient)
    float InterpStartSmoothAlpha;
    
    UPROPERTY(Transient)
    float CurrentSmoothBlendKeepDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Overall_PostSolved_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector character_direction_vector_CS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Forward_Direction_Vector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool flip_forward_and_right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERefPosePluginEnum SolverReferencePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Spine_Feet_Connect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Snake_Joint_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool is_snake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Maximum_Feet_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Minimum_Feet_Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DisplayLineTrace;
    
    FAnimNode_DragonSpineSolver();
};

