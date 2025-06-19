#include "SBLevelSequenceEventPlayerCameraShake2SectionData.h"

FSBLevelSequenceEventPlayerCameraShake2SectionData::FSBLevelSequenceEventPlayerCameraShake2SectionData() {
    this->Waveform = EOscillatorWaveform::SineWave;
    this->OscillationBlendInTime = 0.00f;
    this->OscillationBlendOutTime = 0.00f;
    this->ShakeScale = 0.00f;
    this->bUseScaleCurve = false;
    this->ScaleCurve = NULL;
}

