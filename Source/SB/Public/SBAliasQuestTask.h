#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasQuestTask.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasQuestTask : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasQuestTask();
};

