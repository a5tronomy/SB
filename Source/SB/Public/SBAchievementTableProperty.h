#pragma once
#include "CoreMinimal.h"
#include "ESBAchievementCategoryType.h"
#include "ESBAchievementEventType.h"
#include "ESBAchievementParamType.h"
#include "ESBOperationType.h"
#include "SBTablePropertyBase.h"
#include "SBAchievementTableProperty.generated.h"

USTRUCT()
struct FSBAchievementTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAchievementEventType> EventType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAchievementCategoryType> CategoryType;
    
    UPROPERTY(EditAnywhere)
    bool CheckParamOr;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAchievementParamType> ParamType1;
    
    UPROPERTY(EditAnywhere)
    FString ParamValue1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBOperationType> OpType1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAchievementParamType> ParamType2;
    
    UPROPERTY(EditAnywhere)
    FString ParamValue2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBOperationType> OpType2;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAchievementParamType> ParamType3;
    
    UPROPERTY(EditAnywhere)
    FString ParamValue3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBOperationType> OpType3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAchievementParamType> ParamType4;
    
    UPROPERTY(EditAnywhere)
    FString ParamValue4;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBOperationType> OpType4;
    
    UPROPERTY(EditAnywhere)
    int32 CompleteValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckAchievementAliasArray;
    
    UPROPERTY(EditAnywhere)
    FName CompleteUIRequestGroup;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CompleteAcquisitionSkillArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> RewardAcquisitionSkillArray;
    
    UPROPERTY(EditAnywhere)
    int32 CompleteIncreaseMultiMapLevel;
    
    UPROPERTY(EditAnywhere)
    FName ProgressAchievementOnCompleted;
    
    UPROPERTY(EditAnywhere)
    int32 ProgressAchievementValueOnCompleted;
    
    UPROPERTY(EditAnywhere)
    FName ProgressAchievementOnCompleted2;
    
    UPROPERTY(EditAnywhere)
    int32 ProgressAchievementValueOnCompleted2;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ProgressAchievementArrayOnCompleted;
    
    UPROPERTY(EditAnywhere)
    int32 ProgressAchievementArrayValueOnCompleted;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainNewGamePlus;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBAchievementTableProperty();
};

