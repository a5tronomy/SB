#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBSpawnGroupRuleTableProperty.generated.h"

USTRUCT()
struct FSBSpawnGroupRuleTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString Desc;
    
    UPROPERTY(EditAnywhere)
    FName ZoneAlias;
    
    UPROPERTY(EditAnywhere)
    FName SpawnGroupRuleAlias;
    
    UPROPERTY(EditAnywhere)
    FName SubGroup;
    
    UPROPERTY(EditAnywhere)
    uint32 SubGroupSelectItemCnt;
    
    UPROPERTY(EditAnywhere)
    FName DuplicationPreventKey;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EventSpawnArray;
    
    SB_API FSBSpawnGroupRuleTableProperty();
};

