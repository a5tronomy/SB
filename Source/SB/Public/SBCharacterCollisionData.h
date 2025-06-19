#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBCharacterAttackCollisionGroup.h"
#include "SBCharacterAttackedCollisionGroup.h"
#include "SBCharacterCollisionShapeInfo.h"
#include "SBCharacterPhysicalMaterialInfo.h"
#include "SBCollisionAnimationTransform.h"
#include "SBCharacterCollisionData.generated.h"

UCLASS()
class SB_API USBCharacterCollisionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> ControlToBlockingCollisionNameArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBCharacterCollisionShapeInfo> CollisionShapeInfoArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBCharacterAttackedCollisionGroup> AttackedCollisionGroupArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBCharacterAttackCollisionGroup> AttackCollisionGroupArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBCharacterPhysicalMaterialInfo> PhysicalMaterialInfoArray;
    
    UPROPERTY()
    TMap<FName, FSBCollisionAnimationTransform> CollisionAnimationTransformMap;
    
    USBCharacterCollisionData();

};

