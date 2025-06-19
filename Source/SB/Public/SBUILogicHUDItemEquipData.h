#pragma once
#include "CoreMinimal.h"
#include "ESBItemCategory.h"
#include "SBUILogicHUDItemEquipData.generated.h"

USTRUCT(BlueprintType)
struct FSBUILogicHUDItemEquipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DescFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ChargeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StoreCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBItemCategory> ItemCategory;
    
    SB_API FSBUILogicHUDItemEquipData();
};

