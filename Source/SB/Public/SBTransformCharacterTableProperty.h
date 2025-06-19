#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBTransformCharacterTableProperty.generated.h"

USTRUCT()
struct FSBTransformCharacterTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    uint32 Score;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAlias1;
    
    UPROPERTY(EditAnywhere)
    uint32 Weight1;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAlias2;
    
    UPROPERTY(EditAnywhere)
    uint32 Weight2;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAlias3;
    
    UPROPERTY(EditAnywhere)
    uint32 Weight3;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAlias4;
    
    UPROPERTY(EditAnywhere)
    uint32 Weight4;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAlias5;
    
    UPROPERTY(EditAnywhere)
    uint32 Weight5;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAlias6;
    
    UPROPERTY(EditAnywhere)
    uint32 Weight6;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAlias7;
    
    UPROPERTY(EditAnywhere)
    uint32 Weight7;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAlias8;
    
    UPROPERTY(EditAnywhere)
    uint32 Weight8;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAlias9;
    
    UPROPERTY(EditAnywhere)
    uint32 Weight9;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAlias10;
    
    UPROPERTY(EditAnywhere)
    uint32 Weight10;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBTransformCharacterTableProperty();
};

