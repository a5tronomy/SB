#pragma once
#include "CoreMinimal.h"
#include "ESBActorCalculatedStatType.h"
#include "ESBActorStatTextType.h"
#include "ESBActorStatType.h"
#include "SBTablePropertyBase.h"
#include "SBActorStatTextTableProperty.generated.h"

USTRUCT()
struct FSBActorStatTextTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatType> StatType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorCalculatedStatType> CalculatedStatType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorStatTextType> TextType;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBActorStatTextTableProperty();
};

