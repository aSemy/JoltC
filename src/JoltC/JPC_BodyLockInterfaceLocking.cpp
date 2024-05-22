#include "JoltC/JPC_BodyLockInterfaceLocking.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Body_t * JPC_BodyLockInterfaceLocking_TryGetBody(
  JPC_BodyLockInterfaceLocking_t * self,
  const JPC_BodyID_t * inBodyID
) {
  BodyLockInterfaceLocking * selfCpp = static_cast<BodyLockInterfaceLocking *>(self->obj);
  Body * result = selfCpp->TryGetBody(
  *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  return reinterpret_cast<JPC_Body_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

