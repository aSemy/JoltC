#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_BodyLockInterfaceLocking_destroy(
  JoltC_BodyLockInterfaceLocking_t * self
);

//endregion
//region functions

JoltC_Body_t * JoltC_BodyLockInterfaceLocking_TryGetBody(
  JoltC_BodyLockInterfaceLocking_t * self,
  JoltC_BodyID_t * inBodyID
);

//endregion


#ifdef __cplusplus
}
#endif
