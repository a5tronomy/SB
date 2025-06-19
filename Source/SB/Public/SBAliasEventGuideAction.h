#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasEventGuideAction.generated.h"

USTRUCT()
struct FSBAliasEventGuideAction : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasEventGuideAction();
};

