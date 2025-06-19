#include "LowEntryLatentActionNone.h"

ULowEntryLatentActionNone::ULowEntryLatentActionNone() {
    this->Finished = false;
    this->KeepAliveCount = 1;
}

void ULowEntryLatentActionNone::WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

bool ULowEntryLatentActionNone::IsDone() {
    return false;
}

void ULowEntryLatentActionNone::Done() {
}


