#pragma once
#include "CoreMinimal.h"
#include "ESBLevelTargetActor.h"
#include "SBTablePropertyBase.h"
#include "SBLevelTargetFilterTableProperty.generated.h"

USTRUCT()
struct FSBLevelTargetFilterTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelTargetActor> TargetType;
    
    UPROPERTY(EditAnywhere)
    FName EventSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FName TargetAlias;
    
    UPROPERTY(EditAnywhere)
    FName SpawnPointName;
    
    UPROPERTY(EditAnywhere)
    FName EnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FName EnvAlias;
    
    UPROPERTY(EditAnywhere)
    int32 TargetPriority;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBLevelTargetFilterTableProperty();
};

