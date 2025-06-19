#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBScanActor.generated.h"

class UMaterial;
class UMaterialInstanceDynamic;
class UMaterialParameterCollectionInstance;
class UPostProcessComponent;

UCLASS()
class SB_API ASBScanActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UMaterial* ScanEffectMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterial* ContrastEffectMaterial;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPostProcessComponent> ContrastPP;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UMaterialInstanceDynamic> ContrastMID;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPostProcessComponent> ScanEffectPP;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UMaterialInstanceDynamic> ScanEffectMID;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UMaterialParameterCollectionInstance> ScanEffectMaterialParamCI;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UMaterialParameterCollectionInstance> ScanEffectMaterialParamCI_NavDecal;
    
public:
    ASBScanActor(const FObjectInitializer& ObjectInitializer);

};

