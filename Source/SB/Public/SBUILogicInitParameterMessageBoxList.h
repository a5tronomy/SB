#pragma once
#include "CoreMinimal.h"
#include "ESBUIMessageBoxListBackgroundType.h"
#include "SBUILogicInitParameter.h"
#include "SBUIMessageBoxListMessageData.h"
#include "SBUILogicInitParameterMessageBoxList.generated.h"

USTRUCT()
struct FSBUILogicInitParameterMessageBoxList : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSBUIMessageBoxListMessageData> DataArray;
    
    UPROPERTY()
    ESBUIMessageBoxListBackgroundType BackgroundType;
    
    SB_API FSBUILogicInitParameterMessageBoxList();
};

