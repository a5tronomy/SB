#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "ESBPhotoModeShowHiddenFlag.h"
#include "ESBShowCharacterParticleTarget.h"
#include "ESBShowParticlePhysCheckDirectionType.h"
#include "ESBShowSoundOwnerTarget.h"
#include "ESBShowVibrationTarget.h"
#include "SBNiagaraSystemWithOverrideParam.h"
#include "SBShowParticleBase.h"
#include "SBShowParticleDynamicInstanceParameter.h"
#include "SBShowParticleKey.generated.h"

class USBPMaterialParticleSet;

UCLASS(EditInlineNew)
class SB_API USBShowParticleKey : public USBShowParticleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBNiagaraSystemWithOverrideParam NiagaraSystem;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath ParticleSystemPath;
    
    UPROPERTY(EditAnywhere)
    float CustomTimeDilation;
    
    UPROPERTY(EditAnywhere)
    bool bCastShadow;
    
    UPROPERTY(EditAnywhere)
    bool bReceivesDecals;
    
    UPROPERTY(EditAnywhere)
    int32 TranslucencySortPriority;
    
    UPROPERTY(EditAnywhere)
    FName StageParticleName;
    
    UPROPERTY(EditAnywhere)
    bool bUseCharacterParticleSet;
    
    UPROPERTY(EditAnywhere)
    FName CharacterParticleSetKey;
    
    UPROPERTY(EditAnywhere)
    bool bParticleSetWithoutSound;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowCharacterParticleTarget> TargetForCharacterPaticle;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndexForCharacterPaticle;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ExtraParticleSocketName;
    
    UPROPERTY(EditAnywhere)
    bool bUsePhysParticle;
    
    UPROPERTY(EditAnywhere)
    bool bPlayPhysParticleOnHitLocation;
    
    UPROPERTY(EditAnywhere)
    bool bPlayOnlyPhysParticleOnHit;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowParticlePhysCheckDirectionType::Type> PhysCheckDirectionType;
    
    UPROPERTY(EditAnywhere)
    float PhysTraceDistacne;
    
    UPROPERTY(EditAnywhere)
    float PhysTraceStartZSubLength;
    
    UPROPERTY(EditAnywhere)
    USBPMaterialParticleSet* PhysParticleSet;
    
    UPROPERTY(EditAnywhere)
    bool bDeactiveWhenAttachHidden;
    
    UPROPERTY(EditAnywhere)
    bool AffectFootstepSurfaceVolume;
    
    UPROPERTY(EditAnywhere)
    bool PlayVibrationOnlyLocalPlayer;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowVibrationTarget> TargetForVibration;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndexForVibration;
    
    UPROPERTY(EditAnywhere)
    ESBShowSoundOwnerTarget TargetForSoundOwner;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndexForSoundOwner;
    
    UPROPERTY(EditAnywhere)
    bool bSoundOnHitActorWhenFailedToFindHitLocation;
    
    UPROPERTY(EditAnywhere)
    bool bOnGround;
    
    UPROPERTY(EditAnywhere)
    float OnGroundTraceDistacne;
    
    UPROPERTY(EditAnywhere)
    float OnGroundTraceStartZSubLength;
    
    UPROPERTY(EditAnywhere)
    float OnGroundZOffset;
    
    UPROPERTY()
    TArray<FParticleSysParam> InstanceParameters;
    
    UPROPERTY()
    bool bUseActorParameter;
    
    UPROPERTY()
    FName ActorParameterName;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBShowParticleDynamicInstanceParameter> DynamicInstanceParameters;
    
    UPROPERTY(EditAnywhere)
    uint32 FrameDelay;
    
    UPROPERTY(EditAnywhere)
    ESBPhotoModeShowHiddenFlag PhotoModeShowHiddenFlag;
    
    USBShowParticleKey();

};

