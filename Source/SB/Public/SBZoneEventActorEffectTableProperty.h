#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventActorCaster.h"
#include "ESBZoneEventActorTarget.h"
#include "ESBZoneEventEventorType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventActorEffectTableProperty.generated.h"

USTRUCT()
struct FSBZoneEventActorEffectTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName ActorEffectAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ToTarget;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventEventorType> EventorType;
    
    UPROPERTY(EditAnywhere)
    FName TargetTagName;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventActorCaster> ToCaster;
    
    UPROPERTY(EditAnywhere)
    FName CasterTagName;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEventActorEffectTableProperty();
};

