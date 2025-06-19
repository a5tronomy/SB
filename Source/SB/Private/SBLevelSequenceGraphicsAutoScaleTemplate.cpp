#include "SBLevelSequenceGraphicsAutoScaleTemplate.h"

FSBLevelSequenceGraphicsAutoScaleTemplate::FSBLevelSequenceGraphicsAutoScaleTemplate() {
    this->AmbientOcclusionMaxQuality = false;
    this->AmbientOcclusionRadiusScale = false;
    this->LightShaftDownSampleFactor = false;
    this->VolumetricFogGridSizeZ = false;
    this->VolumetricFogGridPixelSize = false;
    this->PostProcessAAQuality = false;
    this->EnableCustomDepth = false;
    this->EnableDecalChannelMaskPass = false;
    this->VolumetricCloudHide = false;
    this->DOFRecombineOff = false;
    this->FogOff = false;
    this->VolumetricFogOff = false;
    this->FoliageForceLOD = 0;
    this->AmbientOcclusionLevel = 0;
    this->FSR2ScreenPercentage4KOnly = 0;
    this->AmbientCubemapOff = false;
    this->SSROff = false;
    this->UsePDODither = false;
    this->PDODitherAlphaThreshold = 0.00f;
    this->RVTUpdateSkip = false;
    this->EnableDistanceFieldsRealloc = false;
    this->EnableFSR2BrightnessToneDown = false;
    this->EnableHLOD = false;
    this->NearClipPlane = 0.00f;
}

