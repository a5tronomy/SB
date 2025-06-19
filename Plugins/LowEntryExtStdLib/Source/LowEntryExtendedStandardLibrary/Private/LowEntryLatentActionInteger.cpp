#include "LowEntryLatentActionInteger.h"

ULowEntryLatentActionInteger::ULowEntryLatentActionInteger() {
    this->Finished = false;
    this->Result = 0;
    this->KeepAliveCount = 1;
}

void ULowEntryLatentActionInteger::WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32& Result_) {
}

bool ULowEntryLatentActionInteger::IsDone() {
    return false;
}

void ULowEntryLatentActionInteger::GetResult(int32& Result_) {
}

void ULowEntryLatentActionInteger::Done(int32 Result_) {
}


