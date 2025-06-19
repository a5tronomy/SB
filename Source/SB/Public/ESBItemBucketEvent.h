#pragma once
#include "CoreMinimal.h"
#include "ESBItemBucketEvent.generated.h"

UENUM()
enum ESBItemBucketEvent {
    ESBItemBucketEvent_None = -1,
    ESBItemBucketEvent_Load = 0,
    ESBItemBucketEvent_Add,
    ESBItemBucketEvent_Remove,
    ESBItemBucketEvent_Consume,
};

