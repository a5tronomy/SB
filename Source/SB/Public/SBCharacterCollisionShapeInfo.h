#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBCharacterCollisionShapeType.h"
#include "SBCharacterCollisionShapeInfo.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBCharacterCollisionShapeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterCollisionShapeType> ShapeType;
    
    UPROPERTY(EditAnywhere)
    FString SkeletalMeshName;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    bool bMeleeAttackCollision;
    
    UPROPERTY(EditAnywhere)
    bool bRangeAttackCollision;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyJustActiveCollision;
    
    UPROPERTY(EditAnywhere)
    float WeakPointDamageAdditiveRate;
    
    UPROPERTY(EditAnywhere)
    bool bKeepShapeScale;
    
    UPROPERTY(EditAnywhere)
    FName ShowKeyTag;
    
    UPROPERTY(EditAnywhere)
    bool bRootAxisRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    bool bRootAxisRelativeRotation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    float ValidAngle;
    
    UPROPERTY(EditAnywhere)
    FRotator ValidAngleRotation;
    
    UPROPERTY(EditAnywhere)
    FVector BoxExtent;
    
    UPROPERTY(EditAnywhere)
    float CapsuleHalfHeight;
    
    UPROPERTY(EditAnywhere)
    float CapsuleRadius;
    
    FSBCharacterCollisionShapeInfo();
};

