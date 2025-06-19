#include "LuaCharacter.h"

ALuaCharacter::ALuaCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FLuaBPVar ALuaCharacter::CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args) {
    return FLuaBPVar{};
}


