#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBObjectState.h"
#include "ESBZoneObjectSaveType.h"
#include "ESBZoneTriggerDoingType.h"
#include "ESBZoneTriggerFilterType.h"
#include "ESBZoneTriggerType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneTriggerTableProperty.generated.h"

USTRUCT()
struct FSBZoneTriggerTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Zone;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> InitActivate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneTriggerType> TriggerType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TouchEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> LeaveEvents;
    
    UPROPERTY(EditAnywhere)
    FName Condition;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName TriggerActorAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneTriggerDoingType> DoingType;
    
    UPROPERTY(EditAnywhere)
    bool InOutTrigger;
    
    UPROPERTY(EditAnywhere)
    int32 InitialDoingCount;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreDoingCount;
    
    UPROPERTY(EditAnywhere)
    float ActiveRange;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjectSaveType> SaveType;
    
    UPROPERTY(EditAnywhere)
    FVector BoxExtent;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneTriggerFilterType> IgnoreFilter;
    
    UPROPERTY(EditAnywhere)
    FString ConditionObjectMaterial;
    
    UPROPERTY(EditAnywhere)
    FName LevelTargetFilter;
    
    UPROPERTY(EditAnywhere)
    float BlockExtraSprintDuration;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneTriggerTableProperty();
};

