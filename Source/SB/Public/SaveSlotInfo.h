#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SaveSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FSaveSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SlotNum;
    
    UPROPERTY()
    int32 Version;
    
    UPROPERTY()
    FString MapName;
    
    UPROPERTY()
    FDateTime Timestamp;
    
    UPROPERTY()
    FDateTime SelectedTime;
    
    UPROPERTY()
    int32 PlayTime;
    
    UPROPERTY()
    FString CampAlias;
    
    UPROPERTY()
    FName ZoneAlias;
    
    SB_API FSaveSlotInfo();
};

