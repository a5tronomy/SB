#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBCameraMoveData.generated.h"

class ASBCharacter;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FSBCameraMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGuid ID;
    
    UPROPERTY(Transient)
    float CurrentTime;
    
    UPROPERTY(Transient)
    float FadeInDuration;
    
    UPROPERTY(Transient)
    float TotalDuration;
    
    UPROPERTY(Transient)
    float FadeOutDuration;
    
    UPROPERTY(Transient)
    FVector TargetLocation;
    
    UPROPERTY(Transient)
    FRotator TargetRotation;
    
    UPROPERTY(Transient)
    bool bUseBasedCharacterBone;
    
    UPROPERTY(Transient)
    ASBCharacter* TargetCharacter;
    
    UPROPERTY(Transient)
    FName BoneName;
    
    UPROPERTY(Transient)
    FRotator AttachedRelativeRot;
    
    UPROPERTY(Transient)
    bool bUseBasedCharacterCustomAnim;
    
    UPROPERTY(Transient)
    FName CharacterCustomAnimName;
    
    UPROPERTY(Transient)
    UCurveFloat* FovCurve;
    
    SB_API FSBCameraMoveData();
};

