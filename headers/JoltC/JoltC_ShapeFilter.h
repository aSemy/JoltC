#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeFilter_t * JoltC_ShapeFilter_new();

//endregion

//region destructor

void JoltC_ShapeFilter_destroy(
  JoltC_ShapeFilter_t * self
);

//endregion

#ifdef __cplusplus
}
#endif
