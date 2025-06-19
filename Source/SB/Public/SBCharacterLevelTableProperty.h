#pragma once
#include "CoreMinimal.h"
#include "ESBActorStatType.h"
#include "ESBCharacterLevelType.h"
#include "SBTablePropertyBase.h"
#include "SBCharacterLevelTableProperty.generated.h"

USTRUCT()
struct FSBCharacterLevelTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterLevelType> LevelType;
    
    UPROPERTY(EditAnywhere)
    int32 Level;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> Stat1;
    
    UPROPERTY(EditAnywhere)
    int32 StatValue1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> Stat2;
    
    UPROPERTY(EditAnywhere)
    int32 StatValue2;
    
    UPROPERTY(EditAnywhere)
    FName RequiredItemAlias1;
    
    UPROPERTY(EditAnywhere)
    int32 RequiredItemAmount1;
    
    UPROPERTY(EditAnywhere)
    FName RequiredItemAlias2;
    
    UPROPERTY(EditAnywhere)
    int32 RequiredItemAmount2;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FString ResultDescription;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCharacterLevelTableProperty();
};

