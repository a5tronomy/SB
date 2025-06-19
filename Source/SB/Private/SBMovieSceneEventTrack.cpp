#include "SBMovieSceneEventTrack.h"

USBMovieSceneEventTrack::USBMovieSceneEventTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AtEndOfEvaluation;
}


