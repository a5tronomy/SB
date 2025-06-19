#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBItemSkillEquipableTableProperty.generated.h"

USTRUCT()
struct FSBItemSkillEquipableTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ItemSkillEquipableAlias;
    
    UPROPERTY(EditAnywhere)
    int32 Level;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AcquisitionSkillAliasArray;
    
    UPROPERTY(EditAnywhere)
    FName SkillCommandAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EquipEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> UnequipEffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> RequiredItemAliasArray;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> RequiredItemAmountArray;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBItemSkillEquipableTableProperty();
};

