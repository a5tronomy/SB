#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "ESBEventMoveRopeType.h"
#include "ESBEventMove_CableForceType.h"
#include "SBEventMoveData_RopeSwingProperty.h"
#include "SBEventMoveData_RopeTMInfo.h"
#include "SBEventMoveData_RopeMoveInfo.generated.h"

class UCableComponent;
class UPhysicsConstraintComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct SB_API FSBEventMoveData_RopeMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPrimitiveComponent* AttachedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPhysicsConstraintComponent* PhysicsControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPhysicsConstraintComponent* SubPhysicsControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBEventMoveRopeType> RopeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RopeAttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCableComponent* RopeCableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCableComponent* SubRopeCableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPrimitiveComponent* CollisionStartCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPrimitiveComponent* CollisionEndCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartLeaveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndLeaveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBEventMove_CableForceType> AttachedEndForceDirType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttachedEndForceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DetachedEndForceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector StartCollisionExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector StartCollisionAddExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DetachUpperCableLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementUpperCableLengthPerDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve AccelerationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve DownAccelerationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve LowerCableOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SwingJumpXYSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SwingJumpZSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SwingCancelXYSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SwingCancelZSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SwingHitReflectForceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SwingStartForceTimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SwingXYForceScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve SwingAddAnimAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSBEventMoveData_RopeSwingProperty RopeSwingProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AttachSegmentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CachedRopeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseStartRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableRope;
    
    UPROPERTY(Transient)
    bool bAttached;
    
    UPROPERTY(Transient)
    float RopeLength;
    
    UPROPERTY(Transient)
    float SubCableLength;
    
    UPROPERTY(Transient)
    float CurrentRopeLength;
    
    UPROPERTY(Transient)
    FVector CacheRelativeTargetLocation;
    
    UPROPERTY(Transient)
    bool bRopeMoving;
    
    UPROPERTY(Transient)
    float CurrentAccelTime;
    
    UPROPERTY(Transient)
    float InterpAcceleration;
    
    UPROPERTY(Transient)
    float StopedAcceleration;
    
    UPROPERTY(Transient)
    float InputBlockTime;
    
    UPROPERTY(Transient)
    float TransitAnimBlockTime;
    
    UPROPERTY(Transient)
    bool bDoStartTransit;
    
    UPROPERTY(Transient)
    FVector MovementDirection;
    
    UPROPERTY(Transient)
    bool bRopeSwingKeepStarting;
    
    UPROPERTY(Transient)
    FVector PreAttachTargetLocation;
    
    UPROPERTY(Transient)
    FVector RopeLastVelocity;
    
    UPROPERTY(Transient)
    FVector RopeLastInputVec;
    
    UPROPERTY(Transient)
    FVector RopeLastTargetDirection;
    
    UPROPERTY(Transient)
    FVector RopePreLinearVelocity;
    
    UPROPERTY(Transient)
    FVector RopeDestWorldLocation;
    
    UPROPERTY(Transient)
    float RopeSwingStartForceKeepTime;
    
    UPROPERTY(Transient)
    bool bRopeTrunStart;
    
    UPROPERTY(Transient)
    bool bRopeTrunSwing;
    
    UPROPERTY(Transient)
    FVector RopeTrunLocation;
    
    UPROPERTY(Transient)
    FVector RopeTurnDirection;
    
    UPROPERTY(Transient)
    TArray<FSBEventMoveData_RopeTMInfo> PendulumTMLog;
    
    UPROPERTY(Transient)
    float CurrentAddAnimAlphaValue;
    
    UPROPERTY(Transient)
    int32 StartLeaveCableSegmentIndex;
    
    UPROPERTY(Transient)
    int32 EndLeaveCableSegmentIndex;
    
    FSBEventMoveData_RopeMoveInfo();
};

