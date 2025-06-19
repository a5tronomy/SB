#pragma once
#include "CoreMinimal.h"
#include "SBUILogicEventKey.generated.h"

USTRUCT()
struct FSBUILogicEventKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    int32 UMGWidgetType;
    
    UPROPERTY(EditAnywhere, Transient)
    int32 UMGWidgetEvent;
    
    UPROPERTY(EditAnywhere, Transient)
    FName UMGWidgetName;
    
    UPROPERTY(EditAnywhere, Transient)
    FString UMGWidgetActionPath;
    
    UPROPERTY(Transient)
    uint32 cacheHash;
    
    SB_API FSBUILogicEventKey();
};

