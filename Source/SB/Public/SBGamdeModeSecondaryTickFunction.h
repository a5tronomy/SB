#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBGamdeModeSecondaryTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FSBGamdeModeSecondaryTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SB_API FSBGamdeModeSecondaryTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBGamdeModeSecondaryTickFunction> : public TStructOpsTypeTraitsBase2<FSBGamdeModeSecondaryTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

