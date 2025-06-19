#pragma once
#include "CoreMinimal.h"
#include "ESBSaveGameDataType.h"
#include "SBSaveObjectInfo.generated.h"

class USaveGame;

USTRUCT(BlueprintType)
struct FSBSaveObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 UserIndex;
    
    UPROPERTY(Transient)
    FString SaveSlotName;
    
    UPROPERTY(Transient)
    USaveGame* SaveGameObject;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBSaveGameDataType> SaveObjectType;
    
    UPROPERTY(Transient)
    FString WithSaveFilePath;
    
    UPROPERTY(Transient)
    FString WithSaveFileName;
    
    SB_API FSBSaveObjectInfo();
};

