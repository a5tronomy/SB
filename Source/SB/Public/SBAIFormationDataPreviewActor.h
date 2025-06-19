#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBAIFormationDataPreviewActor.generated.h"

class UArrowComponent;
class UBillboardComponent;
class USBAIFormationData;
class USBAIFormationDataPreviewComponent;

UCLASS()
class SB_API ASBAIFormationDataPreviewActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USBAIFormationDataPreviewComponent* ActorRootComponent;
    
    UPROPERTY(Instanced)
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(Instanced)
    UBillboardComponent* SpriteComponent;
    
public:
    UPROPERTY(VisibleAnywhere)
    USBAIFormationData* AIFormationData;
    
    ASBAIFormationDataPreviewActor(const FObjectInitializer& ObjectInitializer);

};

