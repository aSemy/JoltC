#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_BodyLockInterface_destroy(
  JoltC_BodyLockInterface_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_BodyLockInterfaceNoLock_t into JoltC_BodyLockInterface_t.
 */
JoltC_BodyLockInterface_t * JoltC_BodyLockInterface_From_BodyLockInterfaceNoLock(
  JoltC_BodyLockInterfaceNoLock_t * subtype
);

/**
 * Convert an instance of JoltC_BodyLockInterfaceLocking_t into JoltC_BodyLockInterface_t.
 */
JoltC_BodyLockInterface_t * JoltC_BodyLockInterface_From_BodyLockInterfaceLocking(
  JoltC_BodyLockInterfaceLocking_t * subtype
);

//endregion

//region functions

JoltC_Body_t * JoltC_BodyLockInterface_TryGetBody(
  JoltC_BodyLockInterface_t * self,
  JoltC_BodyID_t * inBodyID
);

//endregion


#ifdef __cplusplus
}
#endif
