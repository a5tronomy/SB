#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBResourceCacheSequenceTableProperty.generated.h"

USTRUCT()
struct FSBResourceCacheSequenceTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Zone;
    
    UPROPERTY(EditAnywhere)
    FName QuestEpic;
    
    UPROPERTY(EditAnywhere)
    FName CustomGroup1;
    
    UPROPERTY(EditAnywhere)
    FString AssetPath;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBResourceCacheSequenceTableProperty();
};

