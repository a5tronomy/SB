#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBGamdeModePostUpdateWorkTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSBGamdeModePostUpdateWorkTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SB_API FSBGamdeModePostUpdateWorkTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBGamdeModePostUpdateWorkTickFunction> : public TStructOpsTypeTraitsBase2<FSBGamdeModePostUpdateWorkTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

