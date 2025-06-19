#pragma once
#include "CoreMinimal.h"
#include "ELowEntryImageFormat.generated.h"

UENUM()
enum class ELowEntryImageFormat : uint8 {
    Invalid,
    PNG,
    JPEG,
    GrayscaleJPEG,
    BMP,
    ICO,
    EXR,
    ICNS,
};

