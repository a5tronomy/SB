#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SBOptimizationActor.generated.h"

class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS()
class SB_API ASBOptimizationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bKeepTransformWhenDisableTick;
    
    UPROPERTY(EditAnywhere)
    float DisableOptimizationDistance;
    
    UPROPERTY(EditAnywhere)
    bool bDisableOptimization;
    
    UPROPERTY(EditAnywhere)
    float UnderWaterLinearDamping;
    
    UPROPERTY(EditAnywhere)
    float UnderWaterAngularDamping;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bUseSequencer: 1;
    
    UPROPERTY(Instanced, Transient)
    TArray<UPrimitiveComponent*> PrimitiveComponents;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> SimulatingPhysicsPrimitiveComponents;
    
    UPROPERTY(Transient)
    bool bVisible;
    
    UPROPERTY(Transient)
    FTransform KeepTransform;
    
    UPROPERTY(EditAnywhere)
    float ViewDistance;
    
    UPROPERTY(Transient)
    int32 OverlapPhysicsActorCount;
    
    UPROPERTY(EditAnywhere)
    int32 CheckIgnorePawnHitCount;
    
    UPROPERTY(EditAnywhere)
    float IgnorePawnKeepTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bForceDisableFromLevelSequence;
    
    UPROPERTY(Transient)
    bool bCurrentForceDisableFromLevelSequence;
    
    UPROPERTY(Transient)
    bool bHideByEventContents;
    
public:
    UPROPERTY(EditAnywhere)
    bool bIsIntervalUpdate;
    
    ASBOptimizationActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWaterHeight(const TArray<FName>& ActiveSockets, UStaticMeshComponent* pFloatingMesh, float WaterHeightOffset, float AverageStrength, float MaxStrength);
    
public:
    UFUNCTION()
    void OnCollisionPhysicsOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnCollisionPhysicsOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnCollisionOriginHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_Wake();
    
    UFUNCTION(BlueprintImplementableEvent)
    void NotifyBP_Sleep();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void EventUnderWater(FVector inHitLocation);
    
};

