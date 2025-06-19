#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBSignificanceManagerTickFunction.generated.h"

USTRUCT()
struct FSBSignificanceManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SB_API FSBSignificanceManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBSignificanceManagerTickFunction> : public TStructOpsTypeTraitsBase2<FSBSignificanceManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

