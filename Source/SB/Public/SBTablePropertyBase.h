#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SBTablePropertyBase.generated.h"

USTRUCT()
struct FSBTablePropertyBase : public FTableRowBase {
    GENERATED_BODY()
public:
    SB_API FSBTablePropertyBase();
};

