#include "JoltC/JoltC_BodyLockInterfaceNoLock.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Body_t * JoltC_BodyLockInterfaceNoLock_TryGetBody(
  JoltC_BodyLockInterfaceNoLock_t * self,
  JoltC_BodyID_t * inBodyID
) {
  BodyLockInterfaceNoLock * selfCpp = static_cast<BodyLockInterfaceNoLock *>(self->obj);
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

