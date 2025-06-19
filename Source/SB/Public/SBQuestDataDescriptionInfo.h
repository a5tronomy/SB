#pragma once
#include "CoreMinimal.h"
#include "SBQuestDataDescriptionInfo.generated.h"

class USBToolDataAsset;

USTRUCT()
struct FSBQuestDataDescriptionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USBToolDataAsset> ToolData;
    
    UPROPERTY(EditAnywhere)
    FString ToolDataDescription;
    
    SB_API FSBQuestDataDescriptionInfo();
};

