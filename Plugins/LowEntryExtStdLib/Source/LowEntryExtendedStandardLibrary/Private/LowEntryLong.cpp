#include "LowEntryLong.h"

ULowEntryLong::ULowEntryLong() {
    this->Bytes.AddDefaulted(8);
}

void ULowEntryLong::SetBytes(const TArray<uint8>& ByteArray, int32 Index, int32 Length) {
}

void ULowEntryLong::LongBytes_Subtract(ULowEntryLong* Value) {
}

bool ULowEntryLong::LongBytes_LessThan(ULowEntryLong* Value) {
    return false;
}

bool ULowEntryLong::LongBytes_GreaterThan(ULowEntryLong* Value) {
    return false;
}

bool ULowEntryLong::LongBytes_Equals(ULowEntryLong* Value) {
    return false;
}

void ULowEntryLong::LongBytes_Add(ULowEntryLong* Value) {
}

void ULowEntryLong::Integer_Subtract(const int32 Value) {
}

bool ULowEntryLong::Integer_LessThan(const int32 Value) {
    return false;
}

bool ULowEntryLong::Integer_GreaterThan(const int32 Value) {
    return false;
}

bool ULowEntryLong::Integer_Equals(const int32 Value) {
    return false;
}

void ULowEntryLong::Integer_Add(const int32 Value) {
}

TArray<uint8> ULowEntryLong::GetBytes() {
    return TArray<uint8>();
}

bool ULowEntryLong::Float_LessThan(const float Value) {
    return false;
}

bool ULowEntryLong::Float_GreaterThan(const float Value) {
    return false;
}

bool ULowEntryLong::DoubleBytes_LessThan(ULowEntryDouble* Value) {
    return false;
}

bool ULowEntryLong::DoubleBytes_GreaterThan(ULowEntryDouble* Value) {
    return false;
}

ULowEntryLong* ULowEntryLong::CreateClone() {
    return NULL;
}

FString ULowEntryLong::CastToString() {
    return TEXT("");
}

ULowEntryDouble* ULowEntryLong::CastToDoubleBytes() {
    return NULL;
}


