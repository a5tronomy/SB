#pragma once
#include "CoreMinimal.h"
#include "ESBManualType.h"
#include "SBTablePropertyBase.h"
#include "SBManualTableProperty.generated.h"

USTRUCT()
struct FSBManualTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBManualType> ManualType;
    
    UPROPERTY(EditAnywhere)
    bool bUseAcquisitionSkillString;
    
    UPROPERTY(EditAnywhere)
    FString GroupStringKey;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> DescStringKeyArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> MoviePathArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ImagePathArray;
    
    UPROPERTY(EditAnywhere)
    FName GroupUnlockAchievementAlias;
    
    UPROPERTY(EditAnywhere)
    FName GroupUnlockConditionGroupAlias;
    
    SB_API FSBManualTableProperty();
};

