#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "SBLevelLoadVolume.generated.h"

class AActor;

UCLASS()
class SB_API ASBLevelLoadVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> Levels;
    
    UPROPERTY(Transient)
    TSet<AActor*> OverlapActors;
    
private:
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
public:
    ASBLevelLoadVolume(const FObjectInitializer& ObjectInitializer);

};

