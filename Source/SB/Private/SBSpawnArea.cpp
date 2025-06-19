#include "SBSpawnArea.h"
#include "Components/BoxComponent.h"

ASBSpawnArea::ASBSpawnArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaBox = CreateDefaultSubobject<UBoxComponent>(TEXT("AreaBox"));
    this->SpawnLocationGridX = 0;
    this->SpawnLocationGridY = 0;
    this->SpawnLocationGridZ = 0;
}


