#pragma once
#include "CoreMinimal.h"
#include "SBSaveVersion.h"
#include "SBSaveMajorVersion.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveMajorVersion : public FSBSaveVersion {
    GENERATED_BODY()
public:
    SB_API FSBSaveMajorVersion();
};

