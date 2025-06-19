#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBEditorTooltipTableProperty.generated.h"

USTRUCT()
struct FSBEditorTooltipTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Type;
    
    UPROPERTY(EditAnywhere)
    FName Target;
    
    UPROPERTY(EditAnywhere)
    FName FieldName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FieldNameArray;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEditorTooltipTableProperty();
};

