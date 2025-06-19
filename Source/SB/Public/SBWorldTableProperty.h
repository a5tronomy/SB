#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBWorldTableProperty.generated.h"

USTRUCT()
struct FSBWorldTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString UMapPath;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBWorldTableProperty();
};

