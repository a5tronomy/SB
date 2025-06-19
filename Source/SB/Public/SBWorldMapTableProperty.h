#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBWorldMapTableProperty.generated.h"

USTRUCT()
struct FSBWorldMapTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName WorldAlias;
    
    UPROPERTY(EditAnywhere)
    FName PrevWorldMapAlias;
    
    UPROPERTY(EditAnywhere)
    FName NextWorldMapAlias;
    
    UPROPERTY(EditAnywhere)
    FName ExceptIsolatedAreaAlias;
    
    UPROPERTY(EditAnywhere)
    FString AssetImage;
    
    UPROPERTY(EditAnywhere)
    FString AssetImageBG;
    
    UPROPERTY(EditAnywhere)
    FString AssetImageTitle;
    
    UPROPERTY(EditAnywhere)
    float InitiaImageSize;
    
    UPROPERTY(EditAnywhere)
    int32 InitialZoomLevel;
    
    UPROPERTY(EditAnywhere)
    float Size1;
    
    UPROPERTY(EditAnywhere)
    float Speed1;
    
    UPROPERTY(EditAnywhere)
    float Size2;
    
    UPROPERTY(EditAnywhere)
    float Speed2;
    
    UPROPERTY(EditAnywhere)
    float Size3;
    
    UPROPERTY(EditAnywhere)
    float Speed3;
    
    UPROPERTY(EditAnywhere)
    FName UnlockAchievementAlias;
    
    SB_API FSBWorldMapTableProperty();
};

