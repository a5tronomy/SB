#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBEffectVolumePropTableProperty.generated.h"

USTRUCT()
struct FSBEffectVolumePropTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount01;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList01;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount02;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList02;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount03;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList03;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount04;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList04;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount05;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList05;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount06;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList06;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount07;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList07;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount08;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList08;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount09;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList09;
    
    UPROPERTY(EditAnywhere)
    int32 ExecuteDeadCount10;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeadCountEffectAliasList10;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEffectVolumePropTableProperty();
};

