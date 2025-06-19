#pragma once
#include "CoreMinimal.h"
#include "ESBItemEquipStatType.generated.h"

UENUM()
enum ESBItemEquipStatType {
    ESBItemEquipStatType_BaseStat = 1,
    ESBItemEquipStatType_MainStat1 = 11,
    ESBItemEquipStatType_MainStat2,
    ESBItemEquipStatType_SubStat1 = 21,
    ESBItemEquipStatType_SubStat2,
    ESBItemEquipStatType_SubStat3,
    ESBItemEquipStatType_SubStat4,
    ESBItemEquipStatType_SubStat5,
};

