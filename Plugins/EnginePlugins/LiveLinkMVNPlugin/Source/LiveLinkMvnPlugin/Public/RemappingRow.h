#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RemappingRow.generated.h"

USTRUCT()
struct FRemappingRow : public FTableRowBase {
    GENERATED_BODY()
public:
    LIVELINKMVNPLUGIN_API FRemappingRow();
};

