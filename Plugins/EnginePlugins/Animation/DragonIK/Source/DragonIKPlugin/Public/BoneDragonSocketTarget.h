#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "SocketDragonReference.h"
#include "BoneDragonSocketTarget.generated.h"

USTRUCT()
struct DRAGONIKPLUGIN_API FBoneDragonSocketTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseSocket;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneReference;
    
    UPROPERTY(EditAnywhere)
    FSocketDragonReference SocketReference;
    
    FBoneDragonSocketTarget();
};

