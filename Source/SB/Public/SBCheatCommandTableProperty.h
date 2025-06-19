#pragma once
#include "CoreMinimal.h"
#include "ESBConditionCheckType.h"
#include "SBTablePropertyBase.h"
#include "SBCheatCommandTableProperty.generated.h"

USTRUCT()
struct FSBCheatCommandTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> Distribution;
    
    UPROPERTY(EditAnywhere)
    FName Tab;
    
    UPROPERTY(EditAnywhere)
    FName TabName;
    
    UPROPERTY(EditAnywhere)
    FName Category;
    
    UPROPERTY(EditAnywhere)
    FName CategoryName;
    
    UPROPERTY(EditAnywhere)
    FString CategoryStringKey;
    
    UPROPERTY(EditAnywhere)
    FString Desc;
    
    UPROPERTY(EditAnywhere)
    FString DescStringKey;
    
    UPROPERTY(EditAnywhere)
    FName Group;
    
    UPROPERTY(EditAnywhere)
    FString Command;
    
    UPROPERTY(EditAnywhere)
    bool IgnoreNotify;
    
    UPROPERTY(EditAnywhere)
    bool bNoGuaranteeProgressExec;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCheatCommandTableProperty();
};

