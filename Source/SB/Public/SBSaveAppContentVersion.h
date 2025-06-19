#pragma once
#include "CoreMinimal.h"
#include "SBSaveVersion.h"
#include "SBSaveAppContentVersion.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveAppContentVersion : public FSBSaveVersion {
    GENERATED_BODY()
public:
    SB_API FSBSaveAppContentVersion();
};

