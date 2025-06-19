#pragma once
#include "CoreMinimal.h"
#include "ESBItemLureWeightUpType.h"
#include "SBTablePropertyBase.h"
#include "SBItemLureTableProperty.generated.h"

USTRUCT()
struct FSBItemLureTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory1;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd1;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory2;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd2;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory3;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd3;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory4;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd4;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory5;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd5;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory6;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd6;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory7;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd7;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory8;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd8;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory9;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd9;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory10;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd10;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory11;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd11;
    
    UPROPERTY(EditAnywhere)
    FName FishCategory12;
    
    UPROPERTY(EditAnywhere)
    int32 BiteRateAdd12;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemLureWeightUpType> WeightUp;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBItemLureTableProperty();
};

