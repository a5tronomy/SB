#pragma once
#include "CoreMinimal.h"
#include "ESBLevelObjectType.h"
#include "ESBObjectState.h"
#include "ESBZoneObjControlActionType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventObjControl.generated.h"

USTRUCT()
struct FSBZoneEventObjControl : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName TargetDataAlias;
    
    UPROPERTY(EditAnywhere)
    FName TargetFilter;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelObjectType> ObjectType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> Activate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjControlActionType> ObjectControlActionType;
    
    UPROPERTY(EditAnywhere)
    FName RetargetSpawnPointName;
    
    UPROPERTY(EditAnywhere)
    bool bWithStorage;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEventObjControl();
};

