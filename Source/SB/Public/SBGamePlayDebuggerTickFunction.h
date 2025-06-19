#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBGamePlayDebuggerTickFunction.generated.h"

USTRUCT()
struct FSBGamePlayDebuggerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SB_API FSBGamePlayDebuggerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBGamePlayDebuggerTickFunction> : public TStructOpsTypeTraitsBase2<FSBGamePlayDebuggerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

