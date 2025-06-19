#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBActivityTableProperty.generated.h"

USTRUCT()
struct FSBActivityTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FName Type;
    
    UPROPERTY(EditAnywhere)
    bool IsRequiredForCompletion;
    
    UPROPERTY(EditAnywhere)
    FName StartActivityAchievement;
    
    UPROPERTY(EditAnywhere)
    FName EndActivityAchievement;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> LinkActivities;
    
    UPROPERTY(EditAnywhere)
    FName SubCategory;
    
    UPROPERTY(EditAnywhere)
    FName DisplayName_StringKey;
    
    UPROPERTY(EditAnywhere)
    FName DisplayDescription_StringKey;
    
    UPROPERTY(EditAnywhere)
    FName DisplayName_en_us;
    
    UPROPERTY(EditAnywhere)
    FName DisplayDescription_en_us;
    
    UPROPERTY(EditAnywhere)
    FName DisplayName_ko_kr;
    
    UPROPERTY(EditAnywhere)
    FName DisplayDescription_ko_kr;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBActivityTableProperty();
};

