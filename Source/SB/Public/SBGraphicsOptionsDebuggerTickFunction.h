#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBGraphicsOptionsDebuggerTickFunction.generated.h"

USTRUCT()
struct FSBGraphicsOptionsDebuggerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SB_API FSBGraphicsOptionsDebuggerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBGraphicsOptionsDebuggerTickFunction> : public TStructOpsTypeTraitsBase2<FSBGraphicsOptionsDebuggerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

