#pragma once
#include "CoreMinimal.h"
#include "ESBAlbumType.h"
#include "ESBUIRedDotState.h"
#include "SBAlbumItemData.generated.h"

USTRUCT()
struct FSBAlbumItemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAlbumType> AlbumType;
    
    UPROPERTY(EditAnywhere)
    FString ImagePath;
    
    UPROPERTY(EditAnywhere)
    bool bUnlocked;
    
    UPROPERTY(EditAnywhere)
    bool bUsed;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> RedDotState;
    
    SB_API FSBAlbumItemData();
};

