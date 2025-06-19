#pragma once
#include "CoreMinimal.h"
#include "SBSaveVersion.h"
#include "SBSavePackageVersion.generated.h"

USTRUCT(BlueprintType)
struct FSBSavePackageVersion : public FSBSaveVersion {
    GENERATED_BODY()
public:
    SB_API FSBSavePackageVersion();
};

