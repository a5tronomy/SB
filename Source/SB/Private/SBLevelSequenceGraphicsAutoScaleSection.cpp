#include "SBLevelSequenceGraphicsAutoScaleSection.h"

USBLevelSequenceGraphicsAutoScaleSection::USBLevelSequenceGraphicsAutoScaleSection() {
    this->bSupportsInfiniteRange = true;
    this->AmbientOcclusionMaxQuality = false;
    this->AmbientOcclusionRadiusScale = false;
    this->LightShaftDownSampleFactor = false;
    this->VolumetricFogGridSizeZ = false;
    this->VolumetricFogGridPixelSize = false;
    this->PostProcessAAQuality = false;
    this->EnableCustomDepth = true;
    this->EnableDecalChannelMaskPass = true;
    this->VolumetricCloudHide = false;
    this->DOFRecombineOff = false;
    this->FogOff = false;
    this->VolumetricFogOff = false;
    this->FoliageForceLOD = -1;
    this->AmbientOcclusionLevel = -1;
    this->FSR2ScreenPercentage4KOnly = 100;
    this->AmbientCubemapOff = false;
    this->SSROff = false;
    this->UsePDODither = false;
    this->PDODitherAlphaThreshold = 0.50f;
    this->RVTUpdateSkip = false;
    this->EnableDistanceFieldsRealloc = false;
    this->EnableFSR2BrightnessToneDown = false;
    this->EnableHLOD = false;
    this->NearClipPlane = 10.00f;
}


