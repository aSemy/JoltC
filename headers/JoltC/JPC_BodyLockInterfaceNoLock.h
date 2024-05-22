#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Body_t * JPC_BodyLockInterfaceNoLock_TryGetBody(
  JPC_BodyLockInterfaceNoLock_t * self,
  const JPC_BodyID_t * inBodyID
);

//endregion functions


#ifdef __cplusplus
}
#endif

