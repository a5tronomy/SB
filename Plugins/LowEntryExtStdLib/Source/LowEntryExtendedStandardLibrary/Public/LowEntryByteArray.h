#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryByteArray.generated.h"

UCLASS()
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryByteArray : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> ByteArray;
    
    ULowEntryByteArray();

};

