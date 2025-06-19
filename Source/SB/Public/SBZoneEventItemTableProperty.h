#pragma once
#include "CoreMinimal.h"
#include "ESBItemBucketType.h"
#include "ESBZoneEventEventorType.h"
#include "ESBZoneEventItemType.h"
#include "ESBZoneObjectSaveType.h"
#include "ESBZoneSpawnType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventItemTableProperty.generated.h"

USTRUCT()
struct FSBZoneEventItemTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventItemType> ControlType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneSpawnType> SpawnType;
    
    UPROPERTY(EditAnywhere)
    FName World;
    
    UPROPERTY(EditAnywhere)
    FName Zone;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventEventorType> EventorType;
    
    UPROPERTY(EditAnywhere)
    FName SpawnPointName;
    
    UPROPERTY(EditAnywhere)
    FName SpawnItemAlias;
    
    UPROPERTY(EditAnywhere)
    int32 SpawnItemCount;
    
    UPROPERTY(EditAnywhere)
    FName SpawnInfoAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemBucketType> SpawnItemBucketType;
    
    UPROPERTY(EditAnywhere)
    float EventDelayTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckAchievements;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AcquireZoneEvents;
    
    UPROPERTY(EditAnywhere)
    bool bUseOverrideAutoInteraction;
    
    UPROPERTY(EditAnywhere)
    bool bAutoInteraction;
    
    UPROPERTY(EditAnywhere)
    float AutoInteractionDist;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEventItemTableProperty();
};

