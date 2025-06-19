#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBGearType.h"
#include "SBItemInstanceForRPC.generated.h"

USTRUCT(BlueprintType)
struct FSBItemInstanceForRPC {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid SavedGuid;
    
    UPROPERTY()
    FGuid PocketGuid;
    
    UPROPERTY()
    FName ItemAlias;
    
    UPROPERTY()
    uint32 StatLevel;
    
    UPROPERTY()
    uint32 ItemCount;
    
    UPROPERTY()
    uint32 ItemChargeCount;
    
    UPROPERTY()
    bool Equiped;
    
    UPROPERTY()
    TEnumAsByte<ESBGearType> GearType;
    
    UPROPERTY()
    int32 MatVarIndex;
    
    UPROPERTY()
    TArray<int32> EquipStatAliasKeyArray;
    
    UPROPERTY()
    TArray<FName> EquipStatAliasValueArray;
    
    UPROPERTY()
    TArray<int32> EquipStatRangeKeyArray;
    
    UPROPERTY()
    TArray<int32> EquipStatRangeValueArray;
    
    SB_API FSBItemInstanceForRPC();
};

