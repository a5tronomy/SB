#pragma once
#include "CoreMinimal.h"
#include "ESBEquipType.h"
#include "SBItemInstance.h"
#include "SBSaveOptionData_ActorEquipment.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveOptionData_ActorEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<ESBEquipType>, FSBItemInstance> EquipmentMap;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FavoriteItemArray;
    
    SB_API FSBSaveOptionData_ActorEquipment();
};

