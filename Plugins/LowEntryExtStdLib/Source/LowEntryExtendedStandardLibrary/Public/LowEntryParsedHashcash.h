#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "LowEntryParsedHashcash.generated.h"

UCLASS(BlueprintType)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryParsedHashcash : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool Valid;
    
    UPROPERTY()
    FString Resource;
    
    UPROPERTY()
    FDateTime Date;
    
    UPROPERTY()
    int32 Bits;
    
    ULowEntryParsedHashcash();

    UFUNCTION(BlueprintPure)
    FString ToString();
    
    UFUNCTION(BlueprintPure)
    FString GetResource();
    
    UFUNCTION(BlueprintPure)
    FDateTime GetDate();
    
    UFUNCTION(BlueprintPure)
    int32 GetBits();
    
};

