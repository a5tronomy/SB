#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Curves/CurveFloat.h"
#include "ESBEquipmentType.h"
#include "ESBPhotoModeShowHiddenFlag.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowCreateStaticMeshKey.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(EditInlineNew)
class SB_API USBShowCreateStaticMeshKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> pMaterialArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FSoftObjectPath> MaterialInstanceArray;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> LocationBaseTarget;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetEquipment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentType> TargetEquipment;
    
    UPROPERTY(EditAnywhere)
    bool bAttach;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(EditAnywhere)
    FCollisionProfileName CollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    bool bInGenerateOverlapEvents;
    
    UPROPERTY(EditAnywhere)
    bool bHiddenInGame;
    
    UPROPERTY(EditAnywhere)
    bool bRenderHiddenDepthInSceneCapture;
    
    UPROPERTY(EditAnywhere)
    bool bReceivesDecals;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCastShadow;
    
    UPROPERTY(EditAnywhere)
    bool bCastShadow;
    
    UPROPERTY(EditAnywhere)
    FName ActorTag;
    
    UPROPERTY(EditAnywhere)
    FName ComponentTag;
    
    UPROPERTY(EditAnywhere)
    bool bRegisterActor;
    
    UPROPERTY(EditAnywhere)
    FName RegisterKey;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRelativeLocationCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeLocationXCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeLocationYCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeLocationZCurve;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRelativeRotationCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeRotationXCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeRotationYCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RelativeRotationZCurve;
    
    UPROPERTY(EditAnywhere)
    bool bEnableScaleCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScaleCurve;
    
    UPROPERTY(EditAnywhere)
    ESBPhotoModeShowHiddenFlag PhotoModeShowHiddenFlag;
    
    USBShowCreateStaticMeshKey();

};

