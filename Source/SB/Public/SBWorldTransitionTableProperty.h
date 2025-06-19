#pragma once
#include "CoreMinimal.h"
#include "ESBWorldTransitionType.h"
#include "SBTablePropertyBase.h"
#include "SBWorldTransitionTableProperty.generated.h"

USTRUCT()
struct FSBWorldTransitionTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBWorldTransitionType> TransitionType;
    
    UPROPERTY(EditAnywhere)
    FName EnableConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName TriggerAlias;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventAlias;
    
    UPROPERTY(EditAnywhere)
    FName EnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EventSpawnAliasArray;
    
    UPROPERTY(EditAnywhere)
    FName FromWorldAlias;
    
    UPROPERTY(EditAnywhere)
    FName FromIsolatedAreaAlias;
    
    UPROPERTY(EditAnywhere)
    FName ToWorldAlias;
    
    UPROPERTY(EditAnywhere)
    FName ToIsolatedAreaAlias;
    
    UPROPERTY(EditAnywhere)
    FString ToDescStringKey;
    
    UPROPERTY(EditAnywhere)
    FName PortalTag;
    
    UPROPERTY(EditAnywhere)
    bool EnableWorldMapPortal;
    
    SB_API FSBWorldTransitionTableProperty();
};

