#pragma once
#include "CoreMinimal.h"
#include "ESBActorStatType.h"
#include "ESBEffectCalculationType.h"
#include "SBTablePropertyBase.h"
#include "SBDifficultyStatGroupTableProperty.generated.h"

USTRUCT()
struct FSBDifficultyStatGroupTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName DifficultyAlias;
    
    UPROPERTY(EditAnywhere)
    FName DifficultyStatGroupAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> Stat1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectCalculationType> StatCalculationType1;
    
    UPROPERTY(EditAnywhere)
    float StatValue1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> Stat2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectCalculationType> StatCalculationType2;
    
    UPROPERTY(EditAnywhere)
    float StatValue2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> Stat3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectCalculationType> StatCalculationType3;
    
    UPROPERTY(EditAnywhere)
    float StatValue3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> Stat4;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectCalculationType> StatCalculationType4;
    
    UPROPERTY(EditAnywhere)
    float StatValue4;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> Stat5;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectCalculationType> StatCalculationType5;
    
    UPROPERTY(EditAnywhere)
    float StatValue5;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> Stat6;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectCalculationType> StatCalculationType6;
    
    UPROPERTY(EditAnywhere)
    float StatValue6;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> Stat7;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectCalculationType> StatCalculationType7;
    
    UPROPERTY(EditAnywhere)
    float StatValue7;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> Stat8;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEffectCalculationType> StatCalculationType8;
    
    UPROPERTY(EditAnywhere)
    float StatValue8;
    
    SB_API FSBDifficultyStatGroupTableProperty();
};

