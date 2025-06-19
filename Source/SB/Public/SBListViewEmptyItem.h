#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBListViewEmptyItem.generated.h"

UCLASS(Transient, Within=ListView)
class USBListViewEmptyItem : public UObject {
    GENERATED_BODY()
public:
    USBListViewEmptyItem();

};

