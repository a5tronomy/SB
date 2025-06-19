#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBDebug2DLineInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBDebug2DLineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 StartX;
    
    UPROPERTY(Transient)
    int32 StartY;
    
    UPROPERTY(Transient)
    int32 EndX;
    
    UPROPERTY(Transient)
    int32 EndY;
    
    UPROPERTY(Transient)
    FColor LineColor;
    
    SB_API FSBDebug2DLineInfo();
};

