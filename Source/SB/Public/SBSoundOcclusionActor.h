#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESBSoundOcclusionActorShapeType.h"
#include "SBSoundOcclusionActor.generated.h"

class UPrimitiveComponent;

UCLASS()
class ASBSoundOcclusionActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESBSoundOcclusionActorShapeType ShapeType;
    
    UPROPERTY(EditAnywhere)
    FVector BoxExtent;
    
    UPROPERTY(EditAnywhere)
    float SphereRadius;
    
    UPROPERTY(EditAnywhere)
    float CapsuleRadius;
    
    UPROPERTY(EditAnywhere)
    float CapsuleHalfHeight;
    
private:
    UPROPERTY(Instanced)
    UPrimitiveComponent* CollisionComponent;
    
protected:
    UPROPERTY(EditAnywhere)
    FLinearColor SelectionColor;
    
public:
    ASBSoundOcclusionActor(const FObjectInitializer& ObjectInitializer);

};

