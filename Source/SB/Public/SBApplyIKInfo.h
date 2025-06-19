#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "ESBCollisionShape.h"
#include "ESBIKTraceDirection.h"
#include "SBApplyIKInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBApplyIKInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnable;
    
    UPROPERTY(EditAnywhere)
    float ForwardTraceLength;
    
    UPROPERTY(EditAnywhere)
    float BackTraceLength;
    
    UPROPERTY(EditAnywhere)
    FVector TraceBoxExtent;
    
    UPROPERTY(EditAnywhere)
    FVector AdditiveExtent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBIKTraceDirection> DirectionType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> AddCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCollisionShape> ShapeType;
    
    UPROPERTY(EditAnywhere)
    float OffsetBlendTime;
    
    UPROPERTY(EditAnywhere)
    FName ModifyBoneName;
    
    UPROPERTY(EditAnywhere)
    FVector OffsetScale;
    
    UPROPERTY(EditAnywhere)
    float UpdateDistance;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve IKOffsetBlendCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve DetachBlendCurve;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> OverrideAdjustBoneList;
    
    SB_API FSBApplyIKInfo();
};

