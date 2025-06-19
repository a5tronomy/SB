#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterGuideVideoData.h"
#include "SBUILogicInitParameterGuideVideo.generated.h"

USTRUCT()
struct FSBUILogicInitParameterGuideVideo : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSBUILogicInitParameterGuideVideoData> DataArray;
    
    UPROPERTY()
    bool bInputPress;
    
    SB_API FSBUILogicInitParameterGuideVideo();
};

