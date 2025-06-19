#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBCharacterDSocketInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterDSocketInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(EditAnywhere)
    FVector RelativeScale;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FName BoneName;
    
    SB_API FSBCharacterDSocketInfo();
};

