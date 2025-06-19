#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ESBShowActorTarget.h"
#include "SBShowKey.h"
#include "SBShowRadialForceKey.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SB_API USBShowRadialForceKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseRegisterActor;
    
    UPROPERTY(EditAnywhere)
    FName RegisterKey;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> LocationBaseTarget;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ERadialImpulseFalloff> Falloff;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesToAffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFireImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bImpulseVelChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIgnoreOwningActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestructibleDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DestructibleCheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeZoneEventActor;
    
    USBShowRadialForceKey();

};

