#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ControlledForceObjectInfo.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FControlledForceObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> ControlledObject;
    
    UPROPERTY(Transient)
    FName CenterBoneName;
    
    UPROPERTY(Transient)
    FVector RelativeDelta;
    
    UPROPERTY(Transient)
    float ForcePerSec;
    
    UPROPERTY(Transient)
    float ForceScale;
    
    UPROPERTY(Transient)
    float ForceActiveRadian;
    
    UPROPERTY(Transient)
    float RemainBlockForce;
    
    UPROPERTY(Transient)
    float BlockForceDuration;
    
    SB_API FControlledForceObjectInfo();
};

