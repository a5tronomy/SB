#pragma once
#include "CoreMinimal.h"
#include "ESBQuestTaskDescriptionUIType.h"
#include "ESBQuestTaskUIType.h"
#include "SBGameMenuTaskData.generated.h"

USTRUCT()
struct FSBGameMenuTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText TextData;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestTaskUIType> UIType;
    
    UPROPERTY(EditAnywhere)
    ESBQuestTaskDescriptionUIType DescriptionUIType;
    
    UPROPERTY(EditAnywhere)
    int32 CurrentValue;
    
    UPROPERTY(EditAnywhere)
    int32 CompleteValue;
    
    UPROPERTY(EditAnywhere)
    bool bComplete;
    
    SB_API FSBGameMenuTaskData();
};

