#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBSaveObjectInfo.h"
#include "SBSaveManager.generated.h"

UCLASS()
class SB_API USBSaveManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FSBSaveObjectInfo> SaveObjectList;
    
public:
    USBSaveManager();

};

