#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryBitDataWriter.generated.h"

class ULowEntryDouble;
class ULowEntryLong;

UCLASS(BlueprintType)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryBitDataWriter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> Bytes;
    
    UPROPERTY()
    uint8 CurrentByte;
    
    UPROPERTY()
    int32 CurrentBytePosition;
    
    ULowEntryBitDataWriter();

    UFUNCTION(BlueprintCallable)
    void AddStringUtf8Array(const TArray<FString>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddStringUtf8(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddPositiveInteger3Array(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddPositiveInteger3(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddPositiveInteger2Array(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddPositiveInteger2(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddPositiveInteger1Array(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddPositiveInteger1(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddLongBytesArray(const TArray<ULowEntryLong*>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddLongBytes(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintCallable)
    void AddIntegerMostSignificantBits(const int32 Value, int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    void AddIntegerLeastSignificantBits(const int32 Value, const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    void AddIntegerArrayMostSignificantBits(const TArray<int32>& Value, const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    void AddIntegerArrayLeastSignificantBits(const TArray<int32>& Value, const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    void AddIntegerArray(const TArray<int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddInteger(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFloatArray(const TArray<float>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddFloat(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddDoubleBytesArray(const TArray<ULowEntryDouble*>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddDoubleBytes(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintCallable)
    void AddByteMostSignificantBits(const uint8 Value, const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    void AddByteLeastSignificantBits(const uint8 Value, const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    void AddByteArrayMostSignificantBits(const TArray<uint8>& Value, const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    void AddByteArrayLeastSignificantBits(const TArray<uint8>& Value, const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    void AddByteArray(const TArray<uint8>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddByte(const uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddBooleanArray(const TArray<bool>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddBoolean(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void AddBitArray(const TArray<bool>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddBit(const bool Value);
    
};

