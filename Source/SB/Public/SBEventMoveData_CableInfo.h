#pragma once
#include "CoreMinimal.h"
#include "ESBEventMove_CableForceType.h"
#include "SBEventMoveData_CableInfo.generated.h"

class UCableComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct SB_API FSBEventMoveData_CableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCableComponent* AttachCableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPrimitiveComponent* CollisionCableStartCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPrimitiveComponent* CollisionCableEndCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CableStartLeaveSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CableEndLeaveSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBEventMove_CableForceType> AttachedEndForceDirType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttachedEndForceScale;
    
    FSBEventMoveData_CableInfo();
};

