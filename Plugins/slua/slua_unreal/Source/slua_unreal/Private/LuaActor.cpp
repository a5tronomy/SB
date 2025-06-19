#include "LuaActor.h"

ALuaActor::ALuaActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FLuaBPVar ALuaActor::CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args) {
    return FLuaBPVar{};
}


