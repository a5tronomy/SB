#pragma once
#include "CoreMinimal.h"
#include "ESBDebugDataState.h"
#include "SBDebugViewerProperty.generated.h"

USTRUCT()
struct FSBDebugViewerProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Key;
    
    UPROPERTY(EditAnywhere)
    FText Value;
    
    UPROPERTY(EditAnywhere)
    bool bRealTimeChecked;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDebugDataState> DataState;
    
    SB_API FSBDebugViewerProperty();
};

