#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputCoreTypes.h"
#include "ESBTextureStyleType.h"
#include "SBTextureStyleInfo.h"
#include "SBTextureStyleSetData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class SB_API USBTextureStyleSetData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBTextureStyleInfo> actions;
    
    UPROPERTY(EditAnywhere)
    TMap<FKey, FSBTextureStyleInfo> Keys;
    
    USBTextureStyleSetData();

    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTextureFromKey(const FKey& InKey, TEnumAsByte<ESBTextureStyleType> InStyleType);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTextureFromAction(const FName& InAction, TEnumAsByte<ESBTextureStyleType> InStyleType);
    
};

