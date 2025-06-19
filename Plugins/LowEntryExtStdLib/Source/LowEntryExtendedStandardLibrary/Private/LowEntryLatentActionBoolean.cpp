#include "LowEntryLatentActionBoolean.h"

ULowEntryLatentActionBoolean::ULowEntryLatentActionBoolean() {
    this->Finished = false;
    this->Result = false;
    this->KeepAliveCount = 1;
}

void ULowEntryLatentActionBoolean::WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool& Result_) {
}

bool ULowEntryLatentActionBoolean::IsDone() {
    return false;
}

void ULowEntryLatentActionBoolean::GetResult(bool& Result_) {
}

void ULowEntryLatentActionBoolean::Done(bool Result_) {
}


