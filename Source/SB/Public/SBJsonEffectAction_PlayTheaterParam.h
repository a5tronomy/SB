#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffectAction_PlayTheaterParam.generated.h"

USTRUCT()
struct FSBJsonEffectAction_PlayTheaterParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FString AssetPath;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 Priority;
    
    SB_API FSBJsonEffectAction_PlayTheaterParam();
};

