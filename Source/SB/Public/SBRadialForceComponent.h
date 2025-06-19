#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "SBRadialForceComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBRadialForceComponent : public URadialForceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestructibleCheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeZoneEventActor;
    
    USBRadialForceComponent(const FObjectInitializer& ObjectInitializer);

};

