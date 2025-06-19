#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBCreditTableProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBCreditTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName VoiceLanguage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CreditType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Arg1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Arg2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Arg3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Arg4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Arg5;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Arg6;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Arg7;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Arg8;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Arg9;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Arg10;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCreditTableProperty();
};

