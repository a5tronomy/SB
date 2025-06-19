#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ESBEquipmentForceBody.h"
#include "ESBMeshAttachType.h"
#include "ESBSkelMeshSlot.h"
#include "SBMeshClipingInfo.h"
#include "SBMeshInfo.generated.h"

class UFXSystemComponent;
class UMaterialInterface;
class UPhysicsAsset;
class USBSkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FSBMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FName AttachSocketName;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBMeshAttachType> AttachType;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBSkelMeshSlot> MeshSlot;
    
    UPROPERTY(Transient)
    FVector PositionOffset;
    
    UPROPERTY(Transient)
    FRotator RotationOffset;
    
    UPROPERTY(Instanced, Transient)
    USBSkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(Transient)
    FTransform InitRelativeTransform;
    
    UPROPERTY(Transient)
    FCollisionResponseContainer CollisionResponseContainer;
    
    UPROPERTY(Transient)
    TEnumAsByte<ECollisionChannel> CollisionObjectType;
    
    UPROPERTY(Transient)
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    
    UPROPERTY(Transient)
    bool bBodyNoCollisionIfNotKeep;
    
    UPROPERTY(Transient)
    int32 CustomDepthStencilValue;
    
    UPROPERTY(Transient)
    bool bDetachWhenReleaseActor;
    
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> OriginMaterials;
    
    UPROPERTY(Instanced, Transient)
    TArray<UFXSystemComponent*> OriginFXSystemArray;
    
    UPROPERTY(Transient)
    UPhysicsAsset* OverrideClothPhysicsAsset;
    
    UPROPERTY(Transient)
    bool bOverrideMinLod;
    
    UPROPERTY(Transient)
    int32 ForcedLodModel;
    
    UPROPERTY(Transient)
    int32 MinLodModel;
    
    UPROPERTY(Transient)
    int32 CurrentForceLodIndex;
    
    UPROPERTY(Transient)
    float TempPhysicsBlendWeight;
    
    UPROPERTY(Transient)
    float TempClothBlendWeight;
    
    UPROPERTY(Transient)
    bool bPhysicsReset;
    
    UPROPERTY(Transient)
    float PhysicsResetFadeInTime;
    
    UPROPERTY(Transient)
    float PhysicsResetFadeOutTime;
    
    UPROPERTY(Transient)
    bool bRefreshMaskFilter;
    
    UPROPERTY(Transient)
    bool bBlueprintComponent;
    
    UPROPERTY(Transient)
    FSBMeshClipingInfo BackupMeshClipingInfo[4];
    
    UPROPERTY(Transient)
    FSBMeshClipingInfo MeshClipingInfo[4];
    
    UPROPERTY(Transient)
    bool bTempHiddenInGame;
    
    UPROPERTY(Transient)
    TMap<FName, bool> bTempHiddenInGameMap;
    
    UPROPERTY(Transient)
    bool bLongHair;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBEquipmentForceBody> ForceBodyType;
    
    UPROPERTY(Transient)
    FName Tag;
    
    SB_API FSBMeshInfo();
};

