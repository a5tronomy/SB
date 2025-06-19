#include "SBAIController.h"
#include "Navigation/CrowdFollowingComponent.h"

ASBAIController::ASBAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent"))) {
}


