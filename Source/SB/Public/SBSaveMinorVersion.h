#pragma once
#include "CoreMinimal.h"
#include "SBSaveVersion.h"
#include "SBSaveMinorVersion.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveMinorVersion : public FSBSaveVersion {
    GENERATED_BODY()
public:
    SB_API FSBSaveMinorVersion();
};

