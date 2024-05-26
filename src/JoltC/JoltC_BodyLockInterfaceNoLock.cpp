#include "JoltC/JoltC_BodyLockInterfaceNoLock.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Body_t * JoltC_BodyLockInterfaceNoLock_TryGetBody(
  JoltC_BodyLockInterfaceNoLock_t * self,
  const JoltC_BodyID_t * inBodyID
) {
  BodyLockInterfaceNoLock * selfCpp = static_cast<BodyLockInterfaceNoLock *>(self->obj);
  Body * result = selfCpp->TryGetBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return reinterpret_cast<JoltC_Body_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

