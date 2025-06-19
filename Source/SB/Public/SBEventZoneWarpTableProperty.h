#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBTablePropertyBase.h"
#include "SBEventZoneWarpTableProperty.generated.h"

USTRUCT()
struct FSBEventZoneWarpTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName TargetWorld;
    
    UPROPERTY(EditAnywhere)
    FName TargetZoneCamp;
    
    UPROPERTY(EditAnywhere)
    FName TargetSpawnPoint;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator TargetRotation;
    
    UPROPERTY(EditAnywhere)
    bool bUseRecoveryItems;
    
    UPROPERTY(EditAnywhere)
    float WarpDelayTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseCampCustomTargetPoint;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventZoneWarpTableProperty();
};

