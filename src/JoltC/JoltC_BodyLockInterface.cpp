#include "JoltC/JoltC_BodyLockInterface.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_BodyLockInterface_destroy(
  JoltC_BodyLockInterface_t * self
){
  if (self == NULL) return;
  delete static_cast<BodyLockInterface *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_BodyLockInterfaceNoLock_t into JoltC_BodyLockInterface_t.
 */
JoltC_BodyLockInterface_t * JoltC_BodyLockInterface_From_BodyLockInterfaceNoLock(
  JoltC_BodyLockInterfaceNoLock_t * subtype
) {
  return (JoltC_BodyLockInterface_t*) subtype;
};

/**
 * Convert an instance of JoltC_BodyLockInterfaceLocking_t into JoltC_BodyLockInterface_t.
 */
JoltC_BodyLockInterface_t * JoltC_BodyLockInterface_From_BodyLockInterfaceLocking(
  JoltC_BodyLockInterfaceLocking_t * subtype
) {
  return (JoltC_BodyLockInterface_t*) subtype;
};

//endregion

//region functions

JoltC_Body_t * JoltC_BodyLockInterface_TryGetBody(
  JoltC_BodyLockInterface_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyLockInterface * selfCpp = static_cast<BodyLockInterface *>(self->obj);
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
