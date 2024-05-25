#include "JoltC/JoltC_VehicleCollisionTesterRay.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleCollisionTesterRay_t * JoltC_VehicleCollisionTesterRay_new(
  unsigned long inObjectLayer,
  JoltC_Vec3_t * inUp,
  float inMaxSlopeAngle,
  char** outErrMsg
) {
  try {
    JoltC_VehicleCollisionTesterRay_t * cInstance = new JoltC_VehicleCollisionTesterRay_t();
    VehicleCollisionTesterRay * cppInstance = new VehicleCollisionTesterRay(
      inObjectLayer,
      *reinterpret_cast<Vec3 *>(inUp->obj),
      inMaxSlopeAngle
    );
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

unsigned long JoltC_VehicleCollisionTesterRay_GetRefCount(
  JoltC_VehicleCollisionTesterRay_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTesterRay * selfCpp = static_cast<VehicleCollisionTesterRay *>(self->obj);
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

void JoltC_VehicleCollisionTesterRay_AddRef(
  JoltC_VehicleCollisionTesterRay_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTesterRay * selfCpp = static_cast<VehicleCollisionTesterRay *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleCollisionTesterRay_Release(
  JoltC_VehicleCollisionTesterRay_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTesterRay * selfCpp = static_cast<VehicleCollisionTesterRay *>(self->obj);
    
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

