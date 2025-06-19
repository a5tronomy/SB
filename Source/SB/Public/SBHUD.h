#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SBAspectRatioCropBarInfo.h"
#include "SBDebug2DLineInfo.h"
#include "SBHUD.generated.h"

UCLASS(NonTransient)
class SB_API ASBHUD : public AHUD {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bDrawPlayerState;
    
    UPROPERTY(Transient)
    FSBAspectRatioCropBarInfo CropBarInfo;
    
    UPROPERTY(Transient)
    TArray<FSBDebug2DLineInfo> DebugLines;
    
public:
    ASBHUD(const FObjectInitializer& ObjectInitializer);

};

