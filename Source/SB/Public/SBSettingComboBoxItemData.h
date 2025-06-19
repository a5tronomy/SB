#pragma once
#include "CoreMinimal.h"
#include "SBSettingComboBoxItemData.generated.h"

USTRUCT(BlueprintType)
struct FSBSettingComboBoxItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText TitleText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDefaultValue;
    
    SB_API FSBSettingComboBoxItemData();
};

