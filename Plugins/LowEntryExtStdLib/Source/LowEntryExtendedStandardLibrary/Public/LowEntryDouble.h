#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryDouble.generated.h"

class ULowEntryDouble;
class ULowEntryLong;

UCLASS(BlueprintType)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryDouble : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> Bytes;
    
    ULowEntryDouble();

    UFUNCTION(BlueprintCallable)
    void SetBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length);
    
    UFUNCTION(BlueprintPure)
    bool LongBytes_LessThan(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintPure)
    bool LongBytes_GreaterThan(ULowEntryLong* Value);
    
    UFUNCTION(BlueprintPure)
    bool Integer_LessThan(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    bool Integer_GreaterThan(const int32 Value);
    
    UFUNCTION(BlueprintPure)
    TArray<uint8> GetBytes();
    
    UFUNCTION(BlueprintCallable)
    void Float_Subtract(const float Value);
    
    UFUNCTION(BlueprintPure)
    bool Float_LessThan(const float Value);
    
    UFUNCTION(BlueprintPure)
    bool Float_GreaterThan(const float Value);
    
    UFUNCTION(BlueprintPure)
    bool Float_Equals(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void Float_Add(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void DoubleBytes_Subtract(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintPure)
    bool DoubleBytes_LessThan(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintPure)
    bool DoubleBytes_GreaterThan(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintPure)
    bool DoubleBytes_Equals(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintCallable)
    void DoubleBytes_Add(ULowEntryDouble* Value);
    
    UFUNCTION(BlueprintPure)
    ULowEntryDouble* CreateClone();
    
    UFUNCTION(BlueprintPure)
    FString CastToString(const int32 MinFractionalDigits);
    
    UFUNCTION(BlueprintPure)
    ULowEntryLong* CastToLongBytes();
    
};

