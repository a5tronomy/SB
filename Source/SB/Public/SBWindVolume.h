#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "ESBSkelMeshSlot.h"
#include "SBWindVolume.generated.h"

class UCurveFloat;

UCLASS()
class SB_API ASBWindVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FVector LevelObjOrigin;
    
    UPROPERTY(Transient)
    FVector LevelObjExtent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bEnable;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBSkelMeshSlot>> MeshSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bPlayerOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRandomizeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAzimuthalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAzimuthalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinPolarAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPolarAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StrengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClothWindMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KawaiiPhysicsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkeletalMeshForceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    ASBWindVolume(const FObjectInitializer& ObjectInitializer);

};

