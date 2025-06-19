#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBShowParamTableProperty.generated.h"

USTRUCT()
struct FSBShowParamTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    bool UseCreateStaticMaterial;
    
    UPROPERTY(EditAnywhere)
    int32 CreateStaticMaterialElementIndex;
    
    UPROPERTY(EditAnywhere)
    int32 CreateStaticMaterialInstanceIndex;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBShowParamTableProperty();
};

