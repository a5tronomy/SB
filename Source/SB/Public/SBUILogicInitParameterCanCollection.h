#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterCanCollection.generated.h"

USTRUCT()
struct FSBUILogicInitParameterCanCollection : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CollectionEnvSpawnAlias;
    
    SB_API FSBUILogicInitParameterCanCollection();
};

