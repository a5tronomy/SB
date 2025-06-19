#include "SBShowParticleDynamicInstanceParameter.h"

FSBShowParticleDynamicInstanceParameter::FSBShowParticleDynamicInstanceParameter() {
    this->Type = ESBParticleDynamicInstanceParameterType::Scalar;
    this->bCurveNormalizedAge = false;
    this->TargetActor = ShowCharParticleTarget_MainActor;
    this->TargetIndex = 0;
    this->bUseTargetEquipment = false;
    this->TargetEquipment = EquipmentType_None;
}

