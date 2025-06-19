#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBActorPlayPresetTableProperty.generated.h"

USTRUCT()
struct FSBActorPlayPresetTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    int32 WeaponLevel;
    
    UPROPERTY(EditAnywhere)
    int32 BodyLevel;
    
    UPROPERTY(EditAnywhere)
    int32 BetaLevel;
    
    UPROPERTY(EditAnywhere)
    int32 TumblerLevel;
    
    UPROPERTY(EditAnywhere)
    int32 ExoSpineLevel;
    
    UPROPERTY(EditAnywhere)
    int32 GearLevel;
    
    UPROPERTY(EditAnywhere)
    FName PlayerDifficultyStatGroupAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AcquisitionSkillList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PreCompleteAchievementAliasList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MaintainCompleteAchievementList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ItemList;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ItemAmountList;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> ItemLevelList;
    
    UPROPERTY(EditAnywhere)
    FName EquipItem_Gear1;
    
    UPROPERTY(EditAnywhere)
    FName EquipItem_Gear2;
    
    UPROPERTY(EditAnywhere)
    FName EquipItem_Gear3;
    
    UPROPERTY(EditAnywhere)
    FName EquipItem_Gear4;
    
    UPROPERTY(EditAnywhere)
    FName EquipItem_NanoSuit;
    
    UPROPERTY(EditAnywhere)
    FName EquipItem_Protector1;
    
    UPROPERTY(EditAnywhere)
    FName EquipItem_Protector2;
    
    UPROPERTY(EditAnywhere)
    FName EquipItem_Hair1;
    
    UPROPERTY(EditAnywhere)
    FName EquipItem_Accessory1;
    
    UPROPERTY(EditAnywhere)
    FName EquipItem_Accessory2;
    
    UPROPERTY(EditAnywhere)
    FName EquipItem_Drone;
    
    UPROPERTY(EditAnywhere)
    int32 Hair1_ColorIndex;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBActorPlayPresetTableProperty();
};

