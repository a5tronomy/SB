#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasQuestGroupTask.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasQuestGroupTask : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasQuestGroupTask();
};

