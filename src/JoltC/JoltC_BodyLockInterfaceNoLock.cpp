#include "JoltC/JoltC_BodyLockInterfaceNoLock.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_BodyLockInterfaceNoLock_destroy(
  JoltC_BodyLockInterfaceNoLock_t * self
){
  if (self == NULL) return;
  delete static_cast<BodyLockInterfaceNoLock *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Body_t * JoltC_BodyLockInterfaceNoLock_TryGetBody(
  JoltC_BodyLockInterfaceNoLock_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyLockInterfaceNoLock * selfCpp = static_cast<BodyLockInterfaceNoLock *>(self->obj);
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
