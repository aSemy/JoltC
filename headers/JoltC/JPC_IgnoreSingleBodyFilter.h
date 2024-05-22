#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_IgnoreSingleBodyFilter_t * JPC_IgnoreSingleBodyFilter_new(
  const JPC_BodyID_t * inBodyID
);

//endregion constructors


#ifdef __cplusplus
}
#endif

