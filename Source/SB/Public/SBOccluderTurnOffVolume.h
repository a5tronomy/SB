#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SBOccluderTurnOffVolume.generated.h"

class AActor;
class AStaticMeshActor;
class USkeletalMeshComponent;

UCLASS()
class SB_API ASBOccluderTurnOffVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AStaticMeshActor>> StaticMeshActors;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<USkeletalMeshComponent>> SkeletalMeshComponents;
    
    ASBOccluderTurnOffVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnEndOverlapActor(AActor* Overlapped, AActor* Other);
    
    UFUNCTION()
    void OnBeginOverlapActor(AActor* Overlapped, AActor* Other);
    
};

