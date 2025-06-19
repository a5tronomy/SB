#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryByteDataWriter.generated.h"

class ULowEntryDouble;
class ULowEntryLong;

UCLASS(BlueprintType)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryByteDataWriter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> Bytes;
    
    ULowEntryByteDataWriter();

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
    void AddByteArray(const TArray<uint8>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddByte(const uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddBooleanArray(const TArray<bool>& Value);
    
    UFUNCTION(BlueprintCallable)
    void AddBoolean(const bool Value);
    
};

