#include "ParticleSystemWidget.h"

UParticleSystemWidget::UParticleSystemWidget() {
    this->ParticleSystemTemplate = NULL;
    this->bReactivate = false;
    this->WorldParticleComponent = NULL;
    this->WorldParticleActor = NULL;
}

void UParticleSystemWidget::SetReactivate(bool bActivateAndReset) {
}

void UParticleSystemWidget::ActivateParticles(bool bActive, bool bReset) {
}


