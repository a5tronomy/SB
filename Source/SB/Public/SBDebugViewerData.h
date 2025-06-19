#pragma once
#include "CoreMinimal.h"
#include "ESBDebugDataState.h"
#include "ESBDebugViewerDataCategory.h"
#include "SBDebugViewerData.generated.h"

USTRUCT()
struct FSBDebugViewerData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDebugViewerDataCategory> Category;
    
    UPROPERTY(EditAnywhere)
    FText Name;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDebugDataState> DataState;
    
    SB_API FSBDebugViewerData();
};

