#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SpiderNavigationDataHeader.h"
#include "SpiderNavigationPointData.h"
#include "SBSpiderNavigationDataAsset.generated.h"

UCLASS()
class SB_API USBSpiderNavigationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSpiderNavigationDataHeader Header;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSpiderNavigationPointData> PointDatas;
    
    USBSpiderNavigationDataAsset();

};

