#pragma once
#include "CoreMinimal.h"
#include "ESBUICampWorldMapDisplayType.h"
#include "ESBZoneCampType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneCampTableProperty.generated.h"

USTRUCT()
struct FSBZoneCampTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString CampName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneCampType> CampType;
    
    UPROPERTY(EditAnywhere)
    FName Region;
    
    UPROPERTY(EditAnywhere)
    FName RegionName;
    
    UPROPERTY(EditAnywhere)
    FString CampImage;
    
    UPROPERTY(EditAnywhere)
    FString InGameUICampImage;
    
    UPROPERTY(EditAnywhere)
    FName CoinSpawnPointName;
    
    UPROPERTY(EditAnywhere)
    float OverrideCampDetectDistance_Max;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUICampWorldMapDisplayType> CampDisplayType;
    
    UPROPERTY(EditAnywhere)
    FName LinkCampAlias;
    
    UPROPERTY(EditAnywhere)
    FName CampDisplayLinkAlias;
    
    UPROPERTY(EditAnywhere)
    FName ActiveTag;
    
    UPROPERTY(EditAnywhere)
    FName EnableMapMakerCondition;
    
    UPROPERTY(EditAnywhere)
    float WorldMapOverlapDistance;
    
    UPROPERTY(EditAnywhere)
    FName ForceCampTrophyAchievementForEnvState;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneCampTableProperty();
};

