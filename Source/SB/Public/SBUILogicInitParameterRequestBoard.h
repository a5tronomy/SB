#pragma once
#include "CoreMinimal.h"
#include "ESBUIRequestBoardType.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterRequestBoard.generated.h"

USTRUCT()
struct FSBUILogicInitParameterRequestBoard : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ESBUIRequestBoardType> RequestBoardType;
    
    SB_API FSBUILogicInitParameterRequestBoard();
};

