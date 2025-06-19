#pragma once
#include "CoreMinimal.h"
#include "SBSaveVersion.generated.h"

USTRUCT()
struct FSBSaveVersion {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 Value;
    
public:
    SB_API FSBSaveVersion();
};

