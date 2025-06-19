#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBCollisionGroupComponent.generated.h"

class USBCharacterCollisionData;
class UShapeComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBCollisionGroupComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USBCharacterCollisionData* pCollisionData;
    
    UPROPERTY(EditAnywhere)
    float ShapeScale;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreSingleShapeRecord;
    
private:
    UPROPERTY(Transient)
    bool bRegisterdTick;
    
    UPROPERTY(Instanced, Transient)
    TArray<UShapeComponent*> CreatedShapeComponent;
    
public:
    USBCollisionGroupComponent(const FObjectInitializer& ObjectInitializer);

};

