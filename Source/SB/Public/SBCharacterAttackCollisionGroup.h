#pragma once
#include "CoreMinimal.h"
#include "SBCharacterCollisionTraceInfo.h"
#include "SBCharacterAttackCollisionGroup.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBCharacterAttackCollisionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName GroupName;
    
    UPROPERTY(EditAnywhere)
    bool bDefaultActive;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ShapeNameArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBCharacterCollisionTraceInfo> TraceArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CollisionComponentNameArray;
    
    FSBCharacterAttackCollisionGroup();
};

