#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionResultType.generated.h"

UENUM()
enum ESBInteractionResultType {
    ESBInteractionResult_None,
    ESBInteractionResult_Success,
    ESBInteractionResult_Cancel,
    ESBInteractionResult_Fail,
};

