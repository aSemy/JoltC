#include "JoltC/JoltC_VehicleCollisionTesterCastCylinder.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleCollisionTesterCastCylinder_t * JoltC_VehicleCollisionTesterCastCylinder_new(
  unsigned long inObjectLayer,
  float inConvexRadiusFraction,
  char** outErrMsg
) {
  try {
    JoltC_VehicleCollisionTesterCastCylinder_t * cInstance = new JoltC_VehicleCollisionTesterCastCylinder_t();
    VehicleCollisionTesterCastCylinder * cppInstance = new VehicleCollisionTesterCastCylinder(
      inObjectLayer,
      inConvexRadiusFraction
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

unsigned long JoltC_VehicleCollisionTesterCastCylinder_GetRefCount(
  JoltC_VehicleCollisionTesterCastCylinder_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTesterCastCylinder * selfCpp = static_cast<VehicleCollisionTesterCastCylinder *>(self->obj);
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

void JoltC_VehicleCollisionTesterCastCylinder_AddRef(
  JoltC_VehicleCollisionTesterCastCylinder_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTesterCastCylinder * selfCpp = static_cast<VehicleCollisionTesterCastCylinder *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleCollisionTesterCastCylinder_Release(
  JoltC_VehicleCollisionTesterCastCylinder_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTesterCastCylinder * selfCpp = static_cast<VehicleCollisionTesterCastCylinder *>(self->obj);
    
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

