#pragma once
#include "CoreMinimal.h"
#include "ESBAlbumType.h"
#include "SBTablePropertyBase.h"
#include "SBAlbumTableProperty.generated.h"

USTRUCT()
struct FSBAlbumTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName EntityAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAlbumType> AlbumType;
    
    UPROPERTY(EditAnywhere)
    bool PopupWhenUnlock;
    
    UPROPERTY(EditAnywhere)
    bool PauseWhenPopup;
    
    UPROPERTY(EditAnywhere)
    FString GroupName;
    
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    FString Desc;
    
    UPROPERTY(EditAnywhere)
    FString Asset2DIcon;
    
    UPROPERTY(EditAnywhere)
    FString Asset2DImage;
    
    UPROPERTY(EditAnywhere)
    FName AchievementUnlocked;
    
    UPROPERTY(EditAnywhere)
    FName AchievementUsed;
    
    UPROPERTY(EditAnywhere)
    FName AchievementPopup;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroupDisplay;
    
    SB_API FSBAlbumTableProperty();
};

