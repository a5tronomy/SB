#pragma once
#include "CoreMinimal.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_World.generated.h"

class UWorld;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_World : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(EditAnywhere)
    FString LevelPath;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_World();

};

