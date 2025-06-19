#include "LuaController.h"

ALuaController::ALuaController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FLuaBPVar ALuaController::CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args) {
    return FLuaBPVar{};
}


