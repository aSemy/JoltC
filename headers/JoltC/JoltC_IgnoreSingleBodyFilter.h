#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IgnoreSingleBodyFilter_t * JoltC_IgnoreSingleBodyFilter_new(
  JoltC_BodyID_t * inBodyID
);

//endregion

//region destructor

void JoltC_IgnoreSingleBodyFilter_destroy(
  JoltC_IgnoreSingleBodyFilter_t * self
);

//endregion

#ifdef __cplusplus
}
#endif
