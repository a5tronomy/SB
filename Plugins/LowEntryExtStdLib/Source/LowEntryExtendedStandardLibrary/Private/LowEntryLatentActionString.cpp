#include "LowEntryLatentActionString.h"

ULowEntryLatentActionString::ULowEntryLatentActionString() {
    this->Finished = false;
    this->KeepAliveCount = 1;
}

void ULowEntryLatentActionString::WaitTillDone(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FString& Result_) {
}

bool ULowEntryLatentActionString::IsDone() {
    return false;
}

void ULowEntryLatentActionString::GetResult(FString& Result_) {
}

void ULowEntryLatentActionString::Done(const FString& Result_) {
}


