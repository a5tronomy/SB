#pragma once
#include "CoreMinimal.h"
#include "SBCollisionAnimationTransformEditInfo.generated.h"

class UAnimSequence;

USTRUCT()
struct SB_API FSBCollisionAnimationTransformEditInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* AnimSequence;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SocketNameArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SocketNameArrayWithoutConstraint;
    
    UPROPERTY()
    float HitStartAnimationPosition;
    
    UPROPERTY()
    float HitEndAnimationPosition;
    
    UPROPERTY()
    int32 FrameRate;
    
    UPROPERTY(EditAnywhere)
    FName ConstraintBoneName;
    
    UPROPERTY(EditAnywhere)
    FName ConstraintRotationBoneName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SocketNameArray_1;
    
    UPROPERTY(EditAnywhere)
    FName ConstraintTranslationBoneName_1;
    
    UPROPERTY(EditAnywhere)
    FName ConstraintRotationBoneName_1;
    
    FSBCollisionAnimationTransformEditInfo();
};

