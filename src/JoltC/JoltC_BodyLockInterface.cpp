#include "JoltC/JoltC_BodyLockInterface.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

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
  const JoltC_BodyID_t * inBodyID
) {
  BodyLockInterface * selfCpp = static_cast<BodyLockInterface *>(self->obj);
  Body * result = selfCpp->TryGetBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return reinterpret_cast<JoltC_Body_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

