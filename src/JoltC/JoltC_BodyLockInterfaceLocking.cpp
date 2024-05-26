#include "JoltC/JoltC_BodyLockInterfaceLocking.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Body_t * JoltC_BodyLockInterfaceLocking_TryGetBody(
  JoltC_BodyLockInterfaceLocking_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyLockInterfaceLocking * selfCpp = static_cast<BodyLockInterfaceLocking *>(self->obj);
  Body * resultValue = selfCpp->TryGetBody(
    *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  JoltC_Body_t* result = new JoltC_Body_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

