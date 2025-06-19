#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBTableMetaData.generated.h"

USTRUCT()
struct FSBTableMetaData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    FString Filename;
    
    SB_API FSBTableMetaData();
};

