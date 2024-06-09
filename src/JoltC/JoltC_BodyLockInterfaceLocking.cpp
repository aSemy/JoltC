#include "JoltC/JoltC_BodyLockInterfaceLocking.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Body_t * JoltC_BodyLockInterfaceLocking_TryGetBody(
  JoltC_BodyLockInterfaceLocking_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyLockInterfaceLocking * selfCpp = static_cast<BodyLockInterfaceLocking *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  const Body * resultPtr = selfCpp->TryGetBody(
    *inBodyIDCpp
  );
  JoltC_Body_t * result = new JoltC_Body_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

//endregion

#ifdef __cplusplus
}
#endif

