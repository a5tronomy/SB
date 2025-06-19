#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "AchievementData.h"
#include "ESBCharacterLevelType.h"
#include "ESBEquipType.h"
#include "ItemData.h"
#include "SBSaveData.generated.h"

class USBSaveGame;

UCLASS()
class SB_API USBSaveData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    USBSaveGame* SaveGameInstance;
    
public:
    UPROPERTY()
    FString BaseFilePath;
    
    UPROPERTY(EditAnywhere)
    FString SavFilePath;
    
    UPROPERTY(VisibleAnywhere)
    int32 SavFileVersion;
    
    UPROPERTY(EditAnywhere)
    FString CSVFilePath;
    
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> OpenCampAliases;
    
    UPROPERTY(EditAnywhere)
    FName LastInteractCampEnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FName LastInteractTetrapodEnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SkillAliases;
    
    UPROPERTY(EditAnywhere)
    uint32 SP;
    
    UPROPERTY(EditAnywhere)
    uint32 SPLevel;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FItemData> Items;
    
    UPROPERTY(EditAnywhere)
    TSet<FName> ItemObtains;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBEquipType>, FItemData> Equipments;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBCharacterLevelType>, uint32> Levels;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FAchievementData> Achievements;
    
    UPROPERTY()
    TArray<FName> InitialOpenCampAliases;
    
    USBSaveData();

};

