#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_BodyLockInterfaceNoLock_destroy(
  JoltC_BodyLockInterfaceNoLock_t * self
);

//endregion
//region functions

JoltC_Body_t * JoltC_BodyLockInterfaceNoLock_TryGetBody(
  JoltC_BodyLockInterfaceNoLock_t * self,
  JoltC_BodyID_t * inBodyID
);

//endregion


#ifdef __cplusplus
}
#endif
