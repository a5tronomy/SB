#pragma once
#include "CoreMinimal.h"
#include "SBAlias.generated.h"

USTRUCT(BlueprintType)
struct FSBAlias {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 Type;
    
    UPROPERTY(EditAnywhere)
    bool bReadOnly;
    
    UPROPERTY(EditAnywhere)
    bool bCustom_BrowseButton;
    
    UPROPERTY(EditAnywhere)
    FName Custom_BrowseClassName;
    
    SB_API FSBAlias();
};

