#pragma once
#include "CoreMinimal.h"
#include "SBBHUDCommandCheatData.generated.h"

USTRUCT()
struct FSBBHUDCommandCheatData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Index;
    
    UPROPERTY(EditAnywhere)
    FText CategoryText;
    
    UPROPERTY(EditAnywhere)
    FText CheatText;
    
    SB_API FSBBHUDCommandCheatData();
};

