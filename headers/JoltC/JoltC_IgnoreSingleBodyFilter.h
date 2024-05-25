#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IgnoreSingleBodyFilter_t * JoltC_IgnoreSingleBodyFilter_new(
  const JoltC_BodyID_t * inBodyID,
  char** outErrMsg
);

//endregion constructors


#ifdef __cplusplus
}
#endif

