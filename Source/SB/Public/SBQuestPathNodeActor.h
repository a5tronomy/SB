#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBQuestPathNodeActor.generated.h"

class ASBQuestPathNodeActor;
class USceneComponent;

UCLASS()
class SB_API ASBQuestPathNodeActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bActivated;
    
public:
    UPROPERTY(EditAnywhere)
    bool ShouldTouchedPrevNode;
    
    UPROPERTY(EditAnywhere)
    FName NodeAlias;
    
    UPROPERTY(VisibleAnywhere)
    uint32 NodeIndex;
    
    UPROPERTY(EditAnywhere)
    bool bSphere;
    
    UPROPERTY(EditAnywhere)
    FVector Extent;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ASBQuestPathNodeActor* NextNode;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ASBQuestPathNodeActor* PrevNode;
    
    UPROPERTY(EditAnywhere, Instanced)
    USceneComponent* TargetPoint;
    
    UPROPERTY(Instanced)
    USceneComponent* ActorRootComponent;
    
    ASBQuestPathNodeActor(const FObjectInitializer& ObjectInitializer);

};

