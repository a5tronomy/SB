#pragma once
#include "CoreMinimal.h"
#include "ESBDebugData.h"
#include "ESBDebugDataState.h"
#include "SBRealTimeDebugProperty.generated.h"

USTRUCT()
struct FSBRealTimeDebugProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDebugData> Object;
    
    UPROPERTY(EditAnywhere)
    FText Instance;
    
    UPROPERTY(EditAnywhere)
    FText Property;
    
    UPROPERTY(EditAnywhere)
    FText Value;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDebugDataState> DataState;
    
    SB_API FSBRealTimeDebugProperty();
};

