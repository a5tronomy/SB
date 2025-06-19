#pragma once
#include "CoreMinimal.h"
#include "SBAlias.h"
#include "SBAliasPuzzleStringArray.generated.h"

USTRUCT(BlueprintType)
struct FSBAliasPuzzleStringArray : public FSBAlias {
    GENERATED_BODY()
public:
    SB_API FSBAliasPuzzleStringArray();
};

