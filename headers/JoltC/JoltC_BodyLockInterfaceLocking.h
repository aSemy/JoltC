#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Body_t * JPC_BodyLockInterfaceLocking_TryGetBody(
  JPC_BodyLockInterfaceLocking_t * self,
  const JPC_BodyID_t * inBodyID
);

//endregion functions


#ifdef __cplusplus
}
#endif

