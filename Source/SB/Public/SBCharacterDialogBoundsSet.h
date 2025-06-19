#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBCharacterDialogBoundsSetInfo.h"
#include "SBCharacterDialogBoundsSet.generated.h"

UCLASS()
class SB_API USBCharacterDialogBoundsSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FSBCharacterDialogBoundsSetInfo> DialogBoundsMap;
    
    USBCharacterDialogBoundsSet();

};

