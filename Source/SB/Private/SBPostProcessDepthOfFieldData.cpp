#include "SBPostProcessDepthOfFieldData.h"

FSBPostProcessDepthOfFieldData::FSBPostProcessDepthOfFieldData() {
    this->bOverride_DepthOfFieldMethod = false;
    this->bOverride_DepthOfFieldFocalDistance = false;
    this->bOverride_DepthOfFieldDepthBlurAmount = false;
    this->bOverride_DepthOfFieldDepthBlurRadius = false;
    this->bOverride_DepthOfFieldFocalRegion = false;
    this->bOverride_DepthOfFieldNearTransitionRegion = false;
    this->bOverride_DepthOfFieldFarTransitionRegion = false;
    this->bOverride_DepthOfFieldScale = false;
    this->bOverride_DepthOfFieldMaxBokehSize = false;
    this->bOverride_DepthOfFieldNearBlurSize = false;
    this->bOverride_DepthOfFieldFarBlurSize = false;
    this->DepthOfFieldMethod = DOFM_BokehDOF;
    this->DepthOfFieldFocalDistance = 0.00f;
    this->DepthOfFieldDepthBlurAmount = 0.00f;
    this->DepthOfFieldDepthBlurRadius = 0.00f;
    this->DepthOfFieldFocalRegion = 0.00f;
    this->DepthOfFieldNearTransitionRegion = 0.00f;
    this->DepthOfFieldFarTransitionRegion = 0.00f;
    this->DepthOfFieldScale = 0.00f;
    this->DepthOfFieldMaxBokehSize = 0.00f;
    this->DepthOfFieldNearBlurSize = 0.00f;
    this->DepthOfFieldFarBlurSize = 0.00f;
}

