#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBParallelTickFunction.generated.h"

USTRUCT()
struct FSBParallelTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SB_API FSBParallelTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBParallelTickFunction> : public TStructOpsTypeTraitsBase2<FSBParallelTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

