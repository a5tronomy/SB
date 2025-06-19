#include "SBEquipmentActor.h"
#include "Components/SkeletalMeshComponent.h"

ASBEquipmentActor::ASBEquipmentActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->SkeletalMeshComponent = (USkeletalMeshComponent*)RootComponent;
}


