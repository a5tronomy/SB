#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "SBTablePropertyBase.h"
#include "SBEventLaserControlTableProperty.generated.h"

USTRUCT()
struct FSBEventLaserControlTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName LaserUniqueName;
    
    UPROPERTY(EditAnywhere)
    FName LaserGroupName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> Activate;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventLaserControlTableProperty();
};

