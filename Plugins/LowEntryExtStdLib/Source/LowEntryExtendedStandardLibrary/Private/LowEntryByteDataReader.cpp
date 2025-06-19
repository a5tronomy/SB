#include "LowEntryByteDataReader.h"

ULowEntryByteDataReader::ULowEntryByteDataReader() {
    this->position = 0;
}

void ULowEntryByteDataReader::SetPosition(const int32 Position_) {
}

void ULowEntryByteDataReader::Reset() {
}

int32 ULowEntryByteDataReader::Remaining() {
    return 0;
}

TArray<FString> ULowEntryByteDataReader::GetStringUtf8Array() {
    return TArray<FString>();
}

FString ULowEntryByteDataReader::GetStringUtf8() {
    return TEXT("");
}

TArray<int32> ULowEntryByteDataReader::GetPositiveInteger3Array() {
    return TArray<int32>();
}

int32 ULowEntryByteDataReader::GetPositiveInteger3() {
    return 0;
}

TArray<int32> ULowEntryByteDataReader::GetPositiveInteger2Array() {
    return TArray<int32>();
}

int32 ULowEntryByteDataReader::GetPositiveInteger2() {
    return 0;
}

TArray<int32> ULowEntryByteDataReader::GetPositiveInteger1Array() {
    return TArray<int32>();
}

int32 ULowEntryByteDataReader::GetPositiveInteger1() {
    return 0;
}

int32 ULowEntryByteDataReader::GetPosition() {
    return 0;
}

TArray<ULowEntryLong*> ULowEntryByteDataReader::GetLongBytesArray() {
    return TArray<ULowEntryLong*>();
}

ULowEntryLong* ULowEntryByteDataReader::GetLongBytes() {
    return NULL;
}

TArray<int32> ULowEntryByteDataReader::GetIntegerArray() {
    return TArray<int32>();
}

int32 ULowEntryByteDataReader::GetInteger() {
    return 0;
}

TArray<float> ULowEntryByteDataReader::GetFloatArray() {
    return TArray<float>();
}

float ULowEntryByteDataReader::GetFloat() {
    return 0.0f;
}

TArray<ULowEntryDouble*> ULowEntryByteDataReader::GetDoubleBytesArray() {
    return TArray<ULowEntryDouble*>();
}

ULowEntryDouble* ULowEntryByteDataReader::GetDoubleBytes() {
    return NULL;
}

ULowEntryByteDataReader* ULowEntryByteDataReader::GetClone() {
    return NULL;
}

TArray<uint8> ULowEntryByteDataReader::GetByteArray() {
    return TArray<uint8>();
}

uint8 ULowEntryByteDataReader::GetByte() {
    return 0;
}

TArray<bool> ULowEntryByteDataReader::GetBooleanArray() {
    return TArray<bool>();
}

bool ULowEntryByteDataReader::GetBoolean() {
    return false;
}

void ULowEntryByteDataReader::Empty() {
}


