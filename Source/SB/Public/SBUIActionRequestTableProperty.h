#pragma once
#include "CoreMinimal.h"
#include "ESBUIActionExecuteType.h"
#include "ESBUIActionFinishType.h"
#include "SBTablePropertyBase.h"
#include "SBUIActionRequestTableProperty.generated.h"

USTRUCT()
struct FSBUIActionRequestTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Group;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool BlockAction;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreLoadingScreen;
    
    UPROPERTY(EditAnywhere)
    bool AffectedByVisibleOption;
    
    UPROPERTY(EditAnywhere)
    bool DebugClearAllow;
    
    UPROPERTY(EditAnywhere)
    bool SkipInNewGamePlus;
    
    UPROPERTY(EditAnywhere)
    bool ConditionFailPass;
    
    UPROPERTY(EditAnywhere)
    FName StartConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName AchievementAction;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIActionExecuteType> ExecuteType;
    
    UPROPERTY(EditAnywhere)
    float Time;
    
    UPROPERTY(EditAnywhere)
    float Delay;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIActionFinishType> FinishType;
    
    UPROPERTY(EditAnywhere)
    FString Arg1;
    
    UPROPERTY(EditAnywhere)
    FString Arg2;
    
    UPROPERTY(EditAnywhere)
    FString Arg3;
    
    UPROPERTY(EditAnywhere)
    FName AffectedByVisibleFailReplaceGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBUIActionRequestTableProperty();
};

