#include "CameraDollySplineExtra.h"

FCameraDollySplineExtra::FCameraDollySplineExtra() {
    this->Type = CameraDollySpline_Flying;
    this->DollySplineComponent = NULL;
    this->bActive = false;
    this->BlendDuration = 0.00f;
    this->bOverrideBlendDuration = false;
    this->OverrideProbeSize = 0.00f;
    this->bOverrideProbeSize = false;
}

