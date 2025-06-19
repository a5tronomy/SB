#pragma once
#include "CoreMinimal.h"
#include "SBAliasAchievement.h"
#include "SBAliasZone.h"
#include "SBTransitZoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBTransitZoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBAliasAchievement TransitAchievement;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZone TransitZone;
    
    SB_API FSBTransitZoneInfo();
};

