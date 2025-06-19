#pragma once
#include "CoreMinimal.h"
#include "SBCharacterCollisionTraceInfo.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBCharacterCollisionTraceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName RootSocketName;
    
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    UPROPERTY(EditAnywhere)
    bool bUseConstraintBone;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> LinkSocketNameArray;
    
    FSBCharacterCollisionTraceInfo();
};

