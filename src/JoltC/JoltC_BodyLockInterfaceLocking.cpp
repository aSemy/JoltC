#include "JoltC/JoltC_BodyLockInterfaceLocking.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Body_t * JoltC_BodyLockInterfaceLocking_TryGetBody(
  JoltC_BodyLockInterfaceLocking_t * self,
  const JoltC_BodyID_t * inBodyID,
  char** outErrMsg
) {
  try {
    BodyLockInterfaceLocking * selfCpp = static_cast<BodyLockInterfaceLocking *>(self->obj);
    Body * result = selfCpp->TryGetBody(
    *reinterpret_cast<BodyID *>(inBodyID->obj)
    );
    return reinterpret_cast<JoltC_Body_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

#ifdef __cplusplus
}
#endif

