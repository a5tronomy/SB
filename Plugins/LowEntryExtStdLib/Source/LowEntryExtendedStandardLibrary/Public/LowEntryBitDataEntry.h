#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryBitDataEntry.generated.h"

class ULowEntryDouble;
class ULowEntryLong;

UCLASS()
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryBitDataEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 Type;
    
    UPROPERTY()
    uint8 ByteValue;
    
    UPROPERTY()
    int32 IntegerValue;
    
    UPROPERTY()
    ULowEntryLong* LongBytesValue;
    
    UPROPERTY()
    float FloatValue;
    
    UPROPERTY()
    ULowEntryDouble* DoubleBytesValue;
    
    UPROPERTY()
    bool BooleanValue;
    
    UPROPERTY()
    FString StringUtf8Value;
    
    UPROPERTY()
    TArray<uint8> ByteArrayValue;
    
    UPROPERTY()
    TArray<int32> IntegerArrayValue;
    
    UPROPERTY()
    TArray<ULowEntryLong*> LongBytesArrayValue;
    
    UPROPERTY()
    TArray<float> FloatArrayValue;
    
    UPROPERTY()
    TArray<ULowEntryDouble*> DoubleBytesArrayValue;
    
    UPROPERTY()
    TArray<bool> BooleanArrayValue;
    
    UPROPERTY()
    TArray<FString> StringUtf8ArrayValue;
    
    ULowEntryBitDataEntry();

};

