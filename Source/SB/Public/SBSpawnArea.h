#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBSpawnArea.generated.h"

class UBoxComponent;

UCLASS()
class SB_API ASBSpawnArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SpawnAreaName;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UBoxComponent* AreaBox;
    
    UPROPERTY(EditAnywhere)
    int32 SpawnLocationGridX;
    
    UPROPERTY(EditAnywhere)
    int32 SpawnLocationGridY;
    
    UPROPERTY(EditAnywhere)
    int32 SpawnLocationGridZ;
    
    UPROPERTY(Transient)
    TMap<int32, bool> ValidSpawnMap;
    
    ASBSpawnArea(const FObjectInitializer& ObjectInitializer);

};

