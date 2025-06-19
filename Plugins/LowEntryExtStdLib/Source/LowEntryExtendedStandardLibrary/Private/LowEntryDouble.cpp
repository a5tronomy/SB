#include "LowEntryDouble.h"

ULowEntryDouble::ULowEntryDouble() {
    this->Bytes.AddDefaulted(8);
}

void ULowEntryDouble::SetBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
}

bool ULowEntryDouble::LongBytes_LessThan(ULowEntryLong* Value) {
    return false;
}

bool ULowEntryDouble::LongBytes_GreaterThan(ULowEntryLong* Value) {
    return false;
}

bool ULowEntryDouble::Integer_LessThan(const int32 Value) {
    return false;
}

bool ULowEntryDouble::Integer_GreaterThan(const int32 Value) {
    return false;
}

TArray<uint8> ULowEntryDouble::GetBytes() {
    return TArray<uint8>();
}

void ULowEntryDouble::Float_Subtract(const float Value) {
}

bool ULowEntryDouble::Float_LessThan(const float Value) {
    return false;
}

bool ULowEntryDouble::Float_GreaterThan(const float Value) {
    return false;
}

bool ULowEntryDouble::Float_Equals(const float Value) {
    return false;
}

void ULowEntryDouble::Float_Add(const float Value) {
}

void ULowEntryDouble::DoubleBytes_Subtract(ULowEntryDouble* Value) {
}

bool ULowEntryDouble::DoubleBytes_LessThan(ULowEntryDouble* Value) {
    return false;
}

bool ULowEntryDouble::DoubleBytes_GreaterThan(ULowEntryDouble* Value) {
    return false;
}

bool ULowEntryDouble::DoubleBytes_Equals(ULowEntryDouble* Value) {
    return false;
}

void ULowEntryDouble::DoubleBytes_Add(ULowEntryDouble* Value) {
}

ULowEntryDouble* ULowEntryDouble::CreateClone() {
    return NULL;
}

FString ULowEntryDouble::CastToString(const int32 MinFractionalDigits) {
    return TEXT("");
}

ULowEntryLong* ULowEntryDouble::CastToLongBytes() {
    return NULL;
}


