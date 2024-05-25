#include "JoltC/JPC_BodyLockInterface.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Body_t * JPC_BodyLockInterface_TryGetBody(
  JPC_BodyLockInterface_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyLockInterface * selfCpp = static_cast<BodyLockInterface *>(self->obj);
  Body * result = selfCpp->TryGetBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return reinterpret_cast<JPC_Body_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

