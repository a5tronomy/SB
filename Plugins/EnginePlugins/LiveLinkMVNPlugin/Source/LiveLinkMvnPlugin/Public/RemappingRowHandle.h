#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EXsensMapping.h"
#include "RemappingRowHandle.generated.h"

USTRUCT(BlueprintType)
struct FRemappingRowHandle : public FDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EXsensMapping XsensRemapId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName RemapId;
    
    LIVELINKMVNPLUGIN_API FRemappingRowHandle();
};

