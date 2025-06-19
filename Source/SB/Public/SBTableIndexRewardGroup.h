#pragma once
#include "CoreMinimal.h"
#include "SBTableIndex.h"
#include "SBTableIndexRewardGroup.generated.h"

USTRUCT(BlueprintType)
struct FSBTableIndexRewardGroup : public FSBTableIndex {
    GENERATED_BODY()
public:
    SB_API FSBTableIndexRewardGroup();
};

