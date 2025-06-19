#pragma once
#include "CoreMinimal.h"
#include "ESBKeyMappingAxisScaleType.h"
#include "SBTablePropertyBase.h"
#include "SBUITextInputDefineProperty.generated.h"

USTRUCT()
struct FSBUITextInputDefineProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Key;
    
    UPROPERTY(EditAnywhere)
    FName Platform;
    
    UPROPERTY(EditAnywhere)
    ESBKeyMappingAxisScaleType AxisScale;
    
    UPROPERTY(EditAnywhere)
    FString text;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBUITextInputDefineProperty();
};

