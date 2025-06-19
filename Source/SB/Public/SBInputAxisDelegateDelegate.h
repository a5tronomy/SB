#pragma once
#include "CoreMinimal.h"
#include "ESBInputAxisType.h"
#include "SBInputAxisDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FSBInputAxisDelegate, float, Value, TEnumAsByte<ESBInputAxisType>, InputAxisType);

