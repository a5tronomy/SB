#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBCharacterMovementUpdateManagerTickFunction.generated.h"

USTRUCT()
struct FSBCharacterMovementUpdateManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SB_API FSBCharacterMovementUpdateManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBCharacterMovementUpdateManagerTickFunction> : public TStructOpsTypeTraitsBase2<FSBCharacterMovementUpdateManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

