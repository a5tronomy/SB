#include "LuaPlayerController.h"

ALuaPlayerController::ALuaPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

FLuaBPVar ALuaPlayerController::CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args) {
    return FLuaBPVar{};
}


