#pragma once
#include "CoreMinimal.h"
#include "ESBActorCalculatedStatType.h"
#include "ESBActorStatType.h"
#include "ESBCharacterLevelType.h"
#include "SBTablePropertyBase.h"
#include "SBEquipStatViewerTableProperty.generated.h"

USTRUCT()
struct FSBEquipStatViewerTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> StatType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorCalculatedStatType> CalculatedStatType;
    
    UPROPERTY(EditAnywhere)
    float MinValue;
    
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    float MaxValueInNewGamePlus;
    
    UPROPERTY(EditAnywhere)
    bool DisplayMaxValue;
    
    UPROPERTY(EditAnywhere)
    bool DisplayMaxTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCharacterLevelType> EnhanceCharLevelType;
    
    UPROPERTY(EditAnywhere)
    bool DisplayEnhanceCharLevel;
    
    UPROPERTY(EditAnywhere)
    bool DisplayAlways;
    
    UPROPERTY(EditAnywhere)
    bool DontDisplayUI;
    
    UPROPERTY(EditAnywhere)
    bool DisplayDecimal;
    
    UPROPERTY(EditAnywhere)
    FName Achievement;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEquipStatViewerTableProperty();
};

