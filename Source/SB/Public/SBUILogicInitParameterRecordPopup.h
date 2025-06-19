#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterRecordPopup.generated.h"

USTRUCT()
struct FSBUILogicInitParameterRecordPopup : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName AlbumAlias;
    
    UPROPERTY()
    bool bShouldPause;
    
    SB_API FSBUILogicInitParameterRecordPopup();
};

