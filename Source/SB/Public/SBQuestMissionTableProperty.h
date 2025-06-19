#pragma once
#include "CoreMinimal.h"
#include "ESBQuestMissionType.h"
#include "SBTablePropertyBase.h"
#include "SBQuestMissionTableProperty.generated.h"

USTRUCT()
struct FSBQuestMissionTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestMissionType> MissionType;
    
    UPROPERTY(EditAnywhere)
    FName OwnerFilter;
    
    UPROPERTY(EditAnywhere)
    FName TargetFilter;
    
    UPROPERTY(EditAnywhere)
    FString CustomStr;
    
    UPROPERTY(EditAnywhere)
    int32 CustomValue;
    
    UPROPERTY(EditAnywhere)
    int32 ConditionCount;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActivateEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ProgressEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CompleteEvent;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBQuestMissionTableProperty();
};

