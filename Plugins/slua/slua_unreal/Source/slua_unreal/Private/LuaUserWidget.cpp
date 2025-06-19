#include "LuaUserWidget.h"

ULuaUserWidget::ULuaUserWidget() : UUserWidget(FObjectInitializer::Get()) {
}

FLuaBPVar ULuaUserWidget::CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args) {
    return FLuaBPVar{};
}


