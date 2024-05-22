#include "JoltC/JPC_BodyLockInterfaceNoLock.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Body_t * JPC_BodyLockInterfaceNoLock_TryGetBody(
  JPC_BodyLockInterfaceNoLock_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyLockInterfaceNoLock * selfCpp = static_cast<BodyLockInterfaceNoLock *>(self->obj);
  Body * result = selfCpp->TryGetBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return reinterpret_cast<JPC_Body_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

