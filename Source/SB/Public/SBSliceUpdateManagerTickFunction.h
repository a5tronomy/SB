#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBSliceUpdateManagerTickFunction.generated.h"

USTRUCT()
struct FSBSliceUpdateManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SB_API FSBSliceUpdateManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBSliceUpdateManagerTickFunction> : public TStructOpsTypeTraitsBase2<FSBSliceUpdateManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

