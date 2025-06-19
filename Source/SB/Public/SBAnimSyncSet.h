#pragma once
#include "CoreMinimal.h"
#include "SBAnimSyncBoneInfo.h"
#include "SBAnimSyncSetAnimSeqCache.h"
#include "SBAnimSyncSet.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FSBAnimSyncSet {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FSBAnimSyncBoneInfo> BoneInfos;
    
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* BaseMeshComponent;
    
    UPROPERTY(Transient)
    TMap<FName, FSBAnimSyncSetAnimSeqCache> CacheSeqMap;
    
    SB_API FSBAnimSyncSet();
};

