#pragma once
#include "CoreMinimal.h"
#include "SBTableIndex.h"
#include "SBTableIndexUIActionRequest.generated.h"

USTRUCT(BlueprintType)
struct FSBTableIndexUIActionRequest : public FSBTableIndex {
    GENERATED_BODY()
public:
    SB_API FSBTableIndexUIActionRequest();
};

