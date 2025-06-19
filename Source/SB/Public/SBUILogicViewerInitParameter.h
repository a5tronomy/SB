#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicViewerInitParameter.generated.h"

USTRUCT()
struct FSBUILogicViewerInitParameter : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    SB_API FSBUILogicViewerInitParameter();
};

