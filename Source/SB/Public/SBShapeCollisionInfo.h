#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SBShapeCollisionInfo.generated.h"

class UShapeComponent;

USTRUCT(BlueprintType)
struct FSBShapeCollisionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UShapeComponent> ShapeComponent;
    
    UPROPERTY(Transient)
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnableType;
    
    UPROPERTY(Transient)
    FCollisionResponseContainer CollisionResponseContainer;
    
    SB_API FSBShapeCollisionInfo();
};

