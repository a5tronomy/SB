#pragma once
#include "CoreMinimal.h"
#include "SBOnListFastFocusDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBOnListFastFocus, bool, bChangeFocus);

