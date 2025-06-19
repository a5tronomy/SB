#include "LowEntryBitDataReader.h"

ULowEntryBitDataReader::ULowEntryBitDataReader() {
    this->position = 0;
    this->CurrentByte = 0;
    this->CurrentBytePosition = 0;
}

void ULowEntryBitDataReader::SetPosition(const int32 Position_) {
}

void ULowEntryBitDataReader::Reset() {
}

int32 ULowEntryBitDataReader::Remaining() {
    return 0;
}

TArray<FString> ULowEntryBitDataReader::GetStringUtf8Array() {
    return TArray<FString>();
}

FString ULowEntryBitDataReader::GetStringUtf8() {
    return TEXT("");
}

TArray<int32> ULowEntryBitDataReader::GetPositiveInteger3Array() {
    return TArray<int32>();
}

int32 ULowEntryBitDataReader::GetPositiveInteger3() {
    return 0;
}

TArray<int32> ULowEntryBitDataReader::GetPositiveInteger2Array() {
    return TArray<int32>();
}

int32 ULowEntryBitDataReader::GetPositiveInteger2() {
    return 0;
}

TArray<int32> ULowEntryBitDataReader::GetPositiveInteger1Array() {
    return TArray<int32>();
}

int32 ULowEntryBitDataReader::GetPositiveInteger1() {
    return 0;
}

int32 ULowEntryBitDataReader::GetPosition() {
    return 0;
}

TArray<ULowEntryLong*> ULowEntryBitDataReader::GetLongBytesArray() {
    return TArray<ULowEntryLong*>();
}

ULowEntryLong* ULowEntryBitDataReader::GetLongBytes() {
    return NULL;
}

int32 ULowEntryBitDataReader::GetIntegerMostSignificantBits(int32 BitCount) {
    return 0;
}

int32 ULowEntryBitDataReader::GetIntegerLeastSignificantBits(const int32 BitCount) {
    return 0;
}

TArray<int32> ULowEntryBitDataReader::GetIntegerArrayMostSignificantBits(const int32 BitCount) {
    return TArray<int32>();
}

TArray<int32> ULowEntryBitDataReader::GetIntegerArrayLeastSignificantBits(const int32 BitCount) {
    return TArray<int32>();
}

TArray<int32> ULowEntryBitDataReader::GetIntegerArray() {
    return TArray<int32>();
}

int32 ULowEntryBitDataReader::GetInteger() {
    return 0;
}

TArray<float> ULowEntryBitDataReader::GetFloatArray() {
    return TArray<float>();
}

float ULowEntryBitDataReader::GetFloat() {
    return 0.0f;
}

TArray<ULowEntryDouble*> ULowEntryBitDataReader::GetDoubleBytesArray() {
    return TArray<ULowEntryDouble*>();
}

ULowEntryDouble* ULowEntryBitDataReader::GetDoubleBytes() {
    return NULL;
}

ULowEntryBitDataReader* ULowEntryBitDataReader::GetClone() {
    return NULL;
}

uint8 ULowEntryBitDataReader::GetByteMostSignificantBits(const int32 BitCount) {
    return 0;
}

uint8 ULowEntryBitDataReader::GetByteLeastSignificantBits(const int32 BitCount) {
    return 0;
}

TArray<uint8> ULowEntryBitDataReader::GetByteArrayMostSignificantBits(const int32 BitCount) {
    return TArray<uint8>();
}

TArray<uint8> ULowEntryBitDataReader::GetByteArrayLeastSignificantBits(const int32 BitCount) {
    return TArray<uint8>();
}

TArray<uint8> ULowEntryBitDataReader::GetByteArray() {
    return TArray<uint8>();
}

uint8 ULowEntryBitDataReader::GetByte() {
    return 0;
}

TArray<bool> ULowEntryBitDataReader::GetBooleanArray() {
    return TArray<bool>();
}

bool ULowEntryBitDataReader::GetBoolean() {
    return false;
}

TArray<bool> ULowEntryBitDataReader::GetBitArray() {
    return TArray<bool>();
}

bool ULowEntryBitDataReader::GetBit() {
    return false;
}

void ULowEntryBitDataReader::Empty() {
}


