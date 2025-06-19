#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventActorTarget.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventActorActiveTableProperty.generated.h"

USTRUCT()
struct FSBZoneEventActorActiveTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    bool Active;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ToTarget;
    
    UPROPERTY(EditAnywhere)
    FName TargetTagName;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEventActorActiveTableProperty();
};

