#include "SBPostProcessDepthOfFieldAdvanceData.h"

FSBPostProcessDepthOfFieldAdvanceData::FSBPostProcessDepthOfFieldAdvanceData() {
    this->bOverride_DepthOfFieldOcclusion = false;
    this->bOverride_DepthOfFieldBokehShape = false;
    this->bOverride_DepthOfFieldColorThreshold = false;
    this->bOverride_DepthOfFieldSizeThreshold = false;
    this->bOverride_DepthOfFieldSkyFocusDistance = false;
    this->bOverride_DepthOfFieldVignetteSize = false;
    this->DepthOfFieldOcclusion = 0.00f;
    this->DepthOfFieldBokehShape = NULL;
    this->DepthOfFieldColorThreshold = 0.00f;
    this->DepthOfFieldSizeThreshold = 0.00f;
    this->DepthOfFieldSkyFocusDistance = 0.00f;
    this->DepthOfFieldVignetteSize = 0.00f;
}

