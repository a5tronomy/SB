#pragma once
#include "CoreMinimal.h"
#include "SBStudioShowResourceData.generated.h"

class USBShowData;

USTRUCT(BlueprintType)
struct FSBStudioShowResourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ResourceTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USBShowData> ShowPath;
    
    SB_API FSBStudioShowResourceData();
};

