#pragma once
#include "CoreMinimal.h"
#include "ACLCompressionLevel.generated.h"

UENUM()
enum ACLCompressionLevel {
    ACLCL_Lowest,
    ACLCL_Low,
    ACLCL_Medium,
    ACLCL_High,
    ACLCL_Highest,
};

