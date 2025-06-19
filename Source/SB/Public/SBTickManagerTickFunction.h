#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBTickManagerTickFunction.generated.h"

USTRUCT()
struct FSBTickManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SB_API FSBTickManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBTickManagerTickFunction> : public TStructOpsTypeTraitsBase2<FSBTickManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

