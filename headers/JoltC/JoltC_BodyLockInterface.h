#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Body_t * JoltC_BodyLockInterface_TryGetBody(
  JoltC_BodyLockInterface_t * self,
  const JoltC_BodyID_t * inBodyID,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

