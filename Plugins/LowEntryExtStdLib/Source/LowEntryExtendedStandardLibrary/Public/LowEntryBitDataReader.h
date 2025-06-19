#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryBitDataReader.generated.h"

class ULowEntryBitDataReader;
class ULowEntryDouble;
class ULowEntryLong;

UCLASS(BlueprintType)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryBitDataReader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> Bytes;
    
    UPROPERTY()
    int32 position;
    
    UPROPERTY()
    uint8 CurrentByte;
    
    UPROPERTY()
    int32 CurrentBytePosition;
    
    ULowEntryBitDataReader();

    UFUNCTION(BlueprintCallable)
    void SetPosition(const int32 Position_);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintPure)
    int32 Remaining();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetStringUtf8Array();
    
    UFUNCTION(BlueprintCallable)
    FString GetStringUtf8();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPositiveInteger3Array();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPositiveInteger3();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPositiveInteger2Array();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPositiveInteger2();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPositiveInteger1Array();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPositiveInteger1();
    
    UFUNCTION(BlueprintPure)
    int32 GetPosition();
    
    UFUNCTION(BlueprintCallable)
    TArray<ULowEntryLong*> GetLongBytesArray();
    
    UFUNCTION(BlueprintCallable)
    ULowEntryLong* GetLongBytes();
    
    UFUNCTION(BlueprintCallable)
    int32 GetIntegerMostSignificantBits(int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    int32 GetIntegerLeastSignificantBits(const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetIntegerArrayMostSignificantBits(const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetIntegerArrayLeastSignificantBits(const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetIntegerArray();
    
    UFUNCTION(BlueprintCallable)
    int32 GetInteger();
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetFloatArray();
    
    UFUNCTION(BlueprintCallable)
    float GetFloat();
    
    UFUNCTION(BlueprintCallable)
    TArray<ULowEntryDouble*> GetDoubleBytesArray();
    
    UFUNCTION(BlueprintCallable)
    ULowEntryDouble* GetDoubleBytes();
    
    UFUNCTION(BlueprintCallable)
    ULowEntryBitDataReader* GetClone();
    
    UFUNCTION(BlueprintCallable)
    uint8 GetByteMostSignificantBits(const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    uint8 GetByteLeastSignificantBits(const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetByteArrayMostSignificantBits(const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetByteArrayLeastSignificantBits(const int32 BitCount);
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetByteArray();
    
    UFUNCTION(BlueprintCallable)
    uint8 GetByte();
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetBooleanArray();
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolean();
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetBitArray();
    
    UFUNCTION(BlueprintCallable)
    bool GetBit();
    
    UFUNCTION(BlueprintCallable)
    void Empty();
    
};

