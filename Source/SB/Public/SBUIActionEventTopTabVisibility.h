#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "ESBUILogicType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventTopTabVisibility.generated.h"

USTRUCT()
struct FSBUIActionEventTopTabVisibility : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ESBUILogicType> LogicType;
    
    UPROPERTY()
    ESlateVisibility Visibility;
    
    SB_API FSBUIActionEventTopTabVisibility();
};

