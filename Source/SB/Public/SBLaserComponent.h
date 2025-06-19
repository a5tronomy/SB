#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBLaserComponentBeamSignatureDelegate.h"
#include "SBLaserComponentChangeActiveLaserSignatureDelegate.h"
#include "SBLaserComponentHitTargetSignatureDelegate.h"
#include "SBLaserSegment.h"
#include "SBTableAliasName.h"
#include "SBLaserComponent.generated.h"

class UNiagaraSystem;
class USoundAttenuation;
class USoundBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBLaserComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSBLaserComponentHitTargetSignature OnHitTarget;
    
    UPROPERTY(BlueprintAssignable)
    FSBLaserComponentBeamSignature OnEventBeam;
    
    UPROPERTY(BlueprintAssignable)
    FSBLaserComponentChangeActiveLaserSignature OnEventChangeActiveLaser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName OverrideUniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ZoneEventActorTriggerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxActiveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverrideSignificanceManagerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TickSkipFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DisableTickByLastRenderTimeOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CheckDistanceToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHitToCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPlayerCharacterOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockingLaserHitCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bZoneEventActorDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIgnoreNoDamageState;
    
    UPROPERTY(EditAnywhere)
    USoundBase* HitSound;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* HitSoundAttenuation;
    
    UPROPERTY(EditAnywhere)
    USoundBase* LaserSound;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* LaserSoundAttenuation;
    
    UPROPERTY(EditAnywhere)
    USoundBase* OnSound;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* OnSoundAttenuation;
    
    UPROPERTY(EditAnywhere)
    USoundBase* OffSound;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* OffSoundAttenuation;
    
private:
    UPROPERTY(Transient)
    bool bRegisterdTick;
    
    UPROPERTY(EditAnywhere)
    float MaxLaserLength;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBounces;
    
    UPROPERTY(EditAnywhere)
    float HitInterval;
    
    UPROPERTY(EditAnywhere)
    bool bActiveOnceHit;
    
    UPROPERTY(EditAnywhere)
    bool bActiveLaser;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* BeamNiagaraSystem;
    
    UPROPERTY(EditAnywhere)
    FSBTableAliasName HitEffectAlias;
    
    UPROPERTY(EditAnywhere)
    FSBTableAliasName ZoneEventAliasWhenHit;
    
    UPROPERTY(EditAnywhere)
    bool bUseStoryMode;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* StoryMode_BeamNiagaraSystem;
    
    UPROPERTY(EditAnywhere)
    FSBTableAliasName StoryMode_HitEffectAlias;
    
    UPROPERTY(EditAnywhere)
    FSBTableAliasName StoryMode_ZoneEventAliasWhenHit;
    
    UPROPERTY(Transient)
    int32 CurrentTickSkipFrame;
    
    UPROPERTY(Transient)
    bool bLastFrameSkip;
    
    UPROPERTY(Transient)
    int32 AsyncTraceIndex;
    
    UPROPERTY(Transient)
    bool bStoryMode;
    
    UPROPERTY()
    TArray<FSBLaserSegment> LaserSegmentArray;
    
public:
    USBLaserComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsActiveLaser();
    
};

