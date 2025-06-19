#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBWorldLevelManagerTickFunction.generated.h"

USTRUCT()
struct FSBWorldLevelManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SB_API FSBWorldLevelManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBWorldLevelManagerTickFunction> : public TStructOpsTypeTraitsBase2<FSBWorldLevelManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

