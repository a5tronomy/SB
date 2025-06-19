#pragma once
#include "CoreMinimal.h"
#include "EPropertyClass.generated.h"

UENUM()
enum class EPropertyClass {
    Byte,
    Int8,
    Int16,
    Int,
    Int64,
    UInt16,
    UInt32,
    UInt64,
    UnsizedInt,
    UnsizedUInt,
    Float,
    Double,
    Bool,
    SoftClass,
    WeakObject,
    LazyObject,
    SoftObject,
    Class,
    Object,
    Interface,
    Name,
    Str,
    Array,
    Map,
    Set,
    Struct,
    Delegate,
    MulticastDelegate,
    Text,
    Enum,
};

