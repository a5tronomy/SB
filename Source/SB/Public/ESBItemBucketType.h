#pragma once
#include "CoreMinimal.h"
#include "ESBItemBucketType.generated.h"

UENUM()
enum ESBItemBucketType {
    ESBItemBucketType_None,
    ESBItemBucketType_Inventory,
    ESBItemBucketType_Zone,
    ESBItemBucketType_World,
};

