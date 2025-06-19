#include "SBSoundProcedural.h"

USBSoundProcedural::USBSoundProcedural() : USoundWaveProcedural(FObjectInitializer::Get()) {
    this->FrequenciesToAnalyze.AddDefaulted(4);
}


