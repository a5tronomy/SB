#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBHintTableProperty.generated.h"

USTRUCT()
struct FSBHintTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    uint32 DelayActivateTimeSec;
    
    UPROPERTY(EditAnywhere)
    uint32 LongTimeDelayActivateTimeSec;
    
    UPROPERTY(EditAnywhere)
    FName HintMessage_StringKey;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActivateZoneTriggerAliasArray;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBHintTableProperty();
};

