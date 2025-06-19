#pragma once
#include "CoreMinimal.h"
#include "SBItemInstance.h"
#include "SBSaveGameData_ItemObject.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_ItemObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere)
    int32 ItemCount;
    
    UPROPERTY(EditAnywhere)
    FSBItemInstance ItemInstance;
    
    SB_API FSBSaveGameData_ItemObject();
};

