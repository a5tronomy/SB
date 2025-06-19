#pragma once
#include "CoreMinimal.h"
#include "ESBActorStatType.h"
#include "ESBGearStatType.h"
#include "ESBItemRarityType.h"
#include "SBTablePropertyBase.h"
#include "SBGearStatTableProperty.generated.h"

USTRUCT()
struct FSBGearStatTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName StatCategoryTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBGearStatType> GearStatType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> ActorStatType;
    
    UPROPERTY(EditAnywhere)
    FName EffectStatTag;
    
    UPROPERTY(EditAnywhere)
    int32 StatLevel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemRarityType> Rarity;
    
    UPROPERTY(EditAnywhere)
    float StatValueMin;
    
    UPROPERTY(EditAnywhere)
    float StatValueMax;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    FString TextEffectName;
    
    UPROPERTY(EditAnywhere)
    FString TextEffectDesc;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBGearStatTableProperty();
};

