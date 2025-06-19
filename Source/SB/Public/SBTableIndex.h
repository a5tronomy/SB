#pragma once
#include "CoreMinimal.h"
#include "SBTableIndex.generated.h"

USTRUCT()
struct FSBTableIndex {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Index;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 Type;
    
    UPROPERTY(EditAnywhere, Transient)
    FName ColumnName;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 IndexType;
    
    UPROPERTY(EditAnywhere)
    bool bReadOnly;
    
    UPROPERTY(EditAnywhere)
    bool bCustom_BrowseButton;
    
    UPROPERTY(EditAnywhere)
    FName Custom_BrowseClassName;
    
    SB_API FSBTableIndex();
};

