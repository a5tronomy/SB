#pragma once
#include "CoreMinimal.h"
#include "ESBEventGiftType.h"
#include "SBTablePropertyBase.h"
#include "SBEventGiftTableProperty.generated.h"

USTRUCT()
struct FSBEventGiftTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEventGiftType> GiftType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ItemList;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ItemAmountList;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ItemLevelList;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventGiftTableProperty();
};

