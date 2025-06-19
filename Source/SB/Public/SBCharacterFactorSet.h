#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBCharacterDSocketInfo.h"
#include "SBCharacterFactorSet.generated.h"

UCLASS()
class SB_API USBCharacterFactorSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBCharacterDSocketInfo> DynamicSockets;
    
    UPROPERTY()
    TMap<FName, int32> DynamicSocketNameMap;
    
    UPROPERTY(EditAnywhere)
    float MeshVertexShakingPowerScale;
    
    UPROPERTY(EditAnywhere)
    float MeshVertexShakingRadiusScale;
    
    UPROPERTY(EditAnywhere)
    float BoneShakePowerScale;
    
    UPROPERTY(EditAnywhere)
    float BoneShakeMaxRadiusScale;
    
    UPROPERTY(EditAnywhere)
    float BoneShakeMinRadiusScale;
    
    UPROPERTY(EditAnywhere)
    float BoneShakeRadiusFallOffExp;
    
    UPROPERTY(EditAnywhere)
    float UECameraAnimationScale;
    
    UPROPERTY(EditAnywhere)
    FName CharacterTypeName;
    
    UPROPERTY(EditAnywhere)
    float RagdollImpulsePowerMultiply;
    
    UPROPERTY(EditAnywhere)
    float RagdollMassScaleMultiply;
    
    UPROPERTY(EditAnywhere)
    float RagdollImpulseZValueMultiply;
    
    UPROPERTY(EditAnywhere)
    FString CharacterSubPath;
    
    USBCharacterFactorSet();

};

