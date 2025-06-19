#pragma once
#include "CoreMinimal.h"
#include "SBAnimSyncSetAnimSeqInfo.h"
#include "SBAnimSyncSetAnimSeqCache.generated.h"

USTRUCT(BlueprintType)
struct FSBAnimSyncSetAnimSeqCache {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FSBAnimSyncSetAnimSeqInfo> CacheInfos;
    
    SB_API FSBAnimSyncSetAnimSeqCache();
};

