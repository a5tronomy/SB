#pragma once
#include "CoreMinimal.h"
#include "ESBAcquisitionSkillType.h"
#include "ESBAcquisitionSkillVisibleCondition.h"
#include "ESBSkillEnergyVisibleType.h"
#include "ESBSkillImportanceType.h"
#include "ESBSkillSlotType.h"
#include "SBTablePropertyBase.h"
#include "SBAcquisitionSkillTableProperty.generated.h"

USTRUCT()
struct FSBAcquisitionSkillTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAcquisitionSkillType> Type;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillSlotType> UsableSlot;
    
    UPROPERTY(EditAnywhere)
    FName ConsumeItemAlias;
    
    UPROPERTY(EditAnywhere)
    int32 ConsumeItemAmount;
    
    UPROPERTY(EditAnywhere)
    int32 ConsumeSP;
    
    UPROPERTY(EditAnywhere)
    bool bExceptReset;
    
    UPROPERTY(EditAnywhere)
    FName RequiredCompleteAchievement;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> RequiredAcquisitionSkillAliasArray;
    
    UPROPERTY(EditAnywhere)
    bool OrCheckRequiredAcquisition;
    
    UPROPERTY(EditAnywhere)
    ESBAcquisitionSkillVisibleCondition VisibleCondition;
    
    UPROPERTY(EditAnywhere)
    bool AcquisitionOnCreated;
    
    UPROPERTY(EditAnywhere)
    FName PassiveSkillFunctionAlias;
    
    UPROPERTY(EditAnywhere)
    FName SkillIconName;
    
    UPROPERTY(EditAnywhere)
    FString SkillPreviewPath;
    
    UPROPERTY(EditAnywhere)
    ESBSkillEnergyVisibleType SkillEnergyVisibleType;
    
    UPROPERTY(EditAnywhere)
    ESBSkillImportanceType SkillImportanceType;
    
    UPROPERTY(EditAnywhere)
    FName SkillTreeAlias;
    
    UPROPERTY(EditAnywhere)
    FName SkillSlotAlias;
    
    UPROPERTY(EditAnywhere)
    FName AchievementTag;
    
    UPROPERTY()
    FString TitleName;
    
    UPROPERTY()
    FString Description;
    
    UPROPERTY(EditAnywhere)
    FString Command;
    
    UPROPERTY(EditAnywhere)
    FName SkillPriorityAlias;
    
    UPROPERTY(EditAnywhere)
    FName SkillCommandAlias;
    
    UPROPERTY(EditAnywhere)
    FName TrainingRoom;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBAcquisitionSkillTableProperty();
};

