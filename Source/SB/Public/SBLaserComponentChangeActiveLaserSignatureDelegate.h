#pragma once
#include "CoreMinimal.h"
#include "SBLaserComponentChangeActiveLaserSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBLaserComponentChangeActiveLaserSignature, bool, bIsLaserActive);

