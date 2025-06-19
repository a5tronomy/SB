#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SBPhotoModeTickFunction.generated.h"

USTRUCT()
struct FSBPhotoModeTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    SB_API FSBPhotoModeTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSBPhotoModeTickFunction> : public TStructOpsTypeTraitsBase2<FSBPhotoModeTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

