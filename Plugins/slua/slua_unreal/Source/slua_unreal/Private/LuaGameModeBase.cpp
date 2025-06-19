#include "LuaGameModeBase.h"

ALuaGameModeBase::ALuaGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FLuaBPVar ALuaGameModeBase::CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args) {
    return FLuaBPVar{};
}


