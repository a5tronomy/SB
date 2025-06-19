#pragma once
#include "CoreMinimal.h"
#include "ESBItemNotificationType.generated.h"

UENUM()
enum ESBItemNotificationType {
    ESBItemNotificationType_Default,
    ESBItemNotificationType_Always,
    ESBItemNotificationType_Ignore,
    ESBItemNotificationType_Hidden,
    ESBItemNotificationType_CharLevel,
};

