#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBMovementBoneCurveType.h"
#include "ESBMovementBoneInterpType.h"
#include "SBMovementBoneData.generated.h"

class USceneComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBMovementBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FName ModifyBoneName;
    
    UPROPERTY(Transient)
    FName TargetBoneName;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBMovementBoneInterpType> InterpType;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBMovementBoneCurveType> CurveType;
    
    UPROPERTY(Transient)
    int32 ModifyBoneIndex;
    
    UPROPERTY(Transient)
    float InterpolationTime;
    
    UPROPERTY(Transient)
    float CurrentInterpTime;
    
    UPROPERTY(Transient)
    float KeepDuration;
    
    UPROPERTY(Transient)
    FTransform StartWoldTM;
    
    UPROPERTY(Transient)
    FVector CurrentTargetLocation;
    
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* pTargetComponent;
    
    UPROPERTY(Transient)
    FName RestoreAttachBoneName;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* RestoreAttachComponent;
    
    FSBMovementBoneData();
};

