#pragma once
#include "CoreMinimal.h"
#include "SBDataAsset.h"
#include "SBToolDataVersion.h"
#include "SBToolDataAsset.generated.h"

class UEdGraph;
class USBDataNodeBase;

UCLASS()
class SB_API USBToolDataAsset : public USBDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBToolDataVersion ToolDataVersion;
    
    UPROPERTY()
    TArray<USBDataNodeBase*> ToolDataNodeList;
    
    UPROPERTY()
    UEdGraph* ToolDataNodeGraph;
    
    USBToolDataAsset();

};

