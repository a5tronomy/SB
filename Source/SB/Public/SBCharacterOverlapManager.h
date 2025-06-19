#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SBCharacterOverlapManager.generated.h"

class UPrimitiveComponent;

UCLASS(NotPlaceable)
class ASBCharacterOverlapManager : public AActor {
    GENERATED_BODY()
public:
    ASBCharacterOverlapManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnCollisionOriginEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnCollisionOriginBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

