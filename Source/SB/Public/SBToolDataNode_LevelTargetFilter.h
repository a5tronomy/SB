#pragma once
#include "CoreMinimal.h"
#include "ESBLevelTargetActor.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_LevelTargetFilter.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_LevelTargetFilter : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBLevelTargetActor> TargetType;
    
    UPROPERTY(EditAnywhere)
    FName EventSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FName TargetAlias;
    
    UPROPERTY(EditAnywhere)
    FName EnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FName EnvAlias;
    
    UPROPERTY(EditAnywhere)
    FName SpawnPointName;
    
    UPROPERTY(EditAnywhere)
    int32 TargetPriority;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_LevelTargetFilter();

};

