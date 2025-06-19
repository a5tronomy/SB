#pragma once
#include "CoreMinimal.h"
#include "ESBActorStatType.h"
#include "ESBGearStatType.h"
#include "SBTablePropertyBase.h"
#include "SBGearStatGroupTableProperty.generated.h"

USTRUCT()
struct FSBGearStatGroupTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Group;
    
    UPROPERTY(EditAnywhere)
    FName StatCategoryTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBGearStatType> GearStatType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> ActorStatType;
    
    UPROPERTY(EditAnywhere)
    FName EffectStatTag;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBGearStatGroupTableProperty();
};

