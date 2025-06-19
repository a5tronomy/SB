#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBOverrideAnimTransit.generated.h"

USTRUCT(BlueprintType)
struct FSBOverrideAnimTransit {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString LowerTransitAnimResource;
    
    UPROPERTY(Transient)
    FString UpperTransitAnimResource;
    
    UPROPERTY(Transient)
    FGuid Guid;
    
    SB_API FSBOverrideAnimTransit();
};

