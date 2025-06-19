#pragma once
#include "CoreMinimal.h"
#include "ESBDisplayRequestBoardType.h"
#include "ESBUIRedDotState.h"
#include "ESBUIRequestState.h"
#include "SBRequestTitleData.generated.h"

USTRUCT()
struct FSBRequestTitleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText title;
    
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> RedDotState;
    
    UPROPERTY(EditAnywhere)
    ESBUIRequestState RequestState;
    
    UPROPERTY(EditAnywhere)
    bool bTracking;
    
    UPROPERTY(EditAnywhere)
    ESBDisplayRequestBoardType DisplayRequestBoardType;
    
    SB_API FSBRequestTitleData();
};

