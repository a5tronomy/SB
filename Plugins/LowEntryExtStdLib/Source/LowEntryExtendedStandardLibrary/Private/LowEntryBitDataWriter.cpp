#include "LowEntryBitDataWriter.h"

ULowEntryBitDataWriter::ULowEntryBitDataWriter() {
    this->CurrentByte = 0;
    this->CurrentBytePosition = 0;
}

void ULowEntryBitDataWriter::AddStringUtf8Array(const TArray<FString>& Value) {
}

void ULowEntryBitDataWriter::AddStringUtf8(const FString& Value) {
}

void ULowEntryBitDataWriter::AddPositiveInteger3Array(const TArray<int32>& Value) {
}

void ULowEntryBitDataWriter::AddPositiveInteger3(const int32 Value) {
}

void ULowEntryBitDataWriter::AddPositiveInteger2Array(const TArray<int32>& Value) {
}

void ULowEntryBitDataWriter::AddPositiveInteger2(const int32 Value) {
}

void ULowEntryBitDataWriter::AddPositiveInteger1Array(const TArray<int32>& Value) {
}

void ULowEntryBitDataWriter::AddPositiveInteger1(const int32 Value) {
}

void ULowEntryBitDataWriter::AddLongBytesArray(const TArray<ULowEntryLong*>& Value) {
}

void ULowEntryBitDataWriter::AddLongBytes(ULowEntryLong* Value) {
}

void ULowEntryBitDataWriter::AddIntegerMostSignificantBits(const int32 Value, int32 BitCount) {
}

void ULowEntryBitDataWriter::AddIntegerLeastSignificantBits(const int32 Value, const int32 BitCount) {
}

void ULowEntryBitDataWriter::AddIntegerArrayMostSignificantBits(const TArray<int32>& Value, const int32 BitCount) {
}

void ULowEntryBitDataWriter::AddIntegerArrayLeastSignificantBits(const TArray<int32>& Value, const int32 BitCount) {
}

void ULowEntryBitDataWriter::AddIntegerArray(const TArray<int32>& Value) {
}

void ULowEntryBitDataWriter::AddInteger(const int32 Value) {
}

void ULowEntryBitDataWriter::AddFloatArray(const TArray<float>& Value) {
}

void ULowEntryBitDataWriter::AddFloat(const float Value) {
}

void ULowEntryBitDataWriter::AddDoubleBytesArray(const TArray<ULowEntryDouble*>& Value) {
}

void ULowEntryBitDataWriter::AddDoubleBytes(ULowEntryDouble* Value) {
}

void ULowEntryBitDataWriter::AddByteMostSignificantBits(const uint8 Value, const int32 BitCount) {
}

void ULowEntryBitDataWriter::AddByteLeastSignificantBits(const uint8 Value, const int32 BitCount) {
}

void ULowEntryBitDataWriter::AddByteArrayMostSignificantBits(const TArray<uint8>& Value, const int32 BitCount) {
}

void ULowEntryBitDataWriter::AddByteArrayLeastSignificantBits(const TArray<uint8>& Value, const int32 BitCount) {
}

void ULowEntryBitDataWriter::AddByteArray(const TArray<uint8>& Value) {
}

void ULowEntryBitDataWriter::AddByte(const uint8 Value) {
}

void ULowEntryBitDataWriter::AddBooleanArray(const TArray<bool>& Value) {
}

void ULowEntryBitDataWriter::AddBoolean(const bool Value) {
}

void ULowEntryBitDataWriter::AddBitArray(const TArray<bool>& Value) {
}

void ULowEntryBitDataWriter::AddBit(const bool Value) {
}


