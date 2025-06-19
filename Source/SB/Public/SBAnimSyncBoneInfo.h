#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBAnimSyncBoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBAnimSyncBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName BoneName;
    
    UPROPERTY()
    FVector PositionInCS;
    
    UPROPERTY()
    FVector VelocityInCS;
    
    SB_API FSBAnimSyncBoneInfo();
};

