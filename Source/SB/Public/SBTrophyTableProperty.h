#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBTrophyTableProperty.generated.h"

USTRUCT()
struct FSBTrophyTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName TrophyGroup;
    
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    bool Hidden;
    
    UPROPERTY(EditAnywhere)
    FName grade;
    
    UPROPERTY(EditAnywhere)
    FName ProgressAchievement;
    
    UPROPERTY(EditAnywhere)
    uint32 CompleteValue;
    
    UPROPERTY(EditAnywhere)
    uint32 EpicAchievementsXP;
    
    UPROPERTY(EditAnywhere)
    FName DisplayName_StringKey;
    
    UPROPERTY(EditAnywhere)
    FName DisplayDescription_StringKey;
    
    UPROPERTY(EditAnywhere)
    FString DisplayName_en_us;
    
    UPROPERTY(EditAnywhere)
    FString DisplayDescription_en_us;
    
    UPROPERTY(EditAnywhere)
    FString DisplayName_ko_kr;
    
    UPROPERTY(EditAnywhere)
    FString DisplayDescription_ko_kr;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBTrophyTableProperty();
};

