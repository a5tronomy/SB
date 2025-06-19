#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SBDeactiveMovingComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBDeactiveMovingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeactiveBlockWallAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeactiveCliffAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDeactiveSlideSlip;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> CollisionPrimitiveComponent;
    
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
    USBDeactiveMovingComponent(const FObjectInitializer& ObjectInitializer);

};

