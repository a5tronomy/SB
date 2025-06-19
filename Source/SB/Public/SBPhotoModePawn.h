#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "SBPhotoModePawn.generated.h"

class UCameraComponent;
class UMaterialInstanceDynamic;

UCLASS()
class SB_API ASBPhotoModePawn : public ADefaultPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UCameraComponent* Camera;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DOF_VisualizeMID;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* ZoomBlurMID;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* ChromaticAberrationMID;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* HueMID;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* NoLightMID;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> ImageGrainMIDArray;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> ImageFilters;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> HDRImageFilters;
    
public:
    ASBPhotoModePawn(const FObjectInitializer& ObjectInitializer);

};

