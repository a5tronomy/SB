#include "SBFeedbackActor.h"

ASBFeedbackActor::ASBFeedbackActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpriteBackLog = NULL;
    this->SpriteCheck = NULL;
    this->SpriteProgress = NULL;
    this->SpriteComplete = NULL;
    this->SpriteDestruct = NULL;
    this->inited = false;
    this->CacheWidgetComponent = NULL;
    this->CacheBillboardComponent = NULL;
}


