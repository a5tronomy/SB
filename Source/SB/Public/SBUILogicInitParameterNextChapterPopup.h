#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterNextChapterPopup.generated.h"

USTRUCT()
struct FSBUILogicInitParameterNextChapterPopup : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName NextCampSpawnAlias;
    
    UPROPERTY()
    FVector NextSpawnLocation;
    
    UPROPERTY()
    FRotator NextSpawnRotation;
    
    SB_API FSBUILogicInitParameterNextChapterPopup();
};

