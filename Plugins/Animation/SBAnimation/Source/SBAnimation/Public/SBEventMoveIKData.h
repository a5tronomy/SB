#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "ESBAnimIKTraceDirection.h"
#include "ESBCollisionShapeType.h"
#include "SBEventMoveIKData.generated.h"

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBEventMoveIKData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForwardTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BackTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TraceExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AdditiveExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBAnimIKTraceDirection> TraceDirectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> AddCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBCollisionShapeType> TraceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OffsetBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ModifyBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TraceBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector OffsetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpdateDistance;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve IKOffsetBlendCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve DetachBlendCurve;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> OverrideAdjustBoneList;
    
    UPROPERTY(EditAnywhere)
    float FreezeDuration;
    
    UPROPERTY(Transient)
    bool bApplyFreeze;
    
    UPROPERTY(Transient)
    float ApplyDuration;
    
    FSBEventMoveIKData();
};

