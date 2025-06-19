#pragma once
#include "CoreMinimal.h"
#include "LiveLinkControllerBase.h"
#include "LiveLinkMvnTransformController.generated.h"

UCLASS(EditInlineNew)
class LIVELINKMVNPLUGIN_API ULiveLinkMvnTransformController : public ULiveLinkControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SegmentIndex;
    
    ULiveLinkMvnTransformController();

};

