#pragma once
#include "CoreMinimal.h"
#include "SBAnimSyncBoneInfo.h"
#include "SBAnimSyncSetAnimSeqInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBAnimSyncSetAnimSeqInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    float Time;
    
    UPROPERTY(Transient)
    TArray<FSBAnimSyncBoneInfo> BoneInfos;
    
    SB_API FSBAnimSyncSetAnimSeqInfo();
};

