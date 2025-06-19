#pragma once
#include "CoreMinimal.h"
#include "SBLaserComponentHitTargetSignatureDelegate.generated.h"

class AActor;
class UNiagaraComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBLaserComponentHitTargetSignature, UNiagaraComponent*, NiagaraComponent, AActor*, HitActor);

