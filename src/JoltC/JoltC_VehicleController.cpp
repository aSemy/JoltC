#include "JoltC/JoltC_VehicleController.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_VehicleController_GetRefCount(
  JoltC_VehicleController_t * self,
  char** outErrMsg
) {
  try {
    VehicleController * selfCpp = static_cast<VehicleController *>(self->obj);
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

void JoltC_VehicleController_AddRef(
  JoltC_VehicleController_t * self,
  char** outErrMsg
) {
  try {
    VehicleController * selfCpp = static_cast<VehicleController *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleController_Release(
  JoltC_VehicleController_t * self,
  char** outErrMsg
) {
  try {
    VehicleController * selfCpp = static_cast<VehicleController *>(self->obj);
    
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

