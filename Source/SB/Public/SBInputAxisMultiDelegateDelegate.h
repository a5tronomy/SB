#pragma once
#include "CoreMinimal.h"
#include "ESBInputAxisType.h"
#include "SBInputAxisMultiDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBInputAxisMultiDelegate, float, Value, TEnumAsByte<ESBInputAxisType>, InputAxisType);

