#include "JoltC/JoltC_VehicleCollisionTester.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_VehicleCollisionTester_GetRefCount(
  JoltC_VehicleCollisionTester_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTester * selfCpp = static_cast<VehicleCollisionTester *>(self->obj);
    unsigned long result = selfCpp->GetRefCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleCollisionTester_AddRef(
  JoltC_VehicleCollisionTester_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTester * selfCpp = static_cast<VehicleCollisionTester *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleCollisionTester_Release(
  JoltC_VehicleCollisionTester_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTester * selfCpp = static_cast<VehicleCollisionTester *>(self->obj);
    
    selfCpp->Release();
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

