#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBEffectCombinationTableProperty.generated.h"

USTRUCT()
struct FSBEffectCombinationTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    uint32 Priority;
    
    UPROPERTY(EditAnywhere)
    FName Effect1;
    
    UPROPERTY(EditAnywhere)
    uint32 Effect1Count;
    
    UPROPERTY(EditAnywhere)
    bool bKeepEffect1;
    
    UPROPERTY(EditAnywhere)
    FName Effect2;
    
    UPROPERTY(EditAnywhere)
    uint32 Effect2Count;
    
    UPROPERTY(EditAnywhere)
    bool bKeepEffect2;
    
    UPROPERTY(EditAnywhere)
    FName Effect3;
    
    UPROPERTY(EditAnywhere)
    uint32 Effect3Count;
    
    UPROPERTY(EditAnywhere)
    bool bKeepEffect3;
    
    UPROPERTY(EditAnywhere)
    FName Effect4;
    
    UPROPERTY(EditAnywhere)
    uint32 Effect4Count;
    
    UPROPERTY(EditAnywhere)
    bool bKeepEffect4;
    
    UPROPERTY(EditAnywhere)
    FName Effect5;
    
    UPROPERTY(EditAnywhere)
    uint32 Effect5Count;
    
    UPROPERTY(EditAnywhere)
    bool bKeepEffect5;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ResultEffectAliasArray;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEffectCombinationTableProperty();
};

