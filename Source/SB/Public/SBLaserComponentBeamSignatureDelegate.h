#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBLaserComponentBeamSignatureDelegate.generated.h"

class UNiagaraComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FSBLaserComponentBeamSignature, UNiagaraComponent*, NiagaraComponent, FVector, StartPos, FVector, EndPos, FVector, ForwardVector, float, Length, FVector, HitSurfaceNormal, FVector, HitPos, int32, Hit);

