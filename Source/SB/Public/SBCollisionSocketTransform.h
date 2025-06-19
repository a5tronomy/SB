#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBCollisionSocketTransform.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBCollisionSocketTransform {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FTransform> TransformArray;
    
    FSBCollisionSocketTransform();
};

