#pragma once
#include "CoreMinimal.h"
#include "ESBItemCategory.h"
#include "ESBItemRarityType.h"
#include "SBItemNewNoticeListData.generated.h"

USTRUCT()
struct FSBItemNewNoticeListData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ItemName;
    
    UPROPERTY(EditAnywhere)
    int32 ItemCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemCategory> Category;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemRarityType> Rarity;
    
    UPROPERTY(EditAnywhere)
    bool bGet;
    
    UPROPERTY(EditAnywhere)
    bool bNew;
    
    UPROPERTY(EditAnywhere)
    bool ActionFadeOut;
    
    UPROPERTY(EditAnywhere)
    float RemainShowTime;
    
    UPROPERTY(EditAnywhere)
    bool MarkForceFadeOut;
    
    SB_API FSBItemNewNoticeListData();
};

