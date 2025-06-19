#include "LuaActorComponent.h"

ULuaActorComponent::ULuaActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FLuaBPVar ULuaActorComponent::CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args) {
    return FLuaBPVar{};
}


