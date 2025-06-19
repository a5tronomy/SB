#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "ESBLaserBounceType.h"
#include "SBLaserUserData.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USBLaserUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bBounce;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLaserBounceType> BounceType;
    
    UPROPERTY(EditAnywhere)
    float FixDirectionPitch;
    
    UPROPERTY(EditAnywhere)
    float FixDirectionYaw;
    
    UPROPERTY(EditAnywhere)
    float FixDirectionRoll;
    
    USBLaserUserData();

};

