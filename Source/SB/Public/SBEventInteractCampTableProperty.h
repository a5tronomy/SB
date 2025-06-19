#pragma once
#include "CoreMinimal.h"
#include "ESBInteractCampType.h"
#include "ESBZoneEventInteractSaveType.h"
#include "SBTablePropertyBase.h"
#include "SBEventInteractCampTableProperty.generated.h"

USTRUCT()
struct FSBEventInteractCampTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName CampEnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBInteractCampType> InteractType;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    bool bShowResetZoneUI;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventInteractSaveType> DoingSaveType;
    
    UPROPERTY(EditAnywhere)
    FName SoundEventAlias;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventInteractCampTableProperty();
};

