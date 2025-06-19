#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBPuzzleStringArrayTableProperty.generated.h"

USTRUCT()
struct FSBPuzzleStringArrayTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> StringArray;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBPuzzleStringArrayTableProperty();
};

