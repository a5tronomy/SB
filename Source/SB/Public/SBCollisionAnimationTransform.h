#pragma once
#include "CoreMinimal.h"
#include "SBCollisionSocketTransform.h"
#include "SBCollisionAnimationTransform.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBCollisionAnimationTransform {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float FrameRate;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FSBCollisionSocketTransform> SocketTransformMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FSBCollisionSocketTransform> SocketTransformWithConstraintMap;
    
    UPROPERTY(EditAnywhere)
    float HitStartAnimationPosition;
    
    UPROPERTY(EditAnywhere)
    float HitEndAnimationPosition;
    
    FSBCollisionAnimationTransform();
};

