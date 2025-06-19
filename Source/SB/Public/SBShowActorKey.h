#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBClothWindDirectionType.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowKey.h"
#include "SBShowActorKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowActorKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseActorHidden;
    
    UPROPERTY(EditAnywhere)
    bool bActorHiddenState;
    
    UPROPERTY(EditAnywhere)
    bool bSetVisibleWhenUnlockHidden;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysActorTickWhenHidden;
    
    UPROPERTY(EditAnywhere)
    bool bUseActorEnableCollision;
    
    UPROPERTY(EditAnywhere)
    bool bActorEnableCollisionState;
    
    UPROPERTY(EditAnywhere)
    bool bPhysicsBodyCollisionIgnore;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> DisableClothCollisionMeshSlot;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DisableClothCollisionNameArray;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> ClothWindMeshSlot;
    
    UPROPERTY(EditAnywhere)
    bool bCharacterTransformAxis;
    
    UPROPERTY(EditAnywhere)
    float ClothWindFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float ClothWindFadeOutTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBClothWindDirectionType> ClothWindDirectionType;
    
    UPROPERTY(EditAnywhere)
    FVector ClothWindDirection;
    
    UPROPERTY(EditAnywhere)
    float ClothWindDirectionScale;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysTickPoseAndRefreshBones;
    
    UPROPERTY(EditAnywhere)
    bool bPhysicsReset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> PhysicsResetSlot;
    
    UPROPERTY(EditAnywhere)
    float PhysicsWeightFadeInTime;
    
    UPROPERTY(EditAnywhere)
    float PhysicsWeightFadeOutTime;
    
    UPROPERTY(EditAnywhere)
    bool bClothReset;
    
    UPROPERTY(EditAnywhere)
    int32 ClothResetFrameCount;
    
    UPROPERTY(EditAnywhere)
    bool bClothResetOnlyPonytail;
    
    UPROPERTY(EditAnywhere)
    bool bClothResetOnlyBody;
    
    USBShowActorKey();

};

