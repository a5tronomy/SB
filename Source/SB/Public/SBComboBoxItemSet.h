#pragma once
#include "CoreMinimal.h"
#include "SBComboBoxItemSet.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSBComboBoxItemSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UObject* ItemData;
    
public:
    SB_API FSBComboBoxItemSet();
};

