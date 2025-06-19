#pragma once
#include "CoreMinimal.h"
#include "SBLevelAlias.generated.h"

USTRUCT()
struct FSBLevelAlias {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName WorldName;
    
    UPROPERTY(EditAnywhere)
    FName ActorName;
    
    UPROPERTY(EditAnywhere)
    UClass* Type;
    
    SB_API FSBLevelAlias();
};

