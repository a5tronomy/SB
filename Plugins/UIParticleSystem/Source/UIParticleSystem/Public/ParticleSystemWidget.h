#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ParticleSystemWidget.generated.h"

class AActor;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS()
class UIPARTICLESYSTEM_API UParticleSystemWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* ParticleSystemTemplate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bReactivate;
    
private:
    UPROPERTY(Instanced)
    UParticleSystemComponent* WorldParticleComponent;
    
    UPROPERTY()
    AActor* WorldParticleActor;
    
public:
    UParticleSystemWidget();

    UFUNCTION(BlueprintCallable)
    void SetReactivate(bool bActivateAndReset);
    
    UFUNCTION(BlueprintCallable)
    void ActivateParticles(bool bActive, bool bReset);
    
};

