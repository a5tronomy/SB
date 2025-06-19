#pragma once
#include "CoreMinimal.h"
#include "SBListTabData.generated.h"

USTRUCT()
struct FSBListTabData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText title;
    
    SB_API FSBListTabData();
};

