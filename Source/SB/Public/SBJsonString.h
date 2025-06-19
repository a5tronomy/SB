#pragma once
#include "CoreMinimal.h"
#include "SBJsonString.generated.h"

USTRUCT()
struct FSBJsonString {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString V;
    
    SB_API FSBJsonString();
};

