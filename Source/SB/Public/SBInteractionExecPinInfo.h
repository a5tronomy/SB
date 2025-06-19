#pragma once
#include "CoreMinimal.h"
#include "SBExecCustomStruct.h"
#include "SBInteractionExecPinInfo.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBInteractionExecPinInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bResultFlag;
    
    UPROPERTY()
    FName CustomTagName;
    
    UPROPERTY()
    TArray<FSBExecCustomStruct> CustomStructList;
    
    FSBInteractionExecPinInfo();
};

